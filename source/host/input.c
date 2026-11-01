/*
 * input.c - Keyboard and XInput pads -> joystick and Atari ST keys, with redefinable keys and buttons ("Controls"
 * window of the menu).
 *
 * Pads: left stick or D-pad = directions (dead zone, 8 directions; not redefinable). The remaining buttons are assigned
 * to actions; by default: A = fire (in "1 OR 2 PLAYER GAME?" = key 1 / 2), RT = fire, LT = hold position, RB / LB =
 * next / previous weapon, B = rocket launcher, X = grenade, Start = menu, Back = leave the mission. The first pad is
 * player 1 and the second one is player 2.
 */
#include "input.h"
#include "lang.h"
#include "cfg.h"
#ifdef _WIN32
#include <windows.h>
#elif defined(__linux__)
#include <SDL.h>
#endif

#if defined(_WIN32) || defined(__linux__)
/* ---- teclas redefinibles ---- */
int key_bind[KA_COUNT];
static const struct {
    const char *cfg, *label, *hint;
    int def;
} KEY_ACTIONS[KA_COUNT] = {
    {"key_up", "ctl.key.move_up", "ctl.key.move_up.hint", VK_UP},
    {"key_down", "ctl.key.move_down", "ctl.key.move_down.hint", VK_DOWN},
    {"key_left", "ctl.key.move_left", "ctl.key.move_left.hint", VK_LEFT},
    {"key_right", "ctl.key.move_right", "ctl.key.move_right.hint", VK_RIGHT},
    {"key_fire", "ctl.key.fire", "ctl.key.fire.hint", VK_CONTROL},
    {"key_fire2", "ctl.key.fire_second_key", "ctl.key.fire_second_key.hint", 'Z'},
    {"key_wnext", "ctl.key.next_weapon", "ctl.key.next_weapon.hint", 'A'},
    {"key_wprev", "ctl.key.previous_weapon", "ctl.key.previous_weapon.hint", 0},
    {"key_rocket", "ctl.key.quick_rocket_launcher", "ctl.key.quick_rocket_launcher.hint", 0},
    {"key_grenade", "ctl.key.quick_grenade", "ctl.key.quick_grenade.hint", 0},
};
const char *key_act_label(int a) {
    return tr(KEY_ACTIONS[a].label);
}
/* text ids: the menu translates them every time it draws */
const char *key_act_label_id(int a) {
    return KEY_ACTIONS[a].label;
}
const char *key_act_hint(int a) {
    return KEY_ACTIONS[a].hint;
}
int kbd_norm_vk(int vk) {
    return (vk == VK_LCONTROL || vk == VK_RCONTROL) ? VK_CONTROL : vk;
}
int kbd_action(int vk) {
    vk = kbd_norm_vk(vk);
    if (!vk)
        return -1;
    for (int a = 0; a < KA_COUNT; a++)
        if (key_bind[a] == vk)
            return a;
    return -1;
}
void kbd_set_bind(int act, int vk) {
    vk = kbd_norm_vk(vk);
    if (vk)
        for (int a = 0; a < KA_COUNT; a++)
            if (key_bind[a] == vk)
                key_bind[a] = 0;
    key_bind[act] = vk;
}
int kbd_joy_bit(int vk) {
    switch (kbd_action(vk)) {
        case KA_UP:
            return J_UP;
        case KA_DOWN:
            return J_DOWN;
        case KA_LEFT:
            return J_LEFT;
        case KA_RIGHT:
            return J_RIGHT;
        case KA_FIRE:
        case KA_FIRE2:
            return J_FIRE;
    }
    return 0;
}
int kbd_joy_keys(int *vks) {
    int n = 0;
    for (int a = KA_UP; a <= KA_FIRE2; a++) {
        int v = key_bind[a];
        if (!v)
            continue;
        if (v == VK_CONTROL) {
            vks[n++] = VK_LCONTROL;
            vks[n++] = VK_RCONTROL;
        } else
            vks[n++] = v;
    }
    return n;
}
void key_name(int vk, char *out, size_t n) {
    static const struct {
        int vk;
        const char *nm;
    } T[] = {{0, "(none)"},
             {VK_UP, "Up"},
             {VK_DOWN, "Down"},
             {VK_LEFT, "Left"},
             {VK_RIGHT, "Right"},
             {VK_CONTROL, "Ctrl"},
             {VK_LCONTROL, "Left Ctrl"},
             {VK_RCONTROL, "Right Ctrl"},
             {VK_SHIFT, "Shift"},
             {VK_MENU, "Alt"},
             {VK_SPACE, "Space"},
             {VK_RETURN, "Enter"},
             {0x10D, "Num Enter"},
             {VK_TAB, "Tab"},
             {VK_BACK, "Backspace"},
             {VK_INSERT, "Insert"},
             {VK_DELETE, "Delete"},
             {VK_HOME, "Home"},
             {VK_END, "End"},
             {VK_PRIOR, "Page Up"},
             {VK_NEXT, "Page Down"},
             {VK_ADD, "Num +"},
             {VK_SUBTRACT, "Num -"},
             {VK_MULTIPLY, "Num *"},
             {VK_DIVIDE, "Num /"},
             {VK_DECIMAL, "Num ."},
             {VK_CAPITAL, "Caps Lock"},
             {VK_ESCAPE, "Esc"},
             {VK_PAUSE, "Pause"},
             {VK_SCROLL, "Scroll Lock"},
             {VK_NUMLOCK, "Num Lock"},
             {VK_SNAPSHOT, "Print Screen"},
             {VK_APPS, "Menu"},
             {VK_LWIN, "Left Win"},
             {VK_RWIN, "Right Win"},
             {VK_LSHIFT, "Left Shift"},
             {VK_RSHIFT, "Right Shift"},
             {VK_LMENU, "Left Alt"},
             {VK_RMENU, "Right Alt"}};
    for (size_t i = 0; i < sizeof T / sizeof *T; i++)
        if (T[i].vk == vk) {
            char id[64];
            snprintf(id, sizeof id, "key.%s", T[i].nm);
            snprintf(out, n, "%s", tr(id));
            return;
        }
    if ((vk >= '0' && vk <= '9') || (vk >= 'A' && vk <= 'Z')) {
        snprintf(out, n, "%c", vk);
        return;
    }
    if (vk >= VK_NUMPAD0 && vk <= VK_NUMPAD9) {
        snprintf(out, n, "Num %d", vk - VK_NUMPAD0);
        return;
    }
    if (vk >= VK_F1 && vk <= VK_F24) {
        snprintf(out, n, "F%d", vk - VK_F1 + 1);
        return;
    }
    char b[64] = "";
#ifdef _WIN32
    UINT sc = MapVirtualKeyA((UINT)vk, MAPVK_VK_TO_VSC);
    if (sc && GetKeyNameTextA((LONG)(sc << 16), b, sizeof b) > 0)
        snprintf(out, n, "%s", b);
    else
#endif
        snprintf(out, n, "Key %d", vk);
}
int kbd_scancode(int vk) {
    if (vk >= '1' && vk <= '9')
        return 2 + (vk - '1');
    if (vk == '0')
        return 11;
    if (vk >= VK_NUMPAD1 && vk <= VK_NUMPAD9)
        return 2 + (vk - VK_NUMPAD1);
    if (vk == VK_NUMPAD0)
        return 11;
    switch (vk) {
        case VK_RETURN:
        case 0x10D:
            return 0x1C;
        case VK_SPACE:
            return 0x39;
        case 'P':
            return 0x19;
        case 'Q':
            return 0x10;
        case 'W':
            return 0x11;
        case 'E':
            return 0x12;
        case 'R':
            return 0x13;
        case 'T':
            return 0x14;
        case 'Y':
            return 0x15;
        case 'U':
            return 0x16;
        case 'I':
            return 0x17;
        case 'O':
            return 0x18;
        case 'A':
            return 0x1E;
        case 'S':
            return 0x1F;
        case 'D':
            return 0x20;
        case 'F':
            return 0x21;
        case 'G':
            return 0x22;
        case 'H':
            return 0x23;
        case 'J':
            return 0x24;
        case 'K':
            return 0x25;
        case 'L':
            return 0x26;
        case 'Z':
            return 0x2C;
        case 'X':
            return 0x2D;
        case 'C':
            return 0x2E;
        case 'V':
            return 0x2F;
        case 'B':
            return 0x30;
        case 'N':
            return 0x31;
        case 'M':
            return 0x32;
        /* the rest of the keys the high-score name entry can use (Atari ST scancodes) */
        case VK_BACK:
            return 0x0E;
        case VK_DELETE:
            return 0x53;
        /* - = , . / */
        case 0xBD:
            return 0x0C;
        case 0xBB:
            return 0x0D;
        case 0xBC:
            return 0x33;
        case 0xBE:
            return 0x34;
        case 0xBF:
            return 0x35;
        /* ; ' [ ] \ ` */
        case 0xBA:
            return 0x27;
        case 0xDE:
            return 0x28;
        case 0xDB:
            return 0x1A;
        case 0xDD:
            return 0x1B;
        case 0xDC:
            return 0x2B;
        case 0xC0:
            return 0x29;
        case VK_F1:
            return 0x3B;
        case VK_F2:
            return 0x3C;
        case VK_F3:
            return 0x3D;
        case VK_F4:
            return 0x3E;
        case VK_F5:
            return 0x3F;
    }
    return 0;
}

