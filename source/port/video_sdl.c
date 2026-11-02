#ifndef _WIN32
#include "video.h"
#include "input.h"
#define GL_GLEXT_PROTOTYPES
#include <SDL.h>
#include <SDL_opengl.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_GLContext gl_context;
static SDL_Texture *game_texture;
static SDL_Texture *overlay_texture;
static int game_w, game_h, overlay_w, overlay_h;
static int window_w, window_h, fullscreen;
static int texture_filter = -1;
static char screenshot_path[600];
static char video_error[256];
static GLuint gl_game_texture, gl_overlay_texture, gl_vao, gl_vbo;
static GLuint gl_builtin[3], gl_overlay_program, gl_external_program;
static int gl_texture_w, gl_texture_h, gl_frame;
static int gl_finish_after_swap; /* the "Wait for the GPU" option: glFinish after every swap */
static char shaders_dir_path[500], ext_names[64][64], ext_paths[64][800], ext_program_name[64];
static int n_ext;
static float ext_params[64];
static char ext_param_names[64][48];
static int n_ext_params;

static const char *gl_vertex_source = "#version 330\nin vec2 in_pos; in vec2 in_uv; out vec2 uv;\n"
                                      "void main() { gl_Position = vec4(in_pos, 0.0, 1.0); uv = in_uv; }\n";
static const char *gl_common_source =
    "#version 330\n"
    "uniform sampler2D tex; uniform vec2 srcSize; uniform vec2 texSize; uniform vec2 outSize;\n"
    "uniform float frame; uniform int smooth_mode; uniform float p_scan; uniform float p_mask;\n"
    "uniform float p_curv; uniform float p_bright; uniform float p_vig; uniform float p_bloom;\n"
    "in vec2 uv; out vec4 fragColor;\n"
    "vec3 fetch(vec2 c) {\n"
    " if (smooth_mode == 0) return texture(tex, (floor(c * texSize) + 0.5) / texSize).rgb;\n"
    " if (smooth_mode == 2) { vec2 p=c*srcSize; vec2 f=fract(p); vec2 i=floor(p);"
    " vec2 s=clamp((f-0.5)*outSize/srcSize+0.5,0.0,1.0); return texture(tex,(i+s)/srcSize).rgb; }\n"
    " return texture(tex,c).rgb;\n"
    "}\n"
    "vec2 curve(vec2 c,float k) { c=c*2.0-1.0; vec2 o=abs(c.yx)*k*0.25;"
    " c=c+c*o*o*2.0; return c*0.5+0.5; }\n";
static const char *gl_frag_none = "void main() { fragColor=vec4(fetch(uv)*p_bright,1.0); }\n";
static const char *gl_frag_scan =
    "void main(){ vec3 c=fetch(uv); float y=uv.y*srcSize.y; float d=fract(y)-0.5;"
    " float w=1.0-p_scan*smoothstep(0.0,0.5,abs(d))*(0.35+0.65*(1.0-dot(c,vec3(0.299,0.587,0.114))));"
    " fragColor=vec4(c*w*p_bright,1.0); }\n";
static const char *gl_frag_crt =
    "void main(){ vec2 q=curve(uv,p_curv*2.0);"
    " if(q.x<0.0||q.x>1.0||q.y<0.0||q.y>1.0){fragColor=vec4(0,0,0,1);return;}"
    " vec3 c=fetch(q); if(p_bloom>0.0){vec2 o=1.5/srcSize;"
    " vec3 b=(fetch(q+vec2(o.x,0))+fetch(q-vec2(o.x,0))+fetch(q+vec2(0,o.y))+fetch(q-vec2(0,o.y)))*0.25;"
    " c=mix(c,max(c,b),p_bloom*0.6)+b*p_bloom*0.15;}"
    " float y=q.y*srcSize.y; float d=fract(y)-0.5; float lum=dot(c,vec3(0.299,0.587,0.114));"
    " float beam=mix(0.55,1.0,lum); float sl=1.0-p_scan*pow(clamp(abs(d)*2.0,0.0,1.0),2.0)*(1.6-beam);"
    " float mkz=max(1.0,outSize.y/1080.0); float a0=(gl_FragCoord.x-0.5)/mkz,b0=(gl_FragCoord.x+0.5)/mkz;"
    " vec3 ch=vec3(0,1,2); vec3 ia=floor(a0/3.0)+clamp(a0-3.0*floor(a0/3.0)-ch,0.0,1.0);"
    " vec3 ib=floor(b0/3.0)+clamp(b0-3.0*floor(b0/3.0)-ch,0.0,1.0);"
    " vec3 mk=mix(vec3(0.35),vec3(1.0),(ib-ia)*mkz); vec3 m=mix(vec3(1.0),mk*1.35,p_mask);"
    " c=c*sl*m*p_bright; vec2 v=q*2.0-1.0; c*=1.0-p_vig*dot(v,v)*0.35; fragColor=vec4(c,1); }\n";
static const char *gl_overlay_fragment = "#version 330\nuniform sampler2D tex; in vec2 uv; out vec4 fragColor;"
                                         "void main(){fragColor=texture(tex,uv);}\n";
