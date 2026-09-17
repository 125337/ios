# iOS 项目 CI/CD 流水线复用指南

> 基于 MioHelper 项目的完整流程整理
> 适用于：**代码推送 → CI 构建 → 产物分发 → 服务器下载部署**

---

## 目录

1. [整体工作流](#1-整体工作流)
2. [GitHub Actions 构建配置](#2-github-actions-构建配置)
3. [服务器端下载部署](#3-服务器端下载部署)
4. [一键执行脚本](#4-一键执行脚本)
5. [排查构建失败](#5-排查构建失败)

---

## 1. 整体工作流

```
[本地开发]
    │
    ├── git add + git commit + git push  →  触发 GitHub Actions
    │
    ▼
[GitHub Actions - macOS Runner]
    │
    ├── 1. Checkout (拉取代码)
    ├── 2. Setup Xcode (配置编译环境)
    ├── 3. 编译源码 → 生成产物 (dylib/ipa/其他)
    ├── 4. 签名（如需）
    └── 5. Upload Artifact (上传构建产物)
    │
    ▼
[等待构建完成]
    │
    ▼
[服务器端]
    │
    ├── 查询 GitHub API → 获取最新 Run ID
    ├── 检查构建状态 (success/failure)
    ├── 下载 Artifact (zip)
    └── 解压 → 部署到目标路径
```

---

## 2. GitHub Actions 构建配置

### 2.1 触发方式

配置在 `.github/workflows/build.yml` 中：

```yaml
name: Build Project

on:
  push:
    branches: [ main, master ]   # 推送到主分支时触发
  workflow_dispatch:              # 也支持手动触发
```

### 2.2 构建环境

| 环境 | 说明 |
|------|------|
| `runs-on: macos-latest` | macOS 14 ARM64 runner，自带 Xcode |
| Xcode 版本 | `maxim-lobanov/setup-xcode@v1` 可选 latest-stable 或指定版本 |

### 2.3 完整 Workflow 模板

```yaml
name: Build Project

on:
  push:
    branches: [ main, master ]
  workflow_dispatch:

jobs:
  build:
    runs-on: macos-latest
    permissions:
      actions: write      # 需要写入权限来管理 Artifacts
      contents: read

    steps:
    - name: Checkout
      uses: actions/checkout@v4

    - name: Setup Xcode
      uses: maxim-lobanov/setup-xcode@v1
      with:
        xcode-version: latest-stable

    # ===== 编译阶段（按项目实际需要修改） =====
    - name: Build
      run: |
        set -o pipefail
        rm -rf build/
        mkdir -p build

        # 这里替换为你项目的编译命令
        # 例如 clang 编译、xcodebuild、make 等
        echo "=== Compiling ==="
        # 你的编译命令...

        echo "=== Build successful ==="
        ls -la build/

    # ===== 签名（如需） =====
    - name: Sign
      run: |
        # 替换为你的签名命令
        # codesign -f -s - build/output.dylib
        echo "Signing..."

    # ===== 清理旧 Artifacts（可选，避免堆积） =====
    - name: Delete old artifacts
      uses: actions/github-script@v7
      with:
        script: |
          const artifacts = await github.rest.actions.listArtifactsForRepo({
            owner: context.repo.owner,
            repo: context.repo.repo,
          });
          for (const artifact of artifacts.data.artifacts) {
            if (artifact.name === 'build-output') {
              await github.rest.actions.deleteArtifact({
                owner: context.repo.owner,
                repo: context.repo.repo,
                artifact_id: artifact.id,
              });
            }
          }

    # ===== 上传产物 =====
    - name: Upload artifact
      uses: actions/upload-artifact@v4
      with:
        name: build-output           # Artifact 名称，下载时会用到
        path: build/                 # 上传 build/ 目录下所有文件
        retention-days: 30           # 保留 30 天
```

### 2.4 关键点说明

**产物上传：**
- `actions/upload-artifact@v4` 将构建产物上传到 GitHub Actions 的 Artifact 存储
- `name` 参数很重要，下载时需要通过这个名字定位
- `path` 可以是单个文件或目录
- 产物会自动打包为 zip 文件

**清理旧产物：**
- `actions/github-script@v7` 可以调用 GitHub API 清理同名旧 Artifact
- 避免 Artifact 数量无限增长（免费额度有限）

---

## 3. 服务器端下载部署

在服务器（Linux/Mac）上通过 GitHub API 下载最新构建产物。

### 3.1 所需信息

| 参数 | 说明 | 示例 |
|------|------|------|
| `GITHUB_USER` | GitHub 用户名 | `yourname` |
| `GITHUB_REPO` | 仓库名 | `my-project` |
| `GITHUB_TOKEN` | Personal Access Token | `ghp_xxxx...` |
| `ARTIFACT_NAME` | Workflow 中定义的 artifact name | `build-output` |
| `DEPLOY_PATH` | 服务器上部署到的路径 | `/path/to/deploy/output` |

### 3.2 获取 GitHub Token

1. GitHub → Settings → Developer settings → Personal access tokens → Tokens (classic)
2. 勾选 `repo` 权限（完整仓库访问）
3. 或使用 Fine-grained tokens，权限：`Actions: Read`

### 3.3 下载部署脚本

```bash
#!/bin/bash
set -e

# ====== 配置区（按需修改） ======
GITHUB_USER="yourname"
GITHUB_REPO="my-project"
GITHUB_TOKEN="ghp_YOUR_TOKEN_HERE"
ARTIFACT_NAME="build-output"
DEPLOY_PATH="/path/to/deploy/output"

# ====== 1. 获取最新 Workflow Run ID ======
echo "获取最新构建信息..."
RUN_ID=$(curl -s \
  "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs?per_page=1" \
  | python3 -c "import sys,json; print(json.load(sys.stdin)['workflow_runs'][0]['id'])")

echo "Run ID: $RUN_ID"

# ====== 2. 检查构建状态 ======
STATUS=$(curl -s \
  "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs/${RUN_ID}" \
  | python3 -c "import sys,json; r=json.load(sys.stdin); print(r['status'], r.get('conclusion',''))")
echo "Status: $STATUS"

# ====== 3. 构建成功则下载 ======
if echo "$STATUS" | grep -q "completed success"; then
  # 获取 Artifact ID
  ARTIFACT_ID=$(curl -s \
    "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs/${RUN_ID}/artifacts" \
    | python3 -c "import sys,json; data=json.load(sys.stdin); print(data['artifacts'][0]['id'])")
  echo "Artifact ID: $ARTIFACT_ID"

  # 下载（返回 zip）
  curl -sL \
    -H "Authorization: token ${GITHUB_TOKEN}" \
    -o /tmp/build_output.zip \
    "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/artifacts/${ARTIFACT_ID}/zip"

  # 解压并部署
  cd /tmp && rm -rf build_extract && mkdir build_extract && cd build_extract
  unzip -o /tmp/build_output.zip
  cp -R * "${DEPLOY_PATH}"

  echo "===== 部署成功 ====="
  ls -lh "${DEPLOY_PATH}"
else
  echo "===== 构建失败 ====="
  exit 1
fi
```

### 3.4 API 说明

```
获取最新运行:  GET /repos/{owner}/{repo}/actions/runs?per_page=1
获取运行状态:  GET /repos/{owner}/{repo}/actions/runs/{run_id}
获取产物列表:  GET /repos/{owner}/{repo}/actions/runs/{run_id}/artifacts
下载产物:      GET /repos/{owner}/{repo}/actions/artifacts/{artifact_id}/zip
删除缓存:     DELETE /repos/{owner}/{repo}/actions/caches
```

---

## 4. 一键执行脚本

将推送代码 + 等待构建 + 下载部署合并为一个命令。

```bash
#!/bin/bash
set -e

# ====== 配置区 ======
GITHUB_USER="yourname"
GITHUB_REPO="my-project"
GITHUB_TOKEN="ghp_YOUR_TOKEN_HERE"
ARTIFACT_NAME="build-output"
DEPLOY_PATH="/path/to/deploy/output"

# ====== 1. 推送代码触发构建 ======
cd "$(dirname "$0")"
git add -A
git commit -m "build: $(date +%Y%m%d_%H%M%S)"
git push origin HEAD

# ====== 2. 等待构建（根据项目调整等待时间） ======
echo "等待 60 秒让构建完成..."
sleep 60

# ====== 3. 获取并检查构建状态 ======
RUN_ID=$(curl -s "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs?per_page=1" \
  | python3 -c "import sys,json; print(json.load(sys.stdin)['workflow_runs'][0]['id'])")

STATUS=$(curl -s "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs/${RUN_ID}" \
  | python3 -c "import sys,json; r=json.load(sys.stdin); print(r['status'], r.get('conclusion',''))")
echo "Status: $STATUS"

if echo "$STATUS" | grep -q "completed success"; then
  ARTIFACT_ID=$(curl -s "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs/${RUN_ID}/artifacts" \
    | python3 -c "import sys,json; data=json.load(sys.stdin); print(data['artifacts'][0]['id'])")

  curl -sL -H "Authorization: token ${GITHUB_TOKEN}" \
    -o /tmp/build_output.zip \
    "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/artifacts/${ARTIFACT_ID}/zip"

  cd /tmp && rm -rf build_extract && mkdir build_extract && cd build_extract
  unzip -o /tmp/build_output.zip
  cp -R * "${DEPLOY_PATH}"

  echo "===== 部署成功 ====="
  ls -lh "${DEPLOY_PATH}"
else
  echo "===== 构建失败 ====="
  exit 1
fi
```

```bash
# 赋予权限
chmod +x deploy.sh
```

---

## 5. 排查构建失败

### 5.1 获取构建日志

```bash
# 获取最新 Run ID
RUN_ID=$(curl -s "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs?per_page=1" \
  | python3 -c "import sys,json; print(json.load(sys.stdin)['workflow_runs'][0]['id'])")

# 获取 Job ID
JOB_ID=$(curl -s "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/runs/${RUN_ID}/jobs" \
  | python3 -c "import sys,json; data=json.load(sys.stdin); print(data['jobs'][0]['id'])")

# 下载日志
curl -sL -H "Authorization: token ${GITHUB_TOKEN}" \
  -o /tmp/build_log.txt \
  "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/jobs/${JOB_ID}/logs"

# 查看错误
grep -i "error" /tmp/build_log.txt | head -20
tail -100 /tmp/build_log.txt
```

### 5.2 清理 GitHub Actions 缓存

```bash
# 删除全部缓存
curl -sL -X DELETE \
  -H "Authorization: token ${GITHUB_TOKEN}" \
  "https://api.github.com/repos/${GITHUB_USER}/${GITHUB_REPO}/actions/caches"
```

---

## 附录：GitHub Token 权限

| Token 类型 | 所需权限 | 用途 |
|-----------|---------|------|
| Classic token | `repo`（全部勾选） | 读写仓库、下载 Artifact |
| Fine-grained token | `Actions: Read` | 仅下载 Artifact（最小权限） |

> **建议**：如果只是在服务器上下载 Artifact，使用 Fine-grained token + `Actions: Read` 即可，不需要完整 `repo` 权限。