/* ---- redefinable gamepad buttons ---- */
int pad_bind[PBA_COUNT];
#define XB_UP    0x0001
#define XB_DOWN  0x0002
#define XB_LEFT  0x0004
#define XB_RIGHT 0x0008
static const struct {
    int mask;
    const char *nm;
} PAD_BUTTON_NAMES[] = {{0, "none"},         {XB_A, "A"},   {XB_B, "B"},   {XB_X, "X"},   {XB_Y, "Y"},
                        {XB_LB, "LB"},       {XB_RB, "RB"}, {PB_LT, "LT"}, {PB_RT, "RT"}, {XB_BACK, "Back"},
                        {XB_START, "Start"}, {XB_L3, "L3"}, {XB_R3, "R3"}};
#define N_PAD_BUTTON_NAMES ((int)(sizeof PAD_BUTTON_NAMES / sizeof *PAD_BUTTON_NAMES))
static const struct {
    const char *cfg, *label, *hint;
    int def;
} PAD_ACTIONS[PBA_COUNT] = {
    {"pad_fire", "ctl.pad.fire", "ctl.pad.fire.hint", XB_A},
    {"pad_fire2", "ctl.pad.fire_second_button", "ctl.pad.fire_second_button.hint", PB_RT},
    {"pad_hold", "ctl.pad.hold_position", "ctl.pad.hold_position.hint", PB_LT},
    {"pad_wnext", "ctl.pad.next_weapon", "ctl.pad.next_weapon.hint", XB_RB},
    {"pad_wprev", "ctl.pad.previous_weapon", "ctl.pad.previous_weapon.hint", XB_LB},
    {"pad_rocket", "ctl.pad.quick_rocket_launcher", "ctl.pad.quick_rocket_launcher.hint", XB_B},
    {"pad_grenade", "ctl.pad.quick_grenade", "ctl.pad.quick_grenade.hint", XB_X},
    {"pad_menu", "ctl.pad.options_menu", "ctl.pad.options_menu.hint", XB_START},
    {"pad_exit", "ctl.pad.leave_the_mission", "ctl.pad.leave_the_mission.hint", XB_BACK},
};
const char *pad_act_label(int a) {
    return tr(PAD_ACTIONS[a].label);
}
const char *pad_act_label_id(int a) {
    return PAD_ACTIONS[a].label;
}
const char *pad_act_hint(int a) {
    return PAD_ACTIONS[a].hint;
}
int pad_action_of(int mask) {
    if (mask)
        for (int a = 0; a < PBA_COUNT; a++)
            if (pad_bind[a] == mask)
                return a;
    return -1;
}
int pad_assignable(int mask) {
    for (int i = 1; i < N_PAD_BUTTON_NAMES; i++)
        if (PAD_BUTTON_NAMES[i].mask == mask)
            return 1;
    return 0;
}
void pad_set_bind(int act, int mask) {
    if (mask)
        for (int a = 0; a < PBA_COUNT; a++)
            if (pad_bind[a] == mask)
                pad_bind[a] = 0;
    pad_bind[act] = mask;
}
void pad_button_name(int mask, char *out, size_t n) {
    for (int i = 0; i < N_PAD_BUTTON_NAMES; i++)
        if (PAD_BUTTON_NAMES[i].mask == mask) {
            snprintf(out, n, "%s", mask ? PAD_BUTTON_NAMES[i].nm : tr("key.(none)"));
            return;
        }
    snprintf(out, n, "?");
}