static const float gl_quad[16] = {-1, -1, 0, 1, 1, -1, 1, 1, -1, 1, 0, 0, 1, 1, 1, 0};

static void gl_set_error(const char *prefix) {
    snprintf(video_error, sizeof video_error, "%s: %s", prefix, SDL_GetError());
}

static GLuint gl_compile(GLenum type, const char *source) {
    GLuint shader = glCreateShader(type);
    if (!shader)
        return 0;
    glShaderSource(shader, 1, &source, NULL);
    glCompileShader(shader);
    GLint ok = 0;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        GLchar log[220];
        GLsizei n = 0;
        glGetShaderInfoLog(shader, sizeof log - 1, &n, log);
        log[n >= (GLsizei)sizeof log ? sizeof log - 1 : n] = 0;
        snprintf(video_error, sizeof video_error, "Shader compilation failed: %.190s", log);
        glDeleteShader(shader);
        return 0;
    }
    return shader;
}

static GLuint gl_make_program(const char *vs_source, const char *fs_source) {
    GLuint vs = gl_compile(GL_VERTEX_SHADER, vs_source);
    GLuint fs = vs ? gl_compile(GL_FRAGMENT_SHADER, fs_source) : 0;
    if (!vs || !fs) {
        if (vs)
            glDeleteShader(vs);
        return 0;
    }
    GLuint program = glCreateProgram();
    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);
    GLint ok = 0;
    glGetProgramiv(program, GL_LINK_STATUS, &ok);
    glDeleteShader(vs);
    glDeleteShader(fs);
    if (!ok) {
        GLchar log[220];
        GLsizei n = 0;
        glGetProgramInfoLog(program, sizeof log - 1, &n, log);
        log[n >= (GLsizei)sizeof log ? sizeof log - 1 : n] = 0;
        snprintf(video_error, sizeof video_error, "Shader link failed: %.190s", log);
        glDeleteProgram(program);
        return 0;
    }
    return program;
}

static GLuint gl_get_builtin(int which) {
    if (gl_builtin[which])
        return gl_builtin[which];
    const char *body = which == 0 ? gl_frag_none : which == 1 ? gl_frag_scan : gl_frag_crt;
    size_t n = strlen(gl_common_source) + strlen(body) + 1;
    char *source = (char *)malloc(n);
    if (!source) {
        snprintf(video_error, sizeof video_error, "Not enough memory to build video shader");
        return 0;
    }
    snprintf(source, n, "%s%s", gl_common_source, body);
    gl_builtin[which] = gl_make_program(gl_vertex_source, source);
    free(source);
    return gl_builtin[which];
}

static GLuint gl_load_external(const char *path) {
    size_t n;
    uint8_t *data = read_file(path, &n);
    if (!data)
        return 0;
    char *src = (char *)malloc(n + 1);
    if (!src) {
        free(data);
        snprintf(video_error, sizeof video_error, "Not enough memory to load shader");
        return 0;
    }
    size_t k = 0;
    for (size_t i = 0; i < n; i++)
        if (data[i] != '\r')
            src[k++] = (char)data[i];
    src[k] = 0;
    free(data);
    char *body = src;
    if (!strncmp(body, "#version", 8)) {
        while (*body && *body != '\n')
            body++;
        if (*body)
            body++;
    }
    n_ext_params = 0;
    for (char *p = body; (p = strstr(p, "#pragma parameter")) != NULL;) {
        char name[48];
        float def;
        if (sscanf(p, "#pragma parameter %47s \"%*[^\"]\" %f", name, &def) == 2 && n_ext_params < 64) {
            snprintf(ext_param_names[n_ext_params], sizeof ext_param_names[0], "%s", name);
            ext_params[n_ext_params++] = def;
        }
        p += 10;
    }
    size_t m = strlen(body) + 200;
    char *vs = (char *)malloc(m), *fs = (char *)malloc(m);
    if (!vs || !fs) {
        free(vs);
        free(fs);
        free(src);
        snprintf(video_error, sizeof video_error, "Not enough memory to prepare external shader");
        return 0;
    }
    snprintf(vs, m, "#version 330 compatibility\n#define VERTEX\n#define PARAMETER_UNIFORM\n%s", body);
    snprintf(fs, m, "#version 330 compatibility\n#define FRAGMENT\n#define PARAMETER_UNIFORM\n%s", body);
    GLuint program = gl_make_program(vs, fs);
    free(vs);
    free(fs);
    free(src);
    return program;
}

static void gl_scan_external(void) {
    n_ext = 0;
    DIR *dir = opendir(shaders_dir_path);
    if (!dir)
        return;
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL && n_ext < 64) {
        const char *dot = strrchr(entry->d_name, '.');
        if (!dot || strcasecmp(dot, ".glsl"))
            continue;
        snprintf(ext_paths[n_ext], sizeof ext_paths[0], "%s/%.255s", shaders_dir_path, entry->d_name);
        snprintf(ext_names[n_ext], sizeof ext_names[0], "%.63s", entry->d_name);
        dot = strrchr(ext_names[n_ext], '.');
        if (dot)
            *((char *)dot) = 0;
        n_ext++;
    }
    closedir(dir);
}

