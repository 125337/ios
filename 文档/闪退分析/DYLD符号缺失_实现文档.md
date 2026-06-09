# MioSubstrate 实现文档 — 消除 CydiaSubstrate 依赖

## 概述

**目标**：在仓库内自提供 `MSHookMessageEx` 函数实现，替换运行时对外部 `libsubstrate.dylib` 的依赖。

**根因**：Mio_arm64-1-1.dylib 中的 56 处 `MSHookMessageEx` 调用在编译期处于未定义状态（依赖 `-Wl,-undefined,dynamic_lookup` 跳过检查），运行时只能从已加载的其他 dylib 中寻找该符号。当其他插件被移除时，无人加载 `libsubstrate.dylib` → 符号缺失 → DYLD abort。

**方案**：新建 `MioPlugin/Core/MioSubstrate.m`，用纯 ObjC Runtime API 实现 `MSHookMessageEx`。编译器链接时自动使用该实现，消除运行时外部依赖。

**改动量**：新增 1 个文件 + 修改构建配置 1 处删除 + 0 处已有代码变动。

---

## 文件变更清单

| 操作 | 文件 | 说明 |
|------|------|------|
| **新增** | `MioPlugin/Core/MioSubstrate.m` | `MSHookMessageEx` 的纯 Runtime 实现（约 40 行） |
| **修改** | `.github/workflows/build-standalone.yml` | 编译列表加一行 + 链接参数删一行 |
| **不变** | `MioPlugin/libs/substrate.h` | 头文件声明保持不变，仍被其他文件引用 |
| **不变** | 其余 15 个 Hook 文件（56 处 `MSHookMessageEx` 调用） | **零改动** |

---

## 实现步骤

### Step 1：创建 MioSubstrate.m

在 `MioPlugin/Core/MioSubstrate.m` 创建新文件，内容如下：

```objc
//
//  MioSubstrate.m
//  MioPlugin
//
//  使用纯 ObjC Runtime 实现 MSHookMessageEx，消除对 CydiaSubstrate/libsubstrate.dylib 的依赖。
//  将此文件加入编译列表后，所有现有 MSHookMessageEx 调用无需任何修改即可正常工作。
//

#import <objc/runtime.h>
#import <objc/message.h>

#ifdef __cplusplus
extern "C" {
#endif

void MSHookMessageEx(Class _class, SEL _sel, IMP _imp, IMP *_result) {
    // ── 参数保护 ──
    if (!_class || !_sel || !_imp) return;

    // ── 获取原始 Method（沿继承链查找，可能在父类上）──
    Method m = class_getInstanceMethod(_class, _sel);
    if (!m) return;

    IMP origIMP = method_getImplementation(m);

    // ── 关键安全处理 ──
    // 如果方法不在 _class 本身上（在父类上），直接用 method_setImplementation
    // 会修改父类的方法实现，影响所有子类。
    // CydiaSubstrate 的做法是：先用 class_addMethod 把原始 IMP 复制到 _class，
    // 再替换 _class 上的实现。
    // class_addMethod 返回 NO = 方法已存在于 _class，返回 YES = 刚从父类复制过来
    if (!class_addMethod(_class, _sel, origIMP, method_getTypeEncoding(m))) {
        // 方法已经在 _class 本身上 → 直接替换
        method_setImplementation(m, _imp);
    } else {
        // 方法原来在父类上 → class_addMethod 刚把原 IMP 复制到 _class
        // 现在替换 _class 上的实现
        class_replaceMethod(_class, _sel, _imp, method_getTypeEncoding(m));
    }

    // ── 返回原始 IMP（对应 MSHookMessageEx 的第四个参数 &orig_xxx）──
    if (_result) {
        *_result = origIMP;
    }
}

#ifdef __cplusplus
}
#endif
```

---

### Step 2：修改 build-standalone.yml

文件路径：`.github/workflows/build-standalone.yml`

#### 修改 1：编译列表追加一行

找到第 46 行附近（`MioPlugin/Core/LogManager.m \` 之后），在其下方插入：

```yaml
          MioPlugin/Core/MioSubstrate.m \
```

修改前后的对比：

```diff
# 修改前（第 44-47 行）
          MioPlugin/Core/MioAlertHelper.m \
          MioPlugin/Core/MioRestartHelper.m \
          MioPlugin/Core/LogManager.m \
          MioPlugin/Registry/HookRegistry.m \

# 修改后
          MioPlugin/Core/MioAlertHelper.m \
          MioPlugin/Core/MioRestartHelper.m \
          MioPlugin/Core/LogManager.m \
+         MioPlugin/Core/MioSubstrate.m \
          MioPlugin/Registry/HookRegistry.m \