int pad_dual_stick = 1, pad_aim_autofire = 1;
void input_defaults(void) {
    for (int a = 0; a < KA_COUNT; a++)
        key_bind[a] = KEY_ACTIONS[a].def;
    for (int a = 0; a < PBA_COUNT; a++)
        pad_bind[a] = PAD_ACTIONS[a].def;
}
/* Reads the key_*, pad_* and twin-stick options from the loaded options; what is missing keeps its factory value. */
void input_cfg_load(void) {
    input_defaults();
    pad_dual_stick = cfg_bool("pad_dual_stick", 1);
    pad_aim_autofire = cfg_bool("pad_aim_autofire", 1);
    for (int a = 0; a < KA_COUNT; a++)
        if (cfg_has(KEY_ACTIONS[a].cfg))
            key_bind[a] = kbd_norm_vk((int)cfg_num(KEY_ACTIONS[a].cfg, KEY_ACTIONS[a].def));
    for (int a = 0; a < PBA_COUNT; a++)
        if (cfg_has(PAD_ACTIONS[a].cfg)) {
            const char *v = cfg_str(PAD_ACTIONS[a].cfg, "");
            for (int i = 0; i < N_PAD_BUTTON_NAMES; i++)
                if (!_stricmp(v, PAD_BUTTON_NAMES[i].nm))
                    pad_bind[a] = PAD_BUTTON_NAMES[i].mask;
        }
}
/* Writes them to the options. */
void input_cfg_save(void) {
    cfg_set_bool("pad_dual_stick", pad_dual_stick);
    cfg_set_bool("pad_aim_autofire", pad_aim_autofire);
    for (int a = 0; a < KA_COUNT; a++)
        cfg_set_num(KEY_ACTIONS[a].cfg, key_bind[a]);
    for (int a = 0; a < PBA_COUNT; a++) {
        const char *nm = "none";
        for (int i = 0; i < N_PAD_BUTTON_NAMES; i++)
            if (PAD_BUTTON_NAMES[i].mask == pad_bind[a])
                nm = PAD_BUTTON_NAMES[i].nm;
        cfg_set_str(PAD_ACTIONS[a].cfg, nm);
    }
}