static void gl_uniform1i(GLuint p, const char *name, int v) {
    GLint location = glGetUniformLocation(p, name);
    if (location >= 0)
        glUniform1i(location, v);
}

static void gl_uniform1f(GLuint p, const char *name, float v) {
    GLint location = glGetUniformLocation(p, name);
    if (location >= 0)
        glUniform1f(location, v);
}

static void gl_uniform2f(GLuint p, const char *name, float x, float y) {
    GLint location = glGetUniformLocation(p, name);
    if (location >= 0)
        glUniform2f(location, x, y);
}

static void gl_draw_quad(GLuint program, int external) {
    float ext_quad[32];
    glBindVertexArray(gl_vao);
    glBindBuffer(GL_ARRAY_BUFFER, gl_vbo);
    if (external) {
        for (int i = 0; i < 4; i++) {
            ext_quad[i * 8] = gl_quad[i * 4];
            ext_quad[i * 8 + 1] = gl_quad[i * 4 + 1];
            ext_quad[i * 8 + 2] = 0.0f;
            ext_quad[i * 8 + 3] = 1.0f;
            ext_quad[i * 8 + 4] = gl_quad[i * 4 + 2];
            ext_quad[i * 8 + 5] = gl_quad[i * 4 + 3];
            ext_quad[i * 8 + 6] = 0.0f;
            ext_quad[i * 8 + 7] = 1.0f;
        }
        glBufferData(GL_ARRAY_BUFFER, sizeof ext_quad, ext_quad, GL_STATIC_DRAW);
    } else {
        glBufferData(GL_ARRAY_BUFFER, sizeof gl_quad, gl_quad, GL_STATIC_DRAW);
    }
    GLint pos = glGetAttribLocation(program, external ? "VertexCoord" : "in_pos");
    GLint uv = glGetAttribLocation(program, external ? "TexCoord" : "in_uv");
    if (pos >= 0) {
        glEnableVertexAttribArray((GLuint)pos);
        glVertexAttribPointer((GLuint)pos, external ? 4 : 2, GL_FLOAT, GL_FALSE, external ? 32 : 16, NULL);
    }
    if (uv >= 0) {
        glEnableVertexAttribArray((GLuint)uv);
        glVertexAttribPointer((GLuint)uv, external ? 4 : 2, GL_FLOAT, GL_FALSE, external ? 32 : 16,
                              (const void *)(uintptr_t)(external ? 16 : 8));
    }
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    if (pos >= 0)
        glDisableVertexAttribArray((GLuint)pos);
    if (uv >= 0)
        glDisableVertexAttribArray((GLuint)uv);
}

