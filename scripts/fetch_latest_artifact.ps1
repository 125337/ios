﻿# Fetch latest successful artifact for current master head sha, verify new-build strings, deploy.
$ErrorActionPreference = "Stop"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

$Root = "c:\Users\20546\Desktop\ios_cc4BX"
$Token = (Get-Content "$Root\scripts\.gh_token" -Raw).Trim()
$H = @{ Authorization = "token $Token"; Accept = "application/vnd.github+json"; "User-Agent" = "fetch-artifact" }
$Api = "https://api.github.com/repos/125337/ios"

# 1) current master head
$head = (Invoke-RestMethod "$Api/commits/master" -Headers $H).sha
Write-Host "master head: $head"

# 2) newest successful run for this head sha
$runs = Invoke-RestMethod "$Api/actions/runs?head_sha=$head&per_page=5" -Headers $H
$run = $runs.workflow_runs | Where-Object { $_.conclusion -eq "success" } | Select-Object -First 1
if (-not $run) { throw "no successful run for head $head" }
Write-Host "run: $($run.id) created=$($run.created_at)"

# 3) download Mio.dylib artifact
$arts = Invoke-RestMethod "$Api/actions/runs/$($run.id)/artifacts" -Headers $H
$art = $arts.artifacts | Where-Object { $_.name -eq "Mio.dylib" } | Select-Object -First 1
if (-not $art) { throw "artifact Mio.dylib not found (total=$($arts.total_count))" }

$tmp = "$Root\dist\_art_dl"
if (Test-Path $tmp) { Remove-Item $tmp -Recurse -Force }
New-Item -ItemType Directory -Path $tmp -Force | Out-Null
$zip = "$tmp\Mio.dylib.zip"
curl.exe -sL -H "Authorization: Bearer $Token" -o $zip "$Api/actions/artifacts/$($art.id)/zip"
if (-not (Test-Path $zip) -or (Get-Item $zip).Length -lt 1000) { throw "download failed" }
Expand-Archive -Path $zip -DestinationPath $tmp -Force
$dylib = Get-ChildItem $tmp -Filter *.dylib | Select-Object -First 1
if (-not $dylib) { throw "no .dylib in artifact" }
Copy-Item $dylib.FullName "$Root\dist\Mio_arm64.dylib" -Force
Remove-Item $tmp -Recurse -Force

# 4) verify NEW-build strings (must all hit, else stale artifact)
$b = [IO.File]::ReadAllBytes("$Root\dist\Mio_arm64.dylib")
$s = [Text.Encoding]::ASCII.GetString($b)
$miss = @()
foreach ($t in @("build-0929-fldl5", "likeUsers", "data-layer hooks", "updateTimelineHead")) {
    $hit = $s.Contains($t)
    Write-Host ("check " + $t + " -> " + $(if ($hit) { "HIT" } else { "MISS" }))
    if (-not $hit) { $miss += $t }
}
if ($miss.Count -gt 0) { throw "STALE ARTIFACT: missing $($miss -join ',')" }

# 5) deploy name
Copy-Item "$Root\dist\Mio_arm64.dylib" "$Root\distio_arm64.dylib" -Force
$sha = [System.Security.Cryptography.SHA256]::Create().ComputeHash($b)
Write-Host ("OK bytes=" + $b.Length + " sha256=" + [BitConverter]::ToString($sha).Replace("-", "").Substring(0, 16))
Write-Host "deployed: dist\Mio_arm64.dylib + distio_arm64.dylib"