static int n_connected = 0;

/* ---- XInput (carga dinamica) ---- */
#ifdef _WIN32
typedef struct {
    WORD wButtons;
    BYTE bLeftTrigger, bRightTrigger;
    SHORT sThumbLX, sThumbLY, sThumbRX, sThumbRY;
} XPad;
typedef struct {
    DWORD dwPacketNumber;
    XPad Gamepad;
} XState;
typedef DWORD(WINAPI *PFN_XGetState)(DWORD, XState *);
static PFN_XGetState xinput_get_state = NULL;
static int xinput_tried = 0;
static int pad_connected[4];
static double pad_last_poll[4];
/* ---- XInput (loaded when first used) ---- */
/* Right stick -> one of 8 directions (45-degree sectors, so the diagonals are as easy to hit as the main directions); 0
 * inside the dead zone. J_UP is stick up (Y positive). */
static int stick_dir8(int x, int y) {
    const float DZ = 0.40f * 32768.0f;
    float fx = (float)x, fy = (float)y;
    if (fx * fx + fy * fy < DZ * DZ)
        return 0;
    /* tan(22.5 degrees) */
    float ax = fx < 0 ? -fx : fx, ay = fy < 0 ? -fy : fy, T = 0.41421356f;
    /* horizontal / vertical sector; neither = diagonal */
    int h = ay < T * ax, v = ax < T * ay, r = 0;
    if (!v)
        r |= fx < 0 ? J_LEFT : J_RIGHT;
    if (!h)
        r |= fy < 0 ? J_DOWN : J_UP;
    return r;
}

int pads_count(void) {
    return n_connected;
}
void pads_names(char *out, size_t n) {
    snprintf(out, n, "%d", n_connected);
}

/* Reads the XInput pads (the first two are the players): joystick state from the left stick and D-pad, buttons, the
 * actions pressed and the right stick's direction. Disconnected slots are polled once per second only. Returns how
 * many pads (0..2). */