static int gl_open(int w, int h, int src_w, int src_h, const char *dir) {
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    window = SDL_CreateWindow("Dogs of War", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h,
                              SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_OPENGL);
    if (!window) {
        gl_set_error("SDL OpenGL window creation failed");
        return 0;
    }
    gl_context = SDL_GL_CreateContext(window);
    if (!gl_context) {
        gl_set_error("OpenGL 3.3 context creation failed");
        SDL_DestroyWindow(window);
        window = NULL;
        return 0;
    }
    if (SDL_GL_MakeCurrent(window, gl_context) != 0) {
        gl_set_error("Could not activate OpenGL context");
        SDL_GL_DeleteContext(gl_context);
        gl_context = NULL;
        SDL_DestroyWindow(window);
        window = NULL;
        return 0;
    }
    SDL_GL_SetSwapInterval(1);
    if (!gl_get_builtin(0)) {
        SDL_GL_DeleteContext(gl_context);
        gl_context = NULL;
        SDL_DestroyWindow(window);
        window = NULL;
        return 0;
    }
    host_log("OpenGL %s: %s", (const char *)glGetString(GL_VERSION), (const char *)glGetString(GL_RENDERER));
    game_w = src_w;
    game_h = src_h;
    snprintf(shaders_dir_path, sizeof shaders_dir_path, "%s", dir ? dir : "");
    gl_scan_external();
    glGenTextures(1, &gl_game_texture);
    glBindTexture(GL_TEXTURE_2D, gl_game_texture);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, game_w, game_h, 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glGenTextures(1, &gl_overlay_texture);
    glBindTexture(GL_TEXTURE_2D, gl_overlay_texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glGenVertexArrays(1, &gl_vao);
    glBindVertexArray(gl_vao);
    glGenBuffers(1, &gl_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, gl_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof gl_quad, gl_quad, GL_STATIC_DRAW);
    SDL_GL_GetDrawableSize(window, &window_w, &window_h);
    return 1;
}

static int event_modifiers(SDL_Keymod mod) {
    return ((mod & KMOD_SHIFT) ? 1 : 0) | ((mod & KMOD_CTRL) ? 2 : 0) | ((mod & KMOD_ALT) ? 4 : 0);
}

static int vk_from_scancode(SDL_Scancode sc) {
    if (sc >= SDL_SCANCODE_A && sc <= SDL_SCANCODE_Z)
        return 'A' + sc - SDL_SCANCODE_A;
    if (sc >= SDL_SCANCODE_1 && sc <= SDL_SCANCODE_9)
        return '1' + sc - SDL_SCANCODE_1;
    if (sc == SDL_SCANCODE_0)
        return '0';
    if (sc >= SDL_SCANCODE_KP_1 && sc <= SDL_SCANCODE_KP_9)
        return VK_NUMPAD1 + sc - SDL_SCANCODE_KP_1;
    switch (sc) {
        case SDL_SCANCODE_KP_0:
            return VK_NUMPAD0;
        case SDL_SCANCODE_UP:
            return VK_UP;
        case SDL_SCANCODE_DOWN:
            return VK_DOWN;
        case SDL_SCANCODE_LEFT:
            return VK_LEFT;
        case SDL_SCANCODE_RIGHT:
            return VK_RIGHT;
        case SDL_SCANCODE_LCTRL:
            return VK_LCONTROL;
        case SDL_SCANCODE_RCTRL:
            return VK_RCONTROL;
        case SDL_SCANCODE_LSHIFT:
            return VK_LSHIFT;
        case SDL_SCANCODE_RSHIFT:
            return VK_RSHIFT;
        case SDL_SCANCODE_LALT:
            return VK_LMENU;
        case SDL_SCANCODE_RALT:
            return VK_RMENU;
        case SDL_SCANCODE_SPACE:
            return VK_SPACE;
        case SDL_SCANCODE_RETURN:
            return VK_RETURN;
        case SDL_SCANCODE_KP_ENTER:
            return 0x10D;
        case SDL_SCANCODE_ESCAPE:
            return VK_ESCAPE;
        case SDL_SCANCODE_BACKSPACE:
            return VK_BACK;
        case SDL_SCANCODE_TAB:
            return VK_TAB;
        case SDL_SCANCODE_DELETE:
            return VK_DELETE;
        case SDL_SCANCODE_INSERT:
            return VK_INSERT;
        case SDL_SCANCODE_HOME:
            return VK_HOME;
        case SDL_SCANCODE_END:
            return VK_END;
        case SDL_SCANCODE_PAGEUP:
            return VK_PRIOR;
        case SDL_SCANCODE_PAGEDOWN:
            return VK_NEXT;
        case SDL_SCANCODE_F1:
            return VK_F1;
        case SDL_SCANCODE_F2:
            return VK_F2;
        case SDL_SCANCODE_F3:
            return VK_F3;
        case SDL_SCANCODE_F4:
            return VK_F4;
        case SDL_SCANCODE_F5:
            return VK_F5;
        case SDL_SCANCODE_F6:
            return VK_F6;
        case SDL_SCANCODE_F7:
            return VK_F7;
        case SDL_SCANCODE_F8:
            return VK_F8;
        case SDL_SCANCODE_F9:
            return VK_F9;
        case SDL_SCANCODE_F10:
            return VK_F10;
        case SDL_SCANCODE_F11:
            return VK_F11;
        case SDL_SCANCODE_F12:
            return VK_F12;
        case SDL_SCANCODE_F13:
            return VK_F13;
        case SDL_SCANCODE_F14:
            return VK_F14;
        case SDL_SCANCODE_F15:
            return VK_F15;
        case SDL_SCANCODE_F16:
            return VK_F16;
        case SDL_SCANCODE_F17:
            return VK_F17;
        case SDL_SCANCODE_F18:
            return VK_F18;
        case SDL_SCANCODE_F19:
            return VK_F19;
        case SDL_SCANCODE_F20:
            return VK_F20;
        case SDL_SCANCODE_F21:
            return VK_F21;
        case SDL_SCANCODE_F22:
            return VK_F22;
        case SDL_SCANCODE_F23:
            return VK_F23;
        case SDL_SCANCODE_F24:
            return VK_F24;
        case SDL_SCANCODE_MINUS:
            return 0xBD;
        case SDL_SCANCODE_EQUALS:
            return 0xBB;
        case SDL_SCANCODE_LEFTBRACKET:
            return 0xDB;
        case SDL_SCANCODE_RIGHTBRACKET:
            return 0xDD;
        case SDL_SCANCODE_BACKSLASH:
            return 0xDC;
        case SDL_SCANCODE_SEMICOLON:
            return 0xBA;
        case SDL_SCANCODE_APOSTROPHE:
            return 0xDE;
        case SDL_SCANCODE_GRAVE:
            return 0xC0;
        case SDL_SCANCODE_COMMA:
            return 0xBC;
        case SDL_SCANCODE_PERIOD:
            return 0xBE;
        case SDL_SCANCODE_SLASH:
            return 0xBF;
        case SDL_SCANCODE_KP_PLUS:
            return VK_ADD;
        case SDL_SCANCODE_KP_MINUS:
            return VK_SUBTRACT;
        case SDL_SCANCODE_KP_MULTIPLY:
            return VK_MULTIPLY;
        case SDL_SCANCODE_KP_DIVIDE:
            return VK_DIVIDE;
        case SDL_SCANCODE_KP_PERIOD:
            return VK_DECIMAL;
        case SDL_SCANCODE_CAPSLOCK:
            return VK_CAPITAL;
        case SDL_SCANCODE_NUMLOCKCLEAR:
            return VK_NUMLOCK;
        case SDL_SCANCODE_SCROLLLOCK:
            return VK_SCROLL;
        case SDL_SCANCODE_PAUSE:
            return VK_PAUSE;
        case SDL_SCANCODE_PRINTSCREEN:
            return VK_SNAPSHOT;
        case SDL_SCANCODE_APPLICATION:
            return VK_APPS;
        default:
            return 0;
    }
}

static SDL_Scancode scancode_from_vk(int vk) {
    if (vk >= 'A' && vk <= 'Z')
        return (SDL_Scancode)(SDL_SCANCODE_A + vk - 'A');
    if (vk >= '1' && vk <= '9')
        return (SDL_Scancode)(SDL_SCANCODE_1 + vk - '1');
    if (vk == '0')
        return SDL_SCANCODE_0;
    if (vk == VK_NUMPAD0)
        return SDL_SCANCODE_KP_0;
    if (vk >= VK_NUMPAD1 && vk <= VK_NUMPAD9)
        return (SDL_Scancode)(SDL_SCANCODE_KP_1 + vk - VK_NUMPAD1);
    switch (vk) {
        case VK_UP:
            return SDL_SCANCODE_UP;
        case VK_DOWN:
            return SDL_SCANCODE_DOWN;
        case VK_LEFT:
            return SDL_SCANCODE_LEFT;
        case VK_RIGHT:
            return SDL_SCANCODE_RIGHT;
        case VK_CONTROL:
        case VK_LCONTROL:
            return SDL_SCANCODE_LCTRL;
        case VK_RCONTROL:
            return SDL_SCANCODE_RCTRL;
        case VK_SPACE:
            return SDL_SCANCODE_SPACE;
        default:
            return SDL_SCANCODE_UNKNOWN;
    }
}

static int configure_wslg(void) {
    if (!getenv("WSL2_GUI_APPS_ENABLED") || !getenv("WAYLAND_DISPLAY") || !getenv("XDG_RUNTIME_DIR"))
        return 1;
    /* WSLg's X11 path can fall back to llvmpipe; Wayland with D3D12 uses the host GPU. */
    if (!getenv("SDL_VIDEODRIVER") && setenv("SDL_VIDEODRIVER", "wayland", 0) != 0) {
        snprintf(video_error, sizeof video_error, "Could not select WSLg Wayland video: %s", strerror(errno));
        return 0;
    }
    if (!getenv("GALLIUM_DRIVER") && setenv("GALLIUM_DRIVER", "d3d12", 0) != 0) {
        snprintf(video_error, sizeof video_error, "Could not select WSLg D3D12 renderer: %s", strerror(errno));
        return 0;
    }
    return 1;
}

int video_open(int w, int h, int src_w, int src_h, const char *shaders_dir) {
    if (!configure_wslg())
        return 0;
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_GAMECONTROLLER) != 0) {
        snprintf(video_error, sizeof video_error, "SDL initialization failed: %s", SDL_GetError());
        return 0;
    }
    if (gl_open(w, h, src_w, src_h, shaders_dir)) {
        fullscreen = 0;
        return 1;
    }
    if (!video_error[0])
        snprintf(video_error, sizeof video_error, "OpenGL 3.3 is required for Linux video output");
    return 0;
}

