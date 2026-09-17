# MioPlugin 本地一键构建脚本
# 流程：提交并推送 -> 等待 GitHub Actions 编译 -> 下载产物到 dist\Mio_arm64-1.dylib
# 用法：powershell -ExecutionPolicy Bypass -File scripts\build_local.ps1 [-Message "提交说明"]

param(
    [string]$Message = ""
)

$ErrorActionPreference = "Stop"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

# ── 常量 ──
$RepoOwner = "125337"
$RepoName  = "ios"
$Branch    = "master"
$ArtifactName = "Mio.dylib"
$OutputFile   = "Mio_arm64-1.dylib"

$RepoRoot  = Split-Path -Parent $PSScriptRoot
$TokenFile = Join-Path $PSScriptRoot ".gh_token"
$DistDir   = Join-Path $RepoRoot "dist"

# ── 0. 前置检查 ──
if (-not (Test-Path $TokenFile)) {
    Write-Host "[X] 缺少 token 文件: $TokenFile" -ForegroundColor Red
    Write-Host "    请把 GitHub PAT 保存到该文件（仅一行，不会被 git 提交）"
    exit 1
}
$Token = (Get-Content $TokenFile -Raw).Trim()
if (-not $Token) { Write-Host "[X] token 文件为空" -ForegroundColor Red; exit 1 }

$Git = Get-Command git -ErrorAction SilentlyContinue
if ($Git) { $Git = $Git.Source }
elseif (Test-Path "$env:ProgramFiles\Git\bin\git.exe") { $Git = "$env:ProgramFiles\Git\bin\git.exe" }
elseif (Test-Path "$env:USERPROFILE\.local\share\MinGit\cmd\git.exe") { $Git = "$env:USERPROFILE\.local\share\MinGit\cmd\git.exe" }
else { Write-Host "[X] 未找到 git，请先安装 Git for Windows 或 MinGit" -ForegroundColor Red; exit 1 }

$Headers = @{
    Authorization = "token $Token"
    Accept        = "application/vnd.github+json"
    "User-Agent"  = "mio-build-local"
}

Push-Location $RepoRoot
try {
    Write-Host "========================================" -ForegroundColor Green
    Write-Host "  MioPlugin 本地构建 (push -> Actions -> dist)" -ForegroundColor Green
    Write-Host "========================================" -ForegroundColor Green

    # ── 1. 提交 ──
    & $Git add -A
    $Staged = (& $Git diff --cached --name-only) 2>$null
    if ($Staged) {
        if (-not $Message) { $Message = "build: $(Get-Date -Format 'yyyyMMdd_HHmmss')" }
        & $Git commit -m $Message | Out-Null
        Write-Host "[1/4] 已提交: $Message" -ForegroundColor Yellow
    } else {
        Write-Host "[1/4] 无代码改动，直接使用当前 HEAD 触发/获取构建" -ForegroundColor Yellow
    }

    # ── 2. 推送 ──
    & $Git push "https://${Token}@github.com/${RepoOwner}/${RepoName}.git" "HEAD:$Branch"
    if ($LASTEXITCODE -ne 0) { Write-Host "[X] push 失败" -ForegroundColor Red; exit 1 }
    $Sha = (& $Git rev-parse HEAD).Trim()
    Write-Host "[2/4] 已推送: $Sha" -ForegroundColor Yellow

    # ── 3. 轮询构建状态 ──
    Write-Host "[3/4] 等待 Actions 构建完成（约 1-3 分钟）..." -ForegroundColor Yellow
    $RunId = $null
    foreach ($i in 1..60) {
        Start-Sleep -Seconds 5
        $Runs = Invoke-RestMethod -Uri "https://api.github.com/repos/${RepoOwner}/${RepoName}/actions/runs?per_page=10" -Headers $Headers
        $Run = $Runs.workflow_runs | Where-Object { $_.head_sha -eq $Sha } | Select-Object -First 1
        if (-not $Run) {
            Write-Host "    [$i] 尚未发现本次推送的构建..." -ForegroundColor DarkGray
            continue
        }
        $RunId = $Run.id
        if ($Run.status -eq "completed") {
            if ($Run.conclusion -eq "success") {
                Write-Host "    构建成功 (run $($Run.run_number))" -ForegroundColor Green
                break
            } else {
                Write-Host "[X] 构建失败: $($Run.conclusion)，run id=$RunId" -ForegroundColor Red
                Write-Host "    查看日志: https://github.com/${RepoOwner}/${RepoName}/actions/runs/$RunId"
                exit 1
            }
        } else {
            Write-Host "    [$i] 状态: $($Run.status)..." -ForegroundColor DarkGray
        }
        $RunId = $Run.id
    }
    if (-not $RunId) { Write-Host "[X] 等待超时，请到 GitHub Actions 页面手动查看" -ForegroundColor Red; exit 1 }

    # ── 4. 下载产物 ──
    $Artifacts = Invoke-RestMethod -Uri "https://api.github.com/repos/${RepoOwner}/${RepoName}/actions/runs/$RunId/artifacts" -Headers $Headers
    $Artifact = $Artifacts.artifacts | Where-Object { $_.name -eq $ArtifactName } | Select-Object -First 1
    if (-not $Artifact) { Write-Host "[X] 未找到产物 $ArtifactName" -ForegroundColor Red; exit 1 }

    $TmpZip = Join-Path $env:TEMP "mio_artifact_$RunId.zip"
    $TmpDir = Join-Path $env:TEMP "mio_artifact_$RunId"
    Invoke-WebRequest -Uri "https://api.github.com/repos/${RepoOwner}/${RepoName}/actions/artifacts/$($Artifact.id)/zip" `
        -Headers $Headers -OutFile $TmpZip
    if (Test-Path $TmpDir) { Remove-Item $TmpDir -Recurse -Force }
    Expand-Archive -Path $TmpZip -DestinationPath $TmpDir -Force

    $Dylib = Get-ChildItem $TmpDir -Recurse -Filter "Mio_arm64.dylib" | Select-Object -First 1
    if (-not $Dylib) { Write-Host "[X] 解压后未找到 Mio_arm64.dylib" -ForegroundColor Red; exit 1 }

    if (-not (Test-Path $DistDir)) { New-Item $DistDir -ItemType Directory | Out-Null }
    $Final = Join-Path $DistDir $OutputFile
    Copy-Item $Dylib.FullName $Final -Force
    Remove-Item $TmpZip, $TmpDir -Recurse -Force -ErrorAction SilentlyContinue

    $Size = "{0:N1} KB" -f ((Get-Item $Final).Length / 1KB)
    Write-Host "========================================" -ForegroundColor Green
    Write-Host "  完成! 产物: $Final ($Size)" -ForegroundColor Green
    Write-Host "========================================" -ForegroundColor Green
}
finally {
    Pop-Location
}