int pads_read(PadRead out[2]) {
    if (!xinput_tried) {
        xinput_tried = 1;
        HMODULE h = LoadLibraryA("xinput1_4.dll");
        if (!h)
            h = LoadLibraryA("xinput1_3.dll");
        if (!h)
            h = LoadLibraryA("xinput9_1_0.dll");
        if (h)
            xinput_get_state = (PFN_XGetState)GetProcAddress(h, "XInputGetState");
    }
    if (!xinput_get_state)
        return 0;
    double now = now_s();
    int idx = 0;
    n_connected = 0;
    for (int i = 0; i < 4; i++) {
        /* disconnected pads are polled only once per second */
        if (!pad_connected[i] && now - pad_last_poll[i] < 1.0)
            continue;
        XState s;
        DWORD r = xinput_get_state((DWORD)i, &s);
        pad_last_poll[i] = now;
        pad_connected[i] = (r == ERROR_SUCCESS);
        if (r != ERROR_SUCCESS)
            continue;
        n_connected++;
        if (idx >= 2)
            continue;
        const float DZ = 0.35f * 32768.0f;
        int st = 0;
        XPad *p = &s.Gamepad;
        /* buttons without the D-pad; the triggers count as buttons */
        int raw = p->wButtons & ~0x000F;
        if (p->bLeftTrigger > 0.30f * 255)
            raw |= PB_LT;
        if (p->bRightTrigger > 0.30f * 255)
            raw |= PB_RT;
        if ((p->wButtons & XB_UP) || p->sThumbLY > DZ)
            st |= J_UP;
        if ((p->wButtons & XB_DOWN) || p->sThumbLY < -DZ)
            st |= J_DOWN;
        if ((p->wButtons & XB_LEFT) || p->sThumbLX < -DZ)
            st |= J_LEFT;
        if ((p->wButtons & XB_RIGHT) || p->sThumbLX > DZ)
            st |= J_RIGHT;
        if ((pad_bind[PBA_FIRE] && (raw & pad_bind[PBA_FIRE])) || (pad_bind[PBA_FIRE2] && (raw & pad_bind[PBA_FIRE2])))
            st |= J_FIRE;
        if ((st & J_UP) && (st & J_DOWN))
            st &= ~(J_UP | J_DOWN);
        if ((st & J_LEFT) && (st & J_RIGHT))
            st &= ~(J_LEFT | J_RIGHT);
        out[idx].aim = pad_dual_stick ? stick_dir8(p->sThumbRX, p->sThumbRY) : 0;
        out[idx].st = st;
        out[idx].raw = raw;
        out[idx].acts = 0;
        out[idx].wnext = pad_bind[PBA_WNEXT] && (raw & pad_bind[PBA_WNEXT]) ? 1 : 0;
        out[idx].hold = pad_bind[PBA_HOLD] && (raw & pad_bind[PBA_HOLD]) ? 1 : 0;
        if (pad_bind[PBA_ROCKET] && (raw & pad_bind[PBA_ROCKET]))
            out[idx].acts |= PA_ROCKET;
        if (pad_bind[PBA_GRENADE] && (raw & pad_bind[PBA_GRENADE]))
            out[idx].acts |= PA_GRENADE;
        if (pad_bind[PBA_WPREV] && (raw & pad_bind[PBA_WPREV]))
            out[idx].acts |= PA_WBACK;
        if (pad_bind[PBA_MENU] && (raw & pad_bind[PBA_MENU]))
            out[idx].acts |= PA_MENU;
        if (pad_bind[PBA_EXIT] && (raw & pad_bind[PBA_EXIT]))
            out[idx].acts |= PA_EXIT;
        idx++;
    }
    return idx;
}
#elif defined(__linux__)
#define SDL_DPAD_UP    0x01
#define SDL_DPAD_DOWN  0x02
#define SDL_DPAD_LEFT  0x04
#define SDL_DPAD_RIGHT 0x08
static SDL_GameController *controllers[4];
static SDL_JoystickID controller_ids[4] = {-1, -1, -1, -1};

static int stick_dir8(int x, int y) {
    const float dz = 0.40f * 32768.0f;
    float fx = (float)x, fy = (float)y;
    if (fx * fx + fy * fy < dz * dz)
        return 0;
    float ax = fx < 0 ? -fx : fx, ay = fy < 0 ? -fy : fy;
    int horizontal = ay < 0.41421356f * ax, vertical = ax < 0.41421356f * ay, result = 0;
    if (!vertical)
        result |= fx < 0 ? J_LEFT : J_RIGHT;
    if (!horizontal)
        result |= fy < 0 ? J_DOWN : J_UP;
    return result;
}