void video_close(void) {
    if (gl_context) {
        SDL_GL_MakeCurrent(window, gl_context);
        for (int i = 0; i < 3; i++)
            if (gl_builtin[i])
                glDeleteProgram(gl_builtin[i]);
        if (gl_overlay_program)
            glDeleteProgram(gl_overlay_program);
        if (gl_external_program)
            glDeleteProgram(gl_external_program);
        if (gl_game_texture)
            glDeleteTextures(1, &gl_game_texture);
        if (gl_overlay_texture)
            glDeleteTextures(1, &gl_overlay_texture);
        if (gl_vbo)
            glDeleteBuffers(1, &gl_vbo);
        if (gl_vao)
            glDeleteVertexArrays(1, &gl_vao);
        SDL_GL_DeleteContext(gl_context);
        gl_context = NULL;
    }
    if (game_texture)
        SDL_DestroyTexture(game_texture);
    if (overlay_texture)
        SDL_DestroyTexture(overlay_texture);
    if (renderer)
        SDL_DestroyRenderer(renderer);
    game_texture = overlay_texture = NULL;
    renderer = NULL;
    if (window)
        SDL_DestroyWindow(window);
    window = NULL;
    gl_game_texture = gl_overlay_texture = gl_vbo = gl_vao = 0;
    gl_overlay_program = gl_external_program = 0;
    memset(gl_builtin, 0, sizeof gl_builtin);
    ext_program_name[0] = 0;
    n_ext = 0;
    game_w = game_h = overlay_w = overlay_h = window_w = window_h = 0;
    gl_texture_w = gl_texture_h = gl_frame = 0;
    texture_filter = -1;
}

int video_is_software(void) {
    return gl_context == NULL;
}

