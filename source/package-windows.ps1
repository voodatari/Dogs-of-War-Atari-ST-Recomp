$ErrorActionPreference = 'Stop'

$sourceDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$projectDir = Split-Path -Parent $sourceDir
$buildDir = Join-Path $projectDir 'build'
$outDir = Join-Path $projectDir 'dist'

$required = @(
    (Join-Path $buildDir 'dowport.exe'),
    (Join-Path $buildDir 'default.json'),
    (Join-Path $buildDir 'LICENSE'),
    (Join-Path $buildDir 'data'),
    (Join-Path $buildDir 'assets\mod'),
    (Join-Path $buildDir 'music'),
    (Join-Path $buildDir 'shaders'),
    (Join-Path $sourceDir 'original\README.txt'),
    (Join-Path $projectDir 'README.md'),
    (Join-Path $projectDir 'CHANGELOG.md')
)
foreach ($path in $required) {
    if (-not (Test-Path -LiteralPath $path)) {
        throw "Required Windows release file is missing: $path"
    }
}

$withDow = Join-Path $buildDir 'original\DOW'
if (-not (Test-Path -LiteralPath $withDow -PathType Leaf)) {
    throw "Required game data file is missing: $withDow"
}

Add-Type -AssemblyName System.IO.Compression
Add-Type -AssemblyName System.IO.Compression.FileSystem
New-Item -ItemType Directory -Force $outDir | Out-Null
$stage = Join-Path ([System.IO.Path]::GetTempPath()) ([guid]::NewGuid().ToString('N'))
New-Item -ItemType Directory $stage | Out-Null

function New-WindowsPackage([string]$name, [bool]$includeDow) {
    $appDir = Join-Path $stage $name
    New-Item -ItemType Directory $appDir | Out-Null

    foreach ($file in @('dowport.exe', 'default.json', 'LICENSE')) {
        Copy-Item -LiteralPath (Join-Path $buildDir $file) -Destination $appDir
    }
    foreach ($directory in @('data', 'assets\mod', 'music', 'shaders')) {
        $source = Join-Path $buildDir $directory
        $destination = Join-Path $appDir $directory
        New-Item -ItemType Directory -Force (Split-Path -Parent $destination) | Out-Null
        Copy-Item -LiteralPath $source -Destination $destination -Recurse
    }
    Copy-Item -LiteralPath (Join-Path $projectDir 'README.md') -Destination $appDir
    Copy-Item -LiteralPath (Join-Path $projectDir 'CHANGELOG.md') -Destination $appDir
    New-Item -ItemType Directory (Join-Path $appDir 'original') | Out-Null

    if ($includeDow) {
        Copy-Item -LiteralPath $withDow -Destination (Join-Path $appDir 'original\DOW')
    }
    Copy-Item -LiteralPath (Join-Path $sourceDir 'original\README.txt') -Destination (Join-Path $appDir 'original\README.txt')

    $zipPath = Join-Path $outDir "$name.zip"
    $stagedZip = Join-Path $stage "$name.zip"
    $archive = [System.IO.Compression.ZipFile]::Open(
        $stagedZip,
        [System.IO.Compression.ZipArchiveMode]::Create
    )
    try {
        foreach ($file in Get-ChildItem -LiteralPath $appDir -File -Recurse) {
            $entryName = $file.FullName.Substring($appDir.Length + 1).Replace('\', '/')
            [void][System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
                $archive,
                $file.FullName,
                $entryName,
                [System.IO.Compression.CompressionLevel]::Optimal
            )
        }
    } finally {
        $archive.Dispose()
    }
    Move-Item -LiteralPath $stagedZip -Destination $zipPath -Force
    Write-Output "Created $zipPath"
}

try {
    New-WindowsPackage 'DogsOfWar-Windows-x64-with-DOW' $true
    New-WindowsPackage 'DogsOfWar-Windows-x64-without-DOW' $false
} finally {
    Remove-Item -LiteralPath $stage -Recurse -Force
}
