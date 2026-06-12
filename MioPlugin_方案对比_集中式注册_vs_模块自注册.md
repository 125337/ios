# 方案对比：集中式注册 vs 模块自注册

## 两种方案概览

### 方案 A：集中式注册（MioModuleRegistry — 我提出的方案）

```
Tweak.m
  └─ [MioModuleRegistry registerAll]  // 1 次调用
        ├─ 遍历描述符数组 → 逐一向 ConfigManager registerModule:
        ├─ [ConfigManager loadAll]
        └─ 遍历描述符数组 → 逐个安装 Hook
```

所有模块信息集中在一个数组，一个文件完成全部编排，**执行顺序完全确定**。

### 方案 B：模块自注册（你提的方案）

```
// 在每个 Config.m 末尾加构造函数
// RevokeConfig.m
__attribute__((constructor))
static void RevokeConfig_autoRegister() {
    [ConfigManager registerModule:[RevokeConfig class]];
}

// JokerConfig.m
__attribute__((constructor))
static void JokerConfig_autoRegister() {
    [ConfigManager registerModule:[JokerConfig class]];
}

// ... 每个模块加一个

// Tweak.m 只负责"收尾"
__attribute__((constructor))
static void MioPluginInitialize() {
    [ConfigManager loadAll];           // 此时所有模块应已完成自注册
    [HookRegistry installAllHooks];
}
```

---

## 核心差异：构造函数时序问题

这是两种方案最本质的区别。先看 `__attribute__((constructor))` 在 dylib 中的行为：

### dylib 加载时序

```
dyld 加载 MioPlugin.dylib
  │
  ├─ 发现 __DATA,__mod_init_func 段
  │   收集所有 __attribute__((constructor)) 函数指针
  │
  ├─ 按**链接顺序**依次调用所有构造函数 ← 顺序不可控
  │     ├─ RevokeConfig_autoRegister()        ← 注册 RevokeConfig
  │     ├─ JokerConfig_autoRegister()          ← 注册 JokerConfig
  │     ├─ MioPluginInitialize()                ← 调用 loadAll + installAllHooks
  │     ├─ ClearUnreadConfig_autoRegister()    ← 注册 ClearUnreadConfig  ← ⚠️ 晚了！
  │     └─ ...
```

**关键问题：构造函数的调用顺序由链接器决定，而非源代码逻辑。**

| 场景 | 结果 |
|------|------|
| MioPluginInitialize 在所有自注册之后 | ✅ 正常工作 |
| MioPluginInitialize 在某个自注册之前 | ❌ 那个模块的 Config 未注册，loadAll 跳过它 |
| 两个自注册之间互相依赖 | ❌ 无法保证依赖顺序 |

### 实践中的风险

在当前项目结构中，文件编译顺序由 Theos Makefile 决定，而 Theos 通常会按文件系统顺序（`find` 结果）编译 `.m` 文件。这意味着：

- **新增一个模块可能改变现有执行顺序**
- **不同编译器/环境下顺序可能不同**
- **一旦顺序错了，Bug 是间歇性、难以复现的**

> 类比：这就像把 `viewDidLoad` 执行顺序交给 `subviews` 数组的排序，而不是用 `addSubview:` 显式控制。

---

## 逐维度深度对比

### 1. 执行顺序确定性

| 维度 | 方案 A：集中式 | 方案 B：自注册 |
|------|:------------:|:------------:|
| Config 注册顺序 | **显式确定**（数组从上到下） | **不确定**（由链接顺序决定） |
| loadAll 时机 | 在**所有**注册完成后 | 可能在某模块注册**之前** |
| Hook 安装时机 | loadAll **确保已完成** | loadAll 可能**不完整** |
| 是否依赖编译器行为 | 不依赖 | **依赖** |

### 2. 新增模块的工作量

**方案 A**：
```
MioModuleRegistry.m  → 加一行 descriptor
```

**方案 B**：
```
每个 Config.m → 加 6 行构造函数代码   ← 新增工作量更大
每个 Hook.m   → 加 6 行构造函数代码
Tweak.m       → 无需修改（理论上）
```

**但注意**：方案 B 中每个模块要加 6 行模板代码。如果有 14 个模块，就是 14 × 6 = 84 行重复代码。而且这些自注册构造函数完全可以用我问题1方案中的宏来消除：