int pads_count(void) {
    return n_connected;
}
void pads_names(char *out, size_t n) {
    snprintf(out, n, "%d", n_connected);
}

static int controller_buttons(SDL_GameController *controller, int *dpad) {
    static const struct {
        SDL_GameControllerButton button;
        int mask;
    } map[] = {{SDL_CONTROLLER_BUTTON_A, XB_A},
               {SDL_CONTROLLER_BUTTON_B, XB_B},
               {SDL_CONTROLLER_BUTTON_X, XB_X},
               {SDL_CONTROLLER_BUTTON_Y, XB_Y},
               {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, XB_LB},
               {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, XB_RB},
               {SDL_CONTROLLER_BUTTON_BACK, XB_BACK},
               {SDL_CONTROLLER_BUTTON_START, XB_START},
               {SDL_CONTROLLER_BUTTON_LEFTSTICK, XB_L3},
               {SDL_CONTROLLER_BUTTON_RIGHTSTICK, XB_R3}};
    int raw = 0;
    for (size_t i = 0; i < sizeof map / sizeof map[0]; i++)
        if (SDL_GameControllerGetButton(controller, map[i].button))
            raw |= map[i].mask;
    *dpad = 0;
    if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_UP))
        *dpad |= SDL_DPAD_UP;
    if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_DOWN))
        *dpad |= SDL_DPAD_DOWN;
    if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_LEFT))
        *dpad |= SDL_DPAD_LEFT;
    if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_RIGHT))
        *dpad |= SDL_DPAD_RIGHT;
    if (SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > 9830)
        raw |= PB_LT;
    if (SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) > 9830)
        raw |= PB_RT;
    return raw;
}