void video_set_preset(const char *name) {
    static const struct {
        const char *name;
        int filter;
        VidParams params;
    } presets[] = {{"None", 0, {0, 0, 0, 1, 0, 0}},
                   {"Scanlines", 1, {0.45f, 0, 0, 1.08f, 0, 0}},
                   {"Soft CRT", 1, {0.35f, 0.25f, 0.10f, 1.10f, 0.35f, 0.15f}},
                   {"Full CRT", 1, {0.65f, 0.55f, 0.22f, 1.25f, 0.60f, 0.50f}}};
    for (size_t i = 0; i < sizeof presets / sizeof presets[0]; i++)
        if (!strcmp(presets[i].name, name)) {
            snprintf(vcfg.preset, sizeof vcfg.preset, "%s", name);
            vcfg.filter = presets[i].filter;
            vcfg.p = presets[i].params;
            vcfg.external[0] = 0;
            return;
        }
}

void video_use_external(const char *name) {
    snprintf(vcfg.external, sizeof vcfg.external, "%s", name);
    if (gl_external_program && gl_context) {
        glDeleteProgram(gl_external_program);
        gl_external_program = 0;
    }
    ext_program_name[0] = 0;
}

int video_external_count(void) {
    return n_ext;
}
const char *video_external_name(int i) {
    return i >= 0 && i < n_ext ? ext_names[i] : "";
}

void video_upload(const uint8_t *rgb) {
    if ((!renderer && !gl_context) || !rgb || game_w <= 0 || game_h <= 0)
        return;
    if (gl_context) {
        int width = game_w, height = game_h;
        const uint8_t *pixels = rgb;
        int scale = game_w / 320;
        static uint8_t *small = NULL;
        if (vcfg.src_mode && scale >= 1) {
            width = 320;
            height = 200;
            if (scale > 1) {
                if (!small)
                    small = (uint8_t *)malloc(320 * 200 * 3);
                if (!small) {
                    snprintf(video_error, sizeof video_error, "Not enough memory to prepare shader input");
                    return;
                }
                for (int y = 0; y < 200; y++)
                    for (int x = 0; x < 320; x++) {
                        uint8_t *d = small + ((size_t)y * 320 + x) * 3;
                        if (vcfg.src_mode == 2) {
                            const uint8_t *s =
                                rgb +
                                (((size_t)y * scale + scale / 2) * (size_t)game_w + (size_t)x * scale + scale / 2) * 3;
                            memcpy(d, s, 3);
                        } else {
                            unsigned sum[3] = {0, 0, 0};
                            for (int j = 0; j < scale; j++)
                                for (int i = 0; i < scale; i++) {
                                    const uint8_t *s =
                                        rgb + (((size_t)y * scale + j) * (size_t)game_w + (size_t)x * scale + i) * 3;
                                    sum[0] += s[0];
                                    sum[1] += s[1];
                                    sum[2] += s[2];
                                }
                            unsigned count = (unsigned)(scale * scale);
                            for (int c = 0; c < 3; c++)
                                d[c] = (uint8_t)((sum[c] + count / 2) / count);
                        }
                    }
                pixels = small;
            }
        }
        glBindTexture(GL_TEXTURE_2D, gl_game_texture);
        if (width != gl_texture_w || height != gl_texture_h) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
            gl_texture_w = width;
            gl_texture_h = height;
        }
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);
        return;
    }
    if (!renderer)
        return;
    if (game_texture && texture_filter != vcfg.filter) {
        SDL_DestroyTexture(game_texture);
        game_texture = NULL;
    }
    if (!game_texture)
        SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, vcfg.filter == 0 ? "0" : "1");
    if (!game_texture)
        game_texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, game_w, game_h);
    if (!game_texture) {
        snprintf(video_error, sizeof video_error, "Could not create game texture: %s", SDL_GetError());
        return;
    }
    texture_filter = vcfg.filter;
    if (SDL_UpdateTexture(game_texture, NULL, rgb, game_w * 3) != 0)
        snprintf(video_error, sizeof video_error, "Could not update game texture: %s", SDL_GetError());
}

void video_overlay(const uint8_t *rgba, int w, int h) {
    if (gl_context) {
        if (!rgba || w <= 0 || h <= 0) {
            overlay_w = overlay_h = 0;
            return;
        }
        glBindTexture(GL_TEXTURE_2D, gl_overlay_texture);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        if (w != overlay_w || h != overlay_h) {
            overlay_w = w;
            overlay_h = h;
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        } else {
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, w, h, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        }
        return;
    }
    if (overlay_texture) {
        SDL_DestroyTexture(overlay_texture);
        overlay_texture = NULL;
    }
    overlay_w = overlay_h = 0;
    if (!rgba || w <= 0 || h <= 0 || !renderer)
        return;
    overlay_texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_STATIC, w, h);
    if (!overlay_texture || SDL_UpdateTexture(overlay_texture, NULL, rgba, w * 4) != 0) {
        snprintf(video_error, sizeof video_error, "Could not create menu overlay: %s", SDL_GetError());
        if (overlay_texture)
            SDL_DestroyTexture(overlay_texture);
        overlay_texture = NULL;
        return;
    }
    SDL_SetTextureBlendMode(overlay_texture, SDL_BLENDMODE_BLEND);
    overlay_w = w;
    overlay_h = h;
}