```objc
#define MIO_AUTO_REGISTER(classname) \
__attribute__((constructor)) \
static void classname##_autoRegister() { \
    [ConfigManager registerModule:[classname class]]; \
}
```

用宏可以消除代码重复，但**无法消除时序问题**。

### 3. 可删模块性（哪个方案删模块更方便？）

| 场景 | 方案 A | 方案 B |
|------|:------:|:------:|
| 删一个模块 | 删除文件夹 + 从数组中删 1 行 | **只删除文件夹** |
| 禁用一个模块 | 注释掉 1 行 | 无操作（文件不存在即可） |
| 模块文件散落在磁盘上 | 在中心数组能看到全貌 | **必须 grep 才能发现所有模块** |

**方案 B 在「删除模块」上有优势**——不需要修改任何中央文件。方案 A 需要从中央数组中删除对应行。

### 4. 模块发现力（代码可读性）

| 场景 | 方案 A | 方案 B |
|------|:------:|:------:|
| 新人了解"项目有哪些模块" | 打开 1 个文件看数组 | **翻遍所有文件夹** |
| 确认某模块是否注册了 | 在数组中 grep | 在 .m 文件中 grep `autoRegister` |
| 检查注册关系是否正确 | 同一行能看到 Config+Hook | 需看 Config.m 和 Hook.m **两个文件** |

**方案 A 在可读性上有绝对优势。**

### 5. 对 Hook 自安装的适用性

方案 B 对 Hook 有一个更深的问题。看当前流程：

```
Phase 1: registerModule (14 个 Config)
Phase 2: loadAll              ← 从 NSUserDefaults 读取并设置属性
Phase 3: installAllHooks      ← 开始 swizzle 微信方法
```

**Phase 2 和 Phase 3 之间有顺序依赖**：某些 Hook 的 `+install` 方法会读取 Config 的值来决定 swizzle 行为。比如 `RevokeHook.install` 内部调用了 `[RevokeConfig shared].preventRecall`。

如果用自注册让每个 Hook 也在构造函数中 `+install`，那可能发生在 loadAll **之前**，读到的是默认值而非用户设置的值。

**集中式方案中，这种依赖是显式且可保证的。自注册方案中，这种依赖是隐性的。**

---

## 方案选型决策树

```
你需要模块注册吗？
  │
  ├─「我希望删除模块时不用改任何文件」
  │   └─ 模块数量 > 50 个，经常增删
  │        → 方案 B（自注册）
  │
  ├─「我希望新人一看就懂项目有哪些模块」
  │   └─ 模块数量 < 20 个，团队协作
  │        → 方案 A（集中式）✅ ← 推荐
  │
  ├─「Hook 安装有 Config 依赖」
  │   └─ 需要 loadAll → installAllHooks 顺序保证
  │        → 方案 A（集中式）✅ ← 推荐
  │
  └─「我需要确定性执行顺序」
      └─ 不能接受因编译器行为不同导致的随机 Bug
           → 方案 A（集中式）✅ ← 推荐
```

---

## 如果选方案 B，如何解决时序问题？

有两个思路，但都有代价：

### 思路 1：纯自注册 + dispatch_once 懒加载

去掉 `loadAll` + `installAllHooks` 的显式调用，改为在第一次访问时触发：

```objc
// ConfigManager.m
static dispatch_once_t s_loadOnce;

+ (id)valueForKey:(NSString *)key {
    dispatch_once(&s_loadOnce, ^{ [self loadAll]; });
    // ... 正常查找
}
```

**问题 1**：谁负责 dispatch_once installAllHooks？如果放到 Hook 的 `+install` 中自己触发，那第一次调用 `+install` 时配置可能还没加载完。

**问题 2**：某些 Config 在构造时就通过 `-init` 或 `-setter` 触发了 Hook 行为（比如 GroupExitConfig），这些行为发生在 loadAll 之前。

### 思路 2：两次构造函数

```objc
// Tweak.m
__attribute__((constructor))
static void MioPluginPhase1() {
    // 什么也不做，只是确保在 __mod_init_func 段中占个位
}

// 另一个文件用单独的构造函数段（__DATA,__mod_init_func 顺序控制）
```

这需要利用链接顺序来控制 → 脆弱且依赖工具链。

