# DYLD 符号缺失 — 修复方案（基于 CI 构建）

## 关键背景

- **构建方式**: GitHub Actions `macos-latest` + 纯 `clang` 命令行编译（**非 Theos**）
- **CI 环境**: 没有 CydiaSubstrate.framework，无法使用 `-framework CydiaSubstrate`
- **当前链接参数**: `-Wl,-undefined,dynamic_lookup`（允许未定义符号，运行时才能再说）
- **依赖统计**: `MSHookMessageEx` 在 **15 个文件**中被调用 **56 次**（见附录）
- **substrate 头文件**: 已存在于仓库 `MioPlugin/libs/substrate.h`，仅声明函数签名，不含实现

---

## 最佳方案：构建时提供 MSHookMessageEx 实现

### 原理

**在仓库中新增 1 个文件**，用纯 ObjC Runtime API 实现 `MSHookMessageEx` 函数。链接时，编译器找到我们的实现，不再需要运行时从外部库寻找该符号。

```
当前状态：
  MSHookMessageEx(56次调用)  →  编译期未定义  →  -undefined,dynamic_lookup  →  运行时去其他插件借

修复后：
  MSHookMessageEx(56次调用)  →  MioSubstrate.m 提供实现  →  编译期就解决了  →  不依赖任何外部
```

### 优势

| 维度 | 优势 |
|------|------|
| **更改量** | 新增 1 个文件 + 修改编译配置 1 行 |
| **现有代码** | 15 个 Hook 文件 **零改动**，56 个 `MSHookMessageEx` 调用全部继续生效 |
| **CI 环境** | 不依赖 CydiaSubstrate，`macos-latest` 直接编译 |
| **IPA 体积** | 不增加（不打包任何 framework） |
| **设备兼容** | 越狱/非越狱通吃，不依赖任何外部 dylib |
| **安全性** | 编译期就能发现符号错误，不再有运行时闪退 |

---

## 操作步骤

### Step 1：创建 MSHookMessageEx 实现文件

新建文件 `MioPlugin/Core/MioSubstrate.m`：

```objc
// ============================================================
// MioSubstrate.m
// 使用纯 ObjC Runtime 实现 MSHookMessageEx，消除对 CydiaSubstrate 的依赖
// ============================================================
// 使用方式：将此文件加入编译列表，删除 -Wl,-undefined,dynamic_lookup 即可
// 所有现有 MSHookMessageEx 调用无需任何修改
// ============================================================

#import <objc/runtime.h>
#import <objc/message.h>

#ifdef __cplusplus
extern "C" {
#endif

void MSHookMessageEx(Class _class, SEL _sel, IMP _imp, IMP *_result) {
    if (!_class || !_sel || !_imp) return;

    // 获取原始 Method（会沿继承链查找，可能在父类上）
    Method m = class_getInstanceMethod(_class, _sel);
    if (!m) return;

    IMP origIMP = method_getImplementation(m);

    // ★ 关键安全处理：
    //   如果方法不在 _class 本身上（在父类上），直接用 method_setImplementation
    //   会修改父类的方法实现，影响所有子类。
    //   CydiaSubstrate 的做法是：先用 class_addMethod 把原始 IMP 复制到 _class，
    //   再替换 _class 上的实现。
    if (!class_addMethod(_class, _sel, origIMP, method_getTypeEncoding(m))) {
        // 方法已经在 _class 本身上，直接替换即可
        method_setImplementation(m, _imp);
    } else {
        // 方法原来在父类上 — class_addMethod 已将原 IMP 复制到 _class
        // 现在用 class_replaceMethod 替换 _class 上的实现
        class_replaceMethod(_class, _sel, _imp, method_getTypeEncoding(m));
    }

    // 返回原始 IMP
    if (_result) {
        *_result = origIMP;
    }
}

#ifdef __cplusplus
}
#endif
```

### Step 2：修改构建配置

修改 `/www/wwwroot/ios/.github/workflows/build-standalone.yml`：

**2.1 在编译列表中添加 MioSubstrate.m**

在第 46 行（`MioPlugin/Core/LogManager.m \` 之后）增加：

```yaml
          MioPlugin/Core/MioSubstrate.m \
```

**2.2 删除 `-Wl,-undefined,dynamic_lookup`**

第 151 行：

```yaml
# 修改前
              -Wl,-undefined,dynamic_lookup \

# 修改后
              # -Wl,-undefined,dynamic_lookup  删除此行
