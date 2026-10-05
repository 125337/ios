# Commit single/multiple file updates to master via GitHub API
param(
    [string[]]$Paths,                                 # files to update/add (relative to repo root; may be empty for delete-only)
    [Parameter(Mandatory=$true)][string]$Message,
    [string[]]$DeletePaths                            # files to delete (optional, raw path as-is)
)
$ErrorActionPreference = "Stop"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

$Root = "c:\Users\20546\Desktop\ios_cc4BX"
$Token = (Get-Content "$Root\scripts\.gh_token" -Raw).Trim()
$H = @{ Authorization = "token $Token"; Accept = "application/vnd.github+json"; "User-Agent" = "mio-api-commit" }
$Api = "https://api.github.com/repos/125337/ios"

$Commit = Invoke-RestMethod "$Api/commits/master" -Headers $H
$BaseTree = $Commit.commit.tree.sha

$entries = @()
foreach ($p in $Paths) {
    # Windows backslash must become forward slash: GitHub treats "a\b\c.m" as a
    # single root-level filename, and the source change silently never lands
    $gitPath = $p -replace '\\', '/'
    $b64 = [Convert]::ToBase64String([IO.File]::ReadAllBytes((Join-Path $Root $p)))
    $r = Invoke-RestMethod "$Api/git/blobs" -Method Post -Headers $H `
        -Body (@{ content = $b64; encoding = "base64" } | ConvertTo-Json) -ContentType "application/json"
    $entries += @{ path = $gitPath; mode = "100644"; type = "blob"; sha = $r.sha }
    Write-Host "blob: $gitPath"
}
foreach ($p in $DeletePaths) {
    # sha = null deletes the path (git trees API); raw path, e.g. cleanup of legacy
    # backslash-named junk files at repo root
    $entries += @{ path = $p; mode = "100644"; type = "blob"; sha = $null }
    Write-Host "delete: $p"
}

$Tree = Invoke-RestMethod "$Api/git/trees" -Method Post -Headers $H `
    -Body (@{ base_tree = $BaseTree; tree = $entries } | ConvertTo-Json -Depth 6) -ContentType "application/json"

$New = Invoke-RestMethod "$Api/git/commits" -Method Post -Headers $H `
    -Body (@{ message = $Message; tree = $Tree.sha; parents = @($Commit.sha) } | ConvertTo-Json -Depth 5) -ContentType "application/json"

$refBody = '{"sha":"' + $New.sha + '","force":false}'
Invoke-RestMethod "$Api/git/refs/heads/master" -Method Patch -Headers $H -Body $refBody -ContentType "application/json" | Out-Null
Write-Host "master -> $($New.sha)"