### 思路 3：利用 dispatch_main 延迟

```objc
// Tweak.m
__attribute__((constructor))
static void MioPluginInitialize() {
    dispatch_async(dispatch_get_main_queue(), ^{
        // 此时所有构造函数已执行完毕
        [ConfigManager loadAll];
        [HookRegistry installAllHooks];
    });
}
```

**问题**：
- 被延迟到下一个 runloop，此时微信可能已经开始初始化
- Hook 安装太晚，可能错过微信早期的初始化事件
- 依赖 GCD 调度行为，也是一种隐含的时序假设

---

## 推荐结论

| 对比项 | **方案 A：集中式注册** | 方案 B：自注册 |
|--------|:-----------:|:-----------:|
| 执行顺序确定性 | ✅ **完全确定** | ❌ 链接顺序决定 |
| Config→loadAll→Hook 时序 | ✅ **天然三阶段** | ❌ 需额外机制协调 |
| 错误预防 | ✅ **编译时关联**（同一行） | ❌ 运行时分散 |
| 新人上手成本 | ✅ **看1个文件** | ❌ 看所有 .m 文件 |
| 删模块成本 | 小（2步：删目录+删行） | ✅ 小（只删目录） |
| 代码量 | **净减 80+ 行** | 每模块增 6 行 |
| 实现复杂度 | 低（一个数组） | 中（需解决时序） |
| **针对本项目** | | |
| 模块数量（16个） | ✅ 适合集中管理 | ❌ 集中更清晰 |
| 模块间无依赖 | ✅ 无需自注册 | ✅ 也适用 |
| 项目已有 FeatureModuleRegistry | **✅ 自然演进** | ❌ 推倒重来 |

**结论：对于 MioPlugin 这个 16 个模块的项目，集中式注册（方案 A）是最优解。** 理由：

1. **16 个模块很适合用一张表管理** — 多到值得集中，少到不超一屏
2. **三阶段时序是硬性需求** — Config 注册 → 加载 → Hook 安装，自注册无法自然满足
3. **项目已有一个 FeatureModuleRegistry 中心表** — 方案 A 是它的自然演进，方案 B 是另起炉灶
4. **删模块的场景在这个项目中很少发生** — 这些是功能模块，不是插件商城
5. **可读性比"免改文件"更重要** — 团队协作中，一个文件的全貌比"删目录就完事"更有价值

### 保留的权衡

方案 A 有一个**真正的 trade-off**：删除模块时需要改两个地方（删目录 + 删数组行）。这是一个合理的设计取舍——**用一处改动的代价，换取执行顺序的确定性、新人可读性、和时序安全**。

---

## 附录：方案 B 的完整实现设计（如果一定要用）

如果你仍然想用自注册方案，最安全的做法是这样的架构：

```objc
// ──── Core/AutoRegistration.h ────

/// 模块自注册宏：每个 Config.m 文件末尾加 1 行
/// 安全提示：不要在构造函数中调用 loadAll 或 installAllHooks
#define MIO_AUTO_REGISTER_CONFIG(classname) \
__attribute__((constructor)) \
static void classname##_autoRegister() { \
    [ConfigManager registerModule:[classname class]]; \
}

/// Hook 延迟安装宏：每个 Hook.m 文件末尾加 1 行
/// 利用 +load（类比 +initialize 更早）将安装推迟到 loadAll 之后
#define MIO_AUTO_INSTALL_HOOK(classname) \
__attribute__((constructor)) \
static void classname##_autoInstall() { \
    /* 仅标记为待安装，不立即执行 */ \
    [[MioPendingHookRegistry shared] addPendingHook:[classname class]]; \
}
```

```objc
// ──── Tweak.m ────
// 此文件必须是 Makefile 中**最后一个**编译的 .m 文件

__attribute__((constructor))
static void MioPluginInitialize() {
    // 此时所有模块的 autoRegister 构造函数应已执行完毕
    [ConfigManager loadAll];
    
    // 安装所有已等待的 Hook
    [[MioPendingHookRegistry shared] installAllPendingHooks];
}
```

**但这依赖于**：Tweak.m 的 .o 文件在链接时排在所有模块的 .o 之后。如果 Theos 的文件排序改变，这个假设就失效了。**这就是自注册方案的根本脆弱性。**

---

*文档结束*