```

#### 修改 2：删除链接参数中的 `-Wl,-undefined,dynamic_lookup`

找到第 149-153 行：

```yaml
              -Wl,-S \
              -Wl,-x \
              -Wl,-undefined,dynamic_lookup \
              -o build/Mio_arm64.dylib \
              build/*.o
```

删除第 151 行（`-Wl,-undefined,dynamic_lookup \`），修改后：

```yaml
              -Wl,-S \
              -Wl,-x \
              -o build/Mio_arm64.dylib \
              build/*.o
```

**注意**：`-Wl,-undefined,dynamic_lookup` 后面的 `\` 也要一并删除，否则 yaml 语法错误。

---

### Step 3：确认 substrate.h 无需修改

`MioPlugin/libs/substrate.h` 当前内容是：

```objc
#ifndef SUBSTRATE_H
#define SUBSTRATE_H

#include <objc/runtime.h>

#ifdef __cplusplus
extern "C" {
#endif

void MSHookMessageEx(Class _class, SEL sel, IMP replacement, IMP *result);

#ifdef __cplusplus
}
#endif

#endif
```

**这个文件不需要任何修改。** 它只提供了 `MSHookMessageEx` 的函数声明，供引用方编译时通过。`-IMioPlugin/libs` 编译参数也保持不动。MioSubstrate.m 提供了实际的函数定义，链接器会自动配对。

---

### Step 4：提交并推送

```bash
cd /www/wwwroot/ios

# 查看变更
git status
# 预期输出：
#   modified:   .github/workflows/build-standalone.yml
#   new file:   MioPlugin/Core/MioSubstrate.m

# 添加并提交
git add MioPlugin/Core/MioSubstrate.m .github/workflows/build-standalone.yml
git commit -m "fix: 内置 MSHookMessageEx 实现，消除 CydiaSubstrate 依赖"

# 推送触发构建
git push origin HEAD
```

---

### Step 5：验证编译产物

构建完成后（约 60 秒），下载产物并验证：

```bash
# 检查 dylib 的依赖库
otool -L Mio_arm64-1.dylib | grep -i substrate
# 应无输出 — 说明不依赖任何 substrate 相关库

# 确认 MSHookMessageEx 符号已内置
nm Mio_arm64-1.dylib | grep MSHookMessageEx
# 应输出：0000xxxx T _MSHookMessageEx
# T 表示该符号已在 dylib 内部定义（而非未定义 U）
```

---

## 验证清单

### 编译验证

| 检查项 | 命令 | 预期结果 |
|--------|------|---------|
| 编译是否成功 | GitHub Actions 日志 | `Build successful` + exit 0 |
| 无 substrate 依赖 | `otool -L` | 无 `libsubstrate` 或 `CydiaSubstrate` 输出 |
| 符号已定义 | `nm` | `_MSHookMessageEx` 标记为 `T`（已定义） |

### IPA 部署验证

| 测试场景 | 操作 | 预期结果 |
|---------|------|---------|
| IPA 仅含 Mio（无其他插件） | 打包 → 安装 → 启动微信 | ✅ 正常启动，不闪退 |
| 进入聊天列表 | 打开微信 | ✅ 列表正常显示 |
| 发送/撤回消息 | 发一条消息 → 撤回 | ✅ 防撤回正常 |
| 红包功能 | 收到红包 | ✅ 自动抢红包/提示正常 |
| 消息时间格式化 | 查看历史消息 | ✅ 时间格式正确 |
| 消息列表圆角 | 查看消息列表 | ✅ 圆角正常 |
| 资料卡背景 | 点击头像进入资料卡 | ✅ 背景颜色/图片正常 |
| 聊天顶部栏 | 进入聊天 | ✅ 顶部自定义栏正常 |
| 设备解锁 → 杀进程 → 重开 | 锁屏 → 杀微信 → 打开 | ✅ 第二次启动也不闪退 |

---

## 如果编译失败

### 常见错误排查

| 错误 | 原因 | 解决 |
|------|------|------|
| `Undefined symbol: _MSHookMessageEx` | `-Wl,-undefined,dynamic_lookup` 已删除但 MioSubstrate.m 未加入编译列表 | 检查第一步的编译列表是否真的加了一行 |
| `yaml: line 151: mapping values are not allowed` | 删除 `\` 时 yaml 格式错误 | 确保 `-Wl,-x \` 后面保留了 `\`，且缩进与前后一致 |
| `clang: error: no such file or directory: 'MioPlugin/Core/MioSubstrate.m'` | 文件路径写错了 | 确认文件确实在 `MioPlugin/Core/MioSubstrate.m`，文件名大小写一致 |

### 回滚方法

如果编译失败需要回滚，直接还原提交：

```bash
cd /www/wwwroot/ios
git revert HEAD --no-edit
git push origin HEAD
```

---

## 附录：处理后文件的总览

```
MioPlugin/
├── Core/
│   ├── MioAlertHelper.m
│   ├── MioRestartHelper.m
│   ├── LogManager.m
│   └── MioSubstrate.m          ← 新增（MSHookMessageEx 纯 Runtime 实现）
├── libs/
│   └── substrate.h              ← 不变（仅函数声明，供编译用）
├── ...
├── Modules/
│   ├── Revoke/RevokeHook.m      ← 不变（调用 MSHookMessageEx）
│   ├── RedEnvelop/RedEnvelopHook.m ← 不变
│   ├── Layout/UIPurifyHook.m    ← 不变
│   ├── ... 共 15 个 Hook 文件   ← 56 处 MSHookMessageEx 调用全部不动
│   └── ...
└── ...
```

```
.github/workflows/
└── build-standalone.yml
    ├── 编译列表: +MioSubstrate.m
    └── 链接参数: -Wl,-undefined,dynamic_lookup  ← 已删除
```