void video_rect(int *x, int *y, int *w, int *h) {
    if (gl_context)
        SDL_GL_GetDrawableSize(window, &window_w, &window_h);
    else if (renderer)
        SDL_GetRendererOutputSize(renderer, &window_w, &window_h);
    else
        return;
    int dw = window_w, dh = window_h;
    if (vcfg.aspect == 3) {
        int scale = window_w / 320;
        if (window_h / 200 < scale)
            scale = window_h / 200;
        if (scale < 1)
            scale = 1;
        dw = 320 * scale;
        dh = 200 * scale;
    } else if (vcfg.aspect != 2) {
        double aspect = vcfg.aspect == 1 ? 16.0 / 10.0 : 4.0 / 3.0;
        if ((double)window_w / window_h > aspect)
            dw = (int)(window_h * aspect + 0.5);
        else
            dh = (int)(window_w / aspect + 0.5);
    }
    *x = (window_w - dw) / 2;
    *y = (window_h - dh) / 2;
    *w = dw;
    *h = dh;
}

static int gl_preset_index(void) {
    if (!strcmp(vcfg.preset, "None"))
        return 0;
    if (!strcmp(vcfg.preset, "Scanlines"))
        return 1;
    return 2;
}

static void gl_draw_frame(void) {
    SDL_GL_GetDrawableSize(window, &window_w, &window_h);
    if (window_w < 1 || window_h < 1)
        return;
    gl_frame++;
    glViewport(0, 0, window_w, window_h);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    int x, y, w, h;
    video_rect(&x, &y, &w, &h);
    glViewport(x, window_h - y - h, w, h);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, gl_game_texture);
    GLint filter = vcfg.filter == 0 ? GL_NEAREST : GL_LINEAR;
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);

    int done = 0;
    float out_h = (float)h;
    const char *mask_height = getenv("DOW_MASKH");
    if (mask_height && getenv("DOW_TEST"))
        out_h = (float)atof(mask_height);
    if (vcfg.external[0]) {
        for (int i = 0; i < n_ext; i++) {
            if (strcmp(ext_names[i], vcfg.external))
                continue;
            if (!gl_external_program || strcmp(ext_program_name, vcfg.external)) {
                if (gl_external_program)
                    glDeleteProgram(gl_external_program);
                gl_external_program = gl_load_external(ext_paths[i]);
                snprintf(ext_program_name, sizeof ext_program_name, "%s", vcfg.external);
            }
            if (!gl_external_program) {
                snprintf(video_error, sizeof video_error, "External shader %.100s failed", vcfg.external);
                vcfg.external[0] = 0;
                break;
            }
            GLuint p = gl_external_program;
            glUseProgram(p);
            static const float identity[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
            GLint mvp = glGetUniformLocation(p, "MVPMatrix");
            if (mvp >= 0)
                glUniformMatrix4fv(mvp, 1, GL_FALSE, identity);
            gl_uniform1i(p, "Texture", 0);
            gl_uniform2f(p, "InputSize", 320.0f, 200.0f);
            gl_uniform2f(p, "TextureSize", 320.0f, 200.0f);
            gl_uniform2f(p, "OutputSize", (float)w, out_h);
            gl_uniform1i(p, "FrameCount", gl_frame);
            gl_uniform1i(p, "FrameDirection", 1);
            for (int k = 0; k < n_ext_params; k++)
                gl_uniform1f(p, ext_param_names[k], ext_params[k]);
            gl_draw_quad(p, 1);
            done = 1;
            break;
        }
    }
    if (!done) {
        GLuint p = gl_get_builtin(gl_preset_index());
        if (p) {
            glUseProgram(p);
            gl_uniform1i(p, "tex", 0);
            gl_uniform2f(p, "srcSize", 320.0f, 200.0f);
            gl_uniform2f(p, "texSize", (float)gl_texture_w, (float)gl_texture_h);
            gl_uniform2f(p, "outSize", (float)w, out_h);
            gl_uniform1f(p, "frame", (float)gl_frame);
            gl_uniform1i(p, "smooth_mode", vcfg.filter);
            gl_uniform1f(p, "p_scan", vcfg.p.p_scan);
            gl_uniform1f(p, "p_mask", vcfg.p.p_mask);
            gl_uniform1f(p, "p_curv", vcfg.p.p_curv);
            gl_uniform1f(p, "p_bright", vcfg.p.p_bright);
            gl_uniform1f(p, "p_vig", vcfg.p.p_vig);
            gl_uniform1f(p, "p_bloom", vcfg.p.p_bloom);
            gl_draw_quad(p, 0);
        }
    }
    if (overlay_w > 0 && overlay_h > 0) {
        if (!gl_overlay_program)
            gl_overlay_program = gl_make_program(gl_vertex_source, gl_overlay_fragment);
        if (gl_overlay_program) {
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glBindTexture(GL_TEXTURE_2D, gl_overlay_texture);
            glUseProgram(gl_overlay_program);
            gl_uniform1i(gl_overlay_program, "tex", 0);
            gl_draw_quad(gl_overlay_program, 0);
            glDisable(GL_BLEND);
        }
    }
    if (screenshot_path[0]) {
        size_t bytes = (size_t)window_w * window_h * 3;
        uint8_t *pixels = (uint8_t *)malloc(bytes), *flipped = (uint8_t *)malloc(bytes);
        if (pixels && flipped) {
            glPixelStorei(GL_PACK_ALIGNMENT, 1);
            glReadPixels(0, 0, window_w, window_h, GL_RGB, GL_UNSIGNED_BYTE, pixels);
            for (int row = 0; row < window_h; row++)
                memcpy(flipped + (size_t)row * window_w * 3, pixels + (size_t)(window_h - 1 - row) * window_w * 3,
                       (size_t)window_w * 3);
            if (!png_write(screenshot_path, flipped, window_w, window_h, 3))
                host_log("Screenshot could not be written: %s", screenshot_path);
        } else {
            host_log("Screenshot failed: not enough memory");
        }
        free(pixels);
        free(flipped);
        screenshot_path[0] = 0;
    }
    SDL_GL_SwapWindow(window);
    if (gl_finish_after_swap)
        glFinish();
}