int pads_read(PadRead out[2]) {
    SDL_GameControllerUpdate();
    for (int slot = 0; slot < 4; slot++) {
        if (controllers[slot] && !SDL_GameControllerGetAttached(controllers[slot])) {
            SDL_GameControllerClose(controllers[slot]);
            controllers[slot] = NULL;
            controller_ids[slot] = -1;
        }
    }
    int devices = SDL_NumJoysticks();
    for (int device = 0; device < devices; device++) {
        if (!SDL_IsGameController(device))
            continue;
        SDL_JoystickID id = SDL_JoystickGetDeviceInstanceID(device);
        int known = 0;
        for (int slot = 0; slot < 4; slot++)
            if (controller_ids[slot] == id)
                known = 1;
        if (known)
            continue;
        for (int slot = 0; slot < 4; slot++)
            if (!controllers[slot]) {
                controllers[slot] = SDL_GameControllerOpen(device);
                if (controllers[slot]) {
                    controller_ids[slot] = id;
                    break;
                }
            }
    }

    int count = 0, index = 0;
    n_connected = 0;
    for (int slot = 0; slot < 4; slot++) {
        SDL_GameController *controller = controllers[slot];
        if (!controller || !SDL_GameControllerGetAttached(controller))
            continue;
        n_connected++;
        if (index >= 2)
            continue;
        int dpad = 0, raw = controller_buttons(controller, &dpad);
        int lx = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTX);
        int ly = -SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTY);
        int rx = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTX);
        int ry = -SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTY);
        const int dead_zone = (int)(0.35f * 32768.0f);
        int st = 0;
        if ((dpad & SDL_DPAD_UP) || ly > dead_zone)
            st |= J_UP;
        if ((dpad & SDL_DPAD_DOWN) || ly < -dead_zone)
            st |= J_DOWN;
        if ((dpad & SDL_DPAD_LEFT) || lx < -dead_zone)
            st |= J_LEFT;
        if ((dpad & SDL_DPAD_RIGHT) || lx > dead_zone)
            st |= J_RIGHT;
        if ((pad_bind[PBA_FIRE] && (raw & pad_bind[PBA_FIRE])) ||
            (pad_bind[PBA_FIRE2] && (raw & pad_bind[PBA_FIRE2])))
            st |= J_FIRE;
        if ((st & J_UP) && (st & J_DOWN))
            st &= ~(J_UP | J_DOWN);
        if ((st & J_LEFT) && (st & J_RIGHT))
            st &= ~(J_LEFT | J_RIGHT);
        PadRead *result = &out[index++];
        result->aim = pad_dual_stick ? stick_dir8(rx, ry) : 0;
        result->st = st;
        result->raw = raw;
        result->acts = 0;
        result->wnext = pad_bind[PBA_WNEXT] && (raw & pad_bind[PBA_WNEXT]) ? 1 : 0;
        result->hold = pad_bind[PBA_HOLD] && (raw & pad_bind[PBA_HOLD]) ? 1 : 0;
        if (pad_bind[PBA_ROCKET] && (raw & pad_bind[PBA_ROCKET]))
            result->acts |= PA_ROCKET;
        if (pad_bind[PBA_GRENADE] && (raw & pad_bind[PBA_GRENADE]))
            result->acts |= PA_GRENADE;
        if (pad_bind[PBA_WPREV] && (raw & pad_bind[PBA_WPREV]))
            result->acts |= PA_WBACK;
        if (pad_bind[PBA_MENU] && (raw & pad_bind[PBA_MENU]))
            result->acts |= PA_MENU;
        if (pad_bind[PBA_EXIT] && (raw & pad_bind[PBA_EXIT]))
            result->acts |= PA_EXIT;
        count++;
    }
    return count;
}
#endif
#else
int key_bind[KA_COUNT];
int pad_bind[PBA_COUNT];
/* ---- redefinable keys ---- */
/* The translated name of a key action ("Move up", "Fire"...). */
const char *key_act_label(int a) {
    (void)a;
    return "";
}
/* The text id of the name (the menu translates it every time it draws). */
const char *key_act_label_id(int a) {
    (void)a;
    return "";
}
/* The text id of the explanation of a key action. */
const char *key_act_hint(int a) {
    (void)a;
    return "";
}
/* The action a key is assigned to, or -1. */
int kbd_action(int vk) {
    (void)vk;
    return -1;
}
/* Treats the right Ctrl as the left one (they are one key for the controls). */
int kbd_norm_vk(int vk) {
    return vk;
}
/* Assigns a key to an action, taking it away from the action that had it; vk = 0 leaves the action unassigned. */
void kbd_set_bind(int a, int vk) {
    (void)a;
    (void)vk;
}
/* The text of a key ("Up", "Ctrl", "Z", "Num 5", "(none)"). */
void key_name(int vk, char *o, size_t n) {
    (void)vk;
    snprintf(o, n, "");
}
/* The joystick bit (J_*) a key stands for, or 0: the four direction keys and the two fire keys. */
int kbd_joy_bit(int vk) {
    (void)vk;
    return 0;
}
/* The Atari ST scancode of a Windows key (letters, digits, function keys, punctuation, Backspace...), or 0 if the
 * game has no such key. */
int kbd_scancode(int vk) {
    (void)vk;
    return 0;
}
/* The keys the fast-input thread must poll (the direction and fire keys; Ctrl with both variants). */
int kbd_joy_keys(int *v) {
    (void)v;
    return 0;
}
/* ---- redefinable gamepad buttons ---- */
/* The translated name of a pad action. */
const char *pad_act_label(int a) {
    (void)a;
    return "";
}
/* The text id of the name. */
const char *pad_act_label_id(int a) {
    (void)a;
    return "";
}
/* The text id of the explanation. */
const char *pad_act_hint(int a) {
    (void)a;
    return "";
}
/* Assigns a pad button to an action (taking it from the one that had it); mask = 0 leaves the action unassigned. */
void pad_set_bind(int a, int m) {
    (void)a;
    (void)m;
}
/* The name of a button ("A", "LB", "LT", "Start"...). */
void pad_button_name(int m, char *o, size_t n) {
    (void)m;
    snprintf(o, n, "");
}
/* Can this button be assigned? (not the D-pad nor the sticks) */
int pad_assignable(int m) {
    (void)m;
    return 0;
}
/* ---- defaults and saving into the options ---- */
/* Puts the factory keys and buttons. */
void input_defaults(void) {}
void input_cfg_load(void) {}
void input_cfg_save(void) {}
int pads_read(PadRead out[2]) {
    (void)out;
    return 0;
}
/* The action assigned to a pad button, or -1. */
int pad_action_of(int m) {
    (void)m;
    return -1;
}
/* How many pads were found by the last read. */
int pads_count(void) {
    return 0;
}
/* The number of pads as text. */
void pads_names(char *o, size_t n) {
    snprintf(o, n, "0");
}
#endif