```

> 注意：不要把整行删掉导致 yaml 格式错误，直接注释掉或删除 `-Wl,-undefined,dynamic_lookup \` 即可，前面的 `\` 换行符也要处理。正确的修改方式：

```yaml
# 修改前（第 149-153 行）：
              -Wl,-S \
              -Wl,-x \
              -Wl,-undefined,dynamic_lookup \
              -o build/Mio_arm64.dylib \
              build/*.o

# 修改后：
              -Wl,-S \
              -Wl,-x \
              -o build/Mio_arm64.dylib \
              build/*.o
```

### Step 3：推送部署

按开发流程推送到 GitHub 触发构建：

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "fix: 内置 MSHookMessageEx 实现，消除 CydiaSubstrate 依赖" && git push origin HEAD
```

---

## 验证方法

### 编译验证

```bash
# 检查 dylib 是否还有对 CydiaSubstrate 的未定义符号引用
otool -L build/Mio_arm64.dylib | grep -i substrate
# 应无输出（不依赖任何 substrate 相关库）
```

### 功能验证

| 测试场景 | 预期结果 |
|---------|---------|
| IPA **仅包含** Mio_arm64.dylib（无其他插件） | ✅ 微信正常启动 |
| IPA 包含全部插件 | ✅ 微信正常启动，无冲突 |
| 防撤回 | ✅ 正常 |
| 红包自动抢 | ✅ 正常 |
| 消息时间格式化 | ✅ 正常 |
| 消息列表圆角 | ✅ 正常 |
| 资料卡背景 | ✅ 正常 |
| 聊天顶部栏 | ✅ 正常 |
| 其他所有 Hook 功能 | ✅ 全部正常 |

---

## 原理说明

### MSHookMessageEx 做了什么

```objc
// CydiaSubstrate 的 MSHookMessageEx 本质上就是 ObjC Runtime 的 method swizzling：
// 1. 获取方法的原始 IMP
// 2. 将方法实现替换为新的 IMP
// 3. 将原始 IMP 通过 _result 参数返回给调用方

// 也是这个实现：
MSHookMessageEx(cls, sel, newIMP, &origIMP)
↓ 等价于
Method m = class_getInstanceMethod(cls, sel);
origIMP = method_getImplementation(m);  // &origIMP
method_setImplementation(m, newIMP);    // newIMP
```

### 为什么之前不这么做

上一份文档建议的「硬链接 CydiaSubstrate」方案在 `macos-latest` CI 上不可行，因为 CI 环境不包含 CydiaSubstrate.framework。**当前方案专门适配了你的 GitHub Actions 纯 clang 构建流程**。

### 为什么比「逐个替换 15 个文件」更好

| 方案 | 改动文件数 | 工时 | 风险 |
|------|-----------|------|------|
| 逐个替换 56 处调用 | 15 个文件 | 高，每处都要小心参数差异 | 高，容易漏替换或写错 |
| **本方案（1 个实现文件）** | **1 新增 + 1 行删除** | **低，5 分钟** | **低，不改现有代码** |

---

## 附录：所有 MSHookMessageEx 调用分布

| # | 文件 | 调用数 |
|---|------|--------|
| 1 | `Modules/DevTools/MioNavMonitor.m` | 14 |
| 2 | `Modules/RedEnvelop/RedEnvelopHook.m` | 9 |
| 3 | `Modules/ListCornerRadius/ListCornerRadiusHook.m` | 8 |
| 4 | `Modules/AutoTransfer/AutoTransferHook.m` | 6 |
| 5 | `Modules/ChatTopBar/ChatTopBarHook.m` | 3 |
| 6 | `Modules/HideAvatar/HideAvatarHook.m` | 3 |
| 7 | `Modules/Layout/UIPurifyHook.m` | 3 |
| 8 | `Modules/Revoke/RevokeHook.m` | 1 |
| 9 | `Modules/MessageTime/MessageTimeHook.m` | 1 |
| 10 | `Modules/Layout/UIAttachLayoutHook.m` | 3 |
| 11 | `Modules/ProfileCardBg/ProfileCardBgHook.m` | 2 |
| 12 | `Modules/Unread/ClearUnreadHook.m` | 2 |
| 13 | `Modules/PlaceholderText/PlaceholderTextHook.m` | 1 |
| 14 | `Modules/GroupExit/GroupExitHook.m` | 1 |
| 15 | `Modules/Joker/JokerHook.m` | 1 |
| | **合计** | **56** |

**无需修改以上任何文件。所有更改仅涉及 1 个新文件 + 1 行删除。**