void video_set_glfinish(int on) {
    gl_finish_after_swap = on != 0;
}

int video_get_glfinish(void) {
    return gl_finish_after_swap;
}

void video_draw(void) {
    if (gl_context) {
        gl_draw_frame();
        return;
    }
    if (!renderer)
        return;
    SDL_GetRendererOutputSize(renderer, &window_w, &window_h);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_Rect dst;
    video_rect(&dst.x, &dst.y, &dst.w, &dst.h);
    if (game_texture)
        SDL_RenderCopy(renderer, game_texture, NULL, &dst);
    if (overlay_texture && overlay_w > 0 && overlay_h > 0)
        SDL_RenderCopy(renderer, overlay_texture, NULL, &dst);
    if (screenshot_path[0]) {
        size_t bytes = (size_t)window_w * window_h * 3;
        uint8_t *pixels = (uint8_t *)malloc(bytes);
        if (pixels && SDL_RenderReadPixels(renderer, NULL, SDL_PIXELFORMAT_RGB24, pixels, window_w * 3) == 0)
            png_write(screenshot_path, pixels, window_w, window_h, 3);
        else
            host_log("Screenshot failed: %s", SDL_GetError());
        free(pixels);
        screenshot_path[0] = 0;
    }
    SDL_RenderPresent(renderer);
}

void video_size(int *w, int *h) {
    if (gl_context) {
        SDL_GL_GetDrawableSize(window, w, h);
        return;
    }
    if (!renderer) {
        *w = *h = 0;
        return;
    }
    SDL_GetRendererOutputSize(renderer, w, h);
}

void video_set_fullscreen(int on) {
    if (!window || fullscreen == on)
        return;
    if (SDL_SetWindowFullscreen(window, on ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0) != 0) {
        snprintf(video_error, sizeof video_error, "Could not change fullscreen mode: %s", SDL_GetError());
        return;
    }
    fullscreen = on;
}

int video_is_fullscreen(void) {
    return fullscreen;
}
void video_title(const char *title) {
    if (window)
        SDL_SetWindowTitle(window, title);
}

int video_screenshot(const char *path) {
    snprintf(screenshot_path, sizeof screenshot_path, "%s", path);
    return 1;
}

const char *video_take_error(void) {
    if (!video_error[0])
        return NULL;
    static char error[sizeof video_error];
    snprintf(error, sizeof error, "%s", video_error);
    video_error[0] = 0;
    return error;
}

int video_refresh_hz(void) {
    SDL_DisplayMode mode;
    int display = window ? SDL_GetWindowDisplayIndex(window) : 0;
    return window && SDL_GetCurrentDisplayMode(display, &mode) == 0 && mode.refresh_rate > 0 ? mode.refresh_rate : 60;
}

void *video_hwnd(void) {
    return window;
}

int video_has_focus(void) {
    return window && (SDL_GetWindowFlags(window) & SDL_WINDOW_INPUT_FOCUS) != 0;
}

int video_key_down(int vk) {
    SDL_Scancode sc = scancode_from_vk(vk);
    if (sc == SDL_SCANCODE_UNKNOWN)
        return 0;
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if (vk == VK_CONTROL)
        return state[SDL_SCANCODE_LCTRL] || state[SDL_SCANCODE_RCTRL];
    return state[sc] != 0;
}

int video_poll(VEvent *out) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            out->type = VE_QUIT;
            return 1;
        }
        if (event.type == SDL_WINDOWEVENT) {
            if (event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED || event.window.event == SDL_WINDOWEVENT_RESIZED) {
                window_w = event.window.data1;
                window_h = event.window.data2;
                out->type = VE_RESIZE;
                return 1;
            }
            if (event.window.event == SDL_WINDOWEVENT_FOCUS_GAINED ||
                event.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
                out->type = VE_FOCUS;
                out->down = event.window.event == SDL_WINDOWEVENT_FOCUS_GAINED;
                return 1;
            }
        }
        if (event.type == SDL_KEYDOWN || event.type == SDL_KEYUP) {
            out->type = VE_KEY;
            out->vk = vk_from_scancode(event.key.keysym.scancode);
            out->down = event.type == SDL_KEYDOWN;
            out->mods = event_modifiers((SDL_Keymod)event.key.keysym.mod);
            out->rep = event.key.repeat;
            if (out->vk)
                return 1;
        }
    }
    return 0;
}
#endif
