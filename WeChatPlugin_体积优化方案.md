# WeChatPlugin (MioHelper) 体积优化方案

> **目标**: 源码 12,904 行 / 源码文件夹 812K → 对标 微信优化1.6.5.dylib (1.3MB, 15万行反编译C代码, 功能比你多几倍)

---

## 一、现状评估

| 指标 | MioHelper (当前) | 微信优化1.6.5 | 差距 |
|------|-----------------|---------------|------|
| .m 源文件 | 39个 | ~1400个(反编译) | 微信优化功能多得多 |
| 源码行数 | 12,904行 | 153,128行(反编译C) | 10倍+代码量 |
| dylib大小 | ~2-3MB(估算) | 1.3MB | 我们的代码少但体积大 |
| 反向体积效率 | 极差 | 极优秀 | **核心问题: 每行代码产出的机器码大** |

> 微信优化反编译后 15 万行 C 代码，编译后只有 1.29 MB，惊人的体积效率。

---

## 二、核心膨胀原因分析

### 2.1 重复日志函数 — 23 个文件各自实现同一套写文件逻辑

**问题**: 23个 .m 文件中各自实现了完全相同的文件写日志函数，每个约 15-20 行。编译后在每个 .o 中都生成一份独立的 `NSFileHandle` / `NSFileManager` 指令。

```
受影响文件:
  PluginConfig.m               WeChatAlertHelper.m       AutoTransferHook.m
  FriendDetectionHook.m        GroupExitHook.m           JokerHook.m
  MessageTimeHook.m            RedEnvelopHook.m          WeChatRedEnvelopTaskManager.m
  RevokeHandler.m              RevokeHook.m              WPSessionBoxController.m
  WPSessionBoxHook.m           SettingEntryHook.m        WPAboutVC.m
  WPBackupVC.m                 WPOtherVC.m               ClearUnreadHook.m
  SettingController.m          SettingRedEnvelopController.m
  SettingSessionActionController.m
  WeChatTweakGroupSelectsController.m
```

**影响**: ~400 行纯重复代码 → 编译后 23 份副本 → **每个副本 ~200-400 字节机器码 = 约 5-10KB**

**优化**: 提取到单一的 `Core/LogManager.h`，提供宏:

```objc
// Core/LogManager.h
#define WPLog(tag, fmt, ...) \
    wp_shared_log(tag, [NSString stringWithFormat:fmt, ##__VA_ARGS__])
void wp_shared_log(NSString *tag, NSString *content);
```

**预期减少: 380 行 + 消除 22 份重复机器码 (~8KB)**

---

### 2.2 FriendDetectionHook.m — 1022行实验性探测代码

**问题**: 项目中最臃肿的单文件，包含大量仅在开发阶段有用的类扫描代码:

- `scanAllServices()` (146行): 扫描 WeChat 所有服务类，打印方法列表
- `scanCGIClasses()` (28行): 扫描所有 CGI 类
- `installNetworkHook()` (49行): 尝试 hook 网络层，只有日志输出
- `installContactSyncHook()` (26行): 探测联系人同步方法
- `tryTransferDetection()` (116行): 转账预检方案，基本不可用
- `FDViewDidLoad()` (84行): 手动构建 ViewController UI + 自定义弹窗

**优化**: 
1. 所有 `scanXXX` / `installXXX` 函数不产生实际效果 → **直接删除，或放到 `#ifdef DEBUG` 块**
2. `tryTransferDetection()` 不可用 → 删除
3. ViewController 中的弹窗改用 `WeChatAlertHelper`
4. 主检测逻辑保留即可

**预期减少: 750+ 行**

---

### 2.3 PluginConfig.m — 高度重复的配置加载/保存（441行）

**问题**: `loadDefaults` 和 `save` 方法对每个配置项重复同样的模式，每个 bool 3-5 行，每个 string 4-5 行。

**优化**: 用宏批量处理:

```objc
#define LOAD_BOOL(name)  _##name = [d boolForKey:KEY(name)]
#define LOAD_STRING(name) do { NSString *v = [d stringForKey:KEY(name)]; if (v.length) _##name = v; } while(0)
#define KEY(n) [kPluginPrefix stringByAppendingString:@#n]
```

**预期减少: 180+ 行**

---

### 2.4 弹窗系统三套并存 → 统一用 WCUIAlertView

**问题**: 项目同时存在 3 套弹窗系统，但实际调用量极不均衡:

| 弹窗系统 | 实现方式 | 自身代码 | 实际调用次数 | 位置 |
|---------|---------|---------|-------------|------|
| `WPAlert` | 手写 Auto Layout, 292行 | **305行** (含.h) | **1 处** | RedEnvelopHook:502 (红包详情) |
| `UIAlertController` | 系统原生, 0行 | 0行 | **8 处** | FriendDetection(4)、SessionBox(2)、BackupVC(1)、MessageTime(1) |
| `WeChatAlertHelper` | 复用微信 `WCUIAlertView`, 200行 | 200行 | **2 处** | JokerHook、SettingGeneralFunction |

**分析**: `WPAlert` 292 行代码只被 1 个地方调用 — 典型的"为一行调用写了一套框架"。

**优化方案 — 全部统一到 WeChatAlertHelper (WCUIAlertView)**:

`WeChatAlertHelper` 已支持:
- `showTipAlert:` — 纯提示弹窗
- `showTipAlert:buttonTitle:` — 自定义按钮文字
- `showInputAlertWithInitialText:target:onConfirm:` — 带输入框+回调

各调用点替换可行性:

| 原调用 | 原弹窗 | 替换为 | 可行性 |
|--------|--------|--------|--------|
| FriendDetection (4处提示) | UIAlertController | `showTipAlert:` | ✅ |
| WPBackupVC (确认重置) | UIAlertController | `showTipAlert:` | ✅ |
| WPSessionBoxHook (备注编辑) | UIAlertController | `showInputAlertWithInitialText:...` | ✅ |
| WPSessionBoxController (提示) | UIAlertController | `showTipAlert:` | ✅ |
| RedEnvelopHook (红包详情) | WPAlert | `showTipAlert:message:` | ✅ |
| SettingMessageTime (ActionSheet) | UIAlertController | **保留** | ⚠️ WCUIAlertView 不支持 ActionSheet |

**最终架构**:
```
弹窗需求           → 实现
──────────────────────────────
简单提示           → WeChatAlertHelper (WCUIAlertView)
带输入框弹窗       → WeChatAlertHelper (WCUIAlertView)
ActionSheet 选择   → UIAlertController (系统, 仅 1 处)
```

**预期减少: 305 行 (WPAlert 删除) + 调用侧代码精简**

---

### 2.5 WPBorderLayer.m — 过度设计的边框层（603行）

**问题**: 自定义 `CAShapeLayer` 子类，用 CoreGraphics 手动绘制圆角边框。定义了一套完整的 border 管理系统:
- 5 个类: `WPBorderLayer`, `WPSectionBorderShape`, `WPSeparatorConfiguration`, `WPModuleBorderConfig`, `WPBorderManager`, `UIView+WPBorder`
- 12+ 个工厂方法 + 10+ 个实例方法
- 类工厂方法之间大量重复（4 个 `*BorderLayerWithWidth:` 方法结构完全相同）

**优化**:
- 90% 的功能可用 `UIView.layer.borderWidth` + `cornerRadius` 一行替代
- 分隔线可以用一个 `+[UIView seperatorWithFrame:]` 工厂方法替代
- 精简为 80 行以内: 只保留 `WPBorderLayer` + `UIView (WPBorder)` category 的核心方法

**预期减少: 520+ 行**

---

### 2.6 getService() 函数 — 在 7+ 个文件中各自实现

**深层发现**: 这是仅次于日志函数的第二大重复模式。不同文件定义了名字不同但功能相同的 `getService()`:

| 文件 | 函数名 | 行数 |
|------|--------|------|
| RedEnvelopHook.m | `getService()` | 6行 |
| RevokeHandler.m | `getService()` | 10行 |
| WeChatRedEnvelopOperation.m | `getService()` (内联) | 8行 |
| WeChatRedEnvelopTaskManager.m | 内联 2 次 | 6行×2 |
| WPSessionBoxController.m | `getService()` | 10行 |
| WPSessionBoxHook.m | `sb_getService()` | 7行 |
| ClearUnreadHook.m | `getService()` + `getServiceViaCenter()` + `findSessionMgr()` | 70行 (!) |

**整体重复**: ~120 行纯重复

**优化**: 提取到 `Core/ServiceHelper.h`:
```objc
#define WXService(cls) ((id(*)(id,SEL,Class))objc_msgSend)(\
    ((id(*)(id,SEL))objc_msgSend)(objc_getClass("MMServiceCenter"), \
    @selector(defaultCenter)), @selector(getService:), objc_getClass(cls))
```

**预期减少: 100+ 行重复 + 消除冗余的 fallback 探测代码**

---

### 2.7 WPSessionBoxHook 与 WPSessionBoxController 之间的重复

**深层发现**: 这两个文件 (~1400 行合计) 之间共享了大量完全相同的辅助函数:

| 函数 | WPSessionBoxHook.m | WPSessionBoxController.m | 重复行数 |
|------|-------------------|-------------------------|---------|
| `getService()` | `sb_getService()` (line 38) | `getService()` (line 37) | 15 |
| `getContactMgr()` | `sb_getContactMgr()` (line 46) | `getContactMgr()` (line 64) | 10 |
| `getSessionMgr()` | `sb_getSessionMgr()` (line 52) | `getSessionMgr()` (line 49) | 26 |
| `isSessionTop()` | `sb_isSessionTop()` (line 105) | `isSessionTop:` (line 623) | 24 |
| `isSessionMuted()` | `sb_isSessionMuted()` (line 118) | `isSessionMuted:` (line 638) | 24 |
| `togglePin()` | `sb_togglePin()` (line 131) | `togglePin:isTop:` (line 430) | 30 |
| `toggleMute()` | `sb_toggleMute()` (line 147) | `toggleMute:isMuted:` (line 472) | 16 |
| `showEditRemark()` | `sb_showEditRemark()` (line 156) | `showEditRemark:` (line 496) | 50 |

**总计重复: ~195 行**

**根因**: Hook 层和 Controller 层各自实现了一套完全相同的业务逻辑函数，通过 `sb_` 前缀区分。Hook 层需要用 C 函数调用这些逻辑，但 Controller 层用了 OC 实例方法——代码内容相同。

**优化**: 将所有共享逻辑提取到 `Core/SessionBoxHelper.h` 作为 C 静态函数，两个文件共同引用。

**预期减少: 180+ 行**

---

### 2.8 WeChatRedEnvelopOperation.m — 完全死代码（120行）

**深层发现**: `WeChatRedEnvelopOperation` 是一个完整的 `NSOperation` 子类（120行），但 `WeChatRedEnvelopTaskManager` **从未使用它**。在 `addTaskWithParam:delay:` (line 57-89) 中，TaskManager 直接创建 `NSBlockOperation`：

```objc
NSBlockOperation *op = [NSBlockOperation blockOperationWithBlock:^{ ... }];
[self.taskQueue addOperation:op];
```

`WeChatRedEnvelopOperation` 类既没有被 import，也没有被实例化。纯死代码。

**优化**: 直接删除 `WeChatRedEnvelopOperation.m` + `.h`

**预期减少: 120 行 (完全删除)**

---

### 2.9 RedEnvelop 后台保活代码 — 过度复杂（115行）

**问题**: `WeChatRedEnvelopTaskManager.startBackgroundKeepAlive()` (lines 144-238) 实现了极复杂的后台保活机制:
- 内嵌 WAV 静音数据（44 字节硬编码 HEX）
- 运行时创建 `AVAudioPlayer`，设置无限循环 + 0 音量
- 设置 `AVAudioSession` category 为 Playback
- 启动 `UIApplication beginBackgroundTaskWithExpirationHandler`
- NSTimer 每 5 秒刷新后台任务

**分析**: 这是从早期抢红包插件"借"来的经典套路，但在现代 iOS（14+）上效果存疑。同时 `WCRedEnvelopesLogicMgr` 内部已有自己的后台处理机制。

**优化**: 
- 如果保活实际仍然有效 → 保留核心 audio 部分，删除 Timer + bgTask 部分
- 如果保活无效 → 整段删除
- 预期减少: **80-115 行**

---

### 2.10 ClearUnreadHook — 过度复杂的类探测（402行）

**问题**: 实现了 4 层 fallback 策略来查找 session manager 和 session list:

```
findSessionMgr() (lines 74-142, 68行):
  L1: 7个候类名逐个尝试 → class_getService
  L2: MMContext 属性探测 (5个属性名)
  L3: MMContext Ivar 探测 (4个 Ivar 名)

getSessionList() (lines 144-210, 66行):
  L1: 8个 Selector 名称逐个尝试
  L2: 6个 Ivar 名称逐个尝试
  L3: GetSessionCount + GetSessionAtIndex 逐个索引
```

> 微信版本是固定的，**只会命中其中一种路径**。其他所有 fallback 都是纯浪费。

**优化**: 针对目标微信版本，只保留确定工作的那一个路径。删除其余 3 层 fallback。

**预期减少: 100+ 行**

---

### 2.11 FeatureModuleRegistry 空壳模块

**问题**: 2 个模块是纯占位符:
- `SettingAssistFunctionController` (24行，显示"即将推出") — 无任何 hook
- `SettingUIBeautifyController` (24行，显示"即将推出") — 无任何 hook

这两个各占一个 .m + .h 文件，提供零功能。

**优化**: 删除这两个类和对应的 FeatureModuleDescriptor 条目。

**预期减少: 48 行 + 4 个文件**

---

### 2.12 WeChatRedEnvelopParam.m — 文件空洞

**问题**: `WeChatRedEnvelopParam.h` 定义了所有属性，但 `WeChatRedEnvelopParam.m` 只有：
```objc
@implementation WeChatRedEnvelopParam
@end
```

这个 .m 文件完全不需要存在（属性是 `@dynamic` 的，由 runtime 合成）。

**优化**: 将类声明合并到头文件，删除 .m。

---

### 2.13 WPSessionBoxHook — 过度类扫描代码（300+ 行）

**问题**: 包含三套互不相关的类扫描系统:

1. `probeAllClasses()` (60行): 遍历全局所有类，筛选包含 "Swipe" 的类 → 打印属性 & 方法
2. `dumpClassInfo()` (32行): 递归打印类的所有属性和方法
3. `tryHookSwipeCellClasses()` (50行): 先尝试 10 个硬编码类名 → 失败后全局扫描所有含 "Swipe" 的类

这三套系统在 viewDidLoad + viewWillAppear + onMenuItemsAppear 三个时机分别触发，还有 1.0 秒和 0.3 秒的 dispatch_after 延迟重试。

**优化**: 只保留针对已知类名的直接 hook，删除全部扫描/探测/重试代码。

**预期减少: 300+ 行**

---

### 2.14 WPCommonUI.h — 静态函数膨胀（121行×7次编译）

**问题**: 头文件中的 `static` 函数会被复制到每个 `#import` 该文件的 .m 中。目前约 7 个文件 import 它，所以 121 行被编译 7 次。

**优化**: 移到 `WPCommonUI.m`，头文件只保留函数声明（去掉 `static`）。

**预期减少: ~800 等效行（消除 6 份副本）**

---

### 2.15 Settings 控制器碎片化（~1200行, 12个文件）

| 控制器 | 行数 | 说明 |
|--------|------|------|
| SettingAssistFunctionController | 24 | 空壳，"即将推出" |
| SettingUIBeautifyController | 24 | 空壳，"即将推出" |
| SettingLayoutFunctionController | 52 | 空壳 |
| SettingAboutController | 86 | 简单信息页 |
| SettingRevokeController | 86 | 简单开关页 |
| SettingGeneralFunctionController | 111 | 开关列表 |
| SettingController | 110 | 主设置页 |
| SettingMessageTimeController | 129 | 时间设置 |
| SettingSessionActionController | 148 | 会话操作 |
| SettingRedEnvelopController | 207 | 红包设置（最复杂） |
| WeChatTweakGroupSelectsController | 217 | 群选择 |

**优化**: 
- 删除 2 个空壳"即将推出"控制器
- SettingAboutController 的 86 行可以直接在 SettingController 中用一个 heroCard 替代（主设置页已有 heroCard）
- SettingLayoutFunctionController 合并到 SettingGeneralFunctionController
- 预期减少: **400+ 行 + 5-6 个文件**

---

### 2.16 编译优化标志缺失

**当前 Makefile CFLAGS**:
```
-fobjc-arc -Wno-deprecated-declarations -Wno-unused-function -Wno-unused-variable
```
没有任何优化标志。

**优化**: 添加:

```makefile
MioHelper_CFLAGS += -Oz -flto=full -DNS_BLOCK_ASSERTIONS=1
MioHelper_LDFLAGS += -dead_strip -Wl,-S -Wl,-x
```

| 标志 | 作用 | 预期体积减少 |
|------|------|-------------|
| `-Oz` | 最小体积优化 (LLVM) | 25-35% |
| `-flto=full` | 全链接时优化：跨文件内联 + 死代码消除 | 15-25% |
| `-dead_strip` | 链接器移除未使用函数和数据 | 5-10% |
| `-Wl,-S` | 去除调试符号表 | 10-20% |
| `-Wl,-x` | 去除局部符号 | 5-10% |
| `-DNS_BLOCK_ASSERTIONS=1` | 禁用 NSAssert / assert | 1-3% |
| **合计** | | **40-60%** |

---

### 2.17 其他小问题

| 问题 | 位置 | 影响 |
|------|------|------|
| `substrate.h` + `CydiaSubstrate.m` 冗余 | libs/ | MessageTimeHook 独用 MSHookMessageEx，其他都用 HookEngine |
| HookEngine 与 CydiaSubstrate 混用 | 全局 | 两套 hook 并存，MessageTimeHook 用的 substrate 增加 ~5KB |
| 过多 `@try/@catch` | 多处 | 每个 try/catch 产生额外 unwind 表 |
| `Constants.h` 中的 static NSString | Config/ | 每个 import 该文件的 .m 产生副本 |
| MessageTimeHook 调试日志 | 918行文件 | ~30% 是 `[DBG]` 日志行 |
| RedEnvelop Hook 入口过多 | 5 个 hook 点 | onNewSyncAddMessage + addMessageLibWithWrap + onNewSyncNotAddDBMessage + AddMsg + AsyncOnAddMsg，可减到 2 个 |
| RevokeHandler 消息插入 + 通知撤回分开写 | 458行 | 两段代码 60% 结构重叠 |
| WeChatRedEnvelopTaskManager `addTaskWithParam` 内联多份代码 | 87行 | 创建 params 字典的代码和 WeChatRedEnvelopOperation 中重复 |
| SettingController `viewDidLoad` 手动计算帧 | 110行 | 手写 frame 计算可改用简易 Auto Layout |

---

## 三、优化对比总表

| # | 优化项 | 当前 | 优化后 | 减少行数 | 减少文件 | 体积收益 |
|---|--------|------|--------|---------|---------|---------|
| 1 | 统一日志模块 | 23份×17行 | 1份×30行 | **380行** | 0 | ~8KB |
| 2 | FriendDetection 精简 | 1022行 | 250行 | **772行** | 0 | ~15KB |
| 3 | PluginConfig 宏化 | 441行 | 250行 | **191行** | 0 | ~5KB |
| 4 | 统一弹窗(删WPAlert + 迁移) | 305行(WPAlert)+8处调用 | WeChatAlertHelper | **305行** | 2 | ~7KB |
| 5 | 精简 WPBorderLayer | 603行 | 80行 | **523行** | 0 | ~10KB |
| 6 | 提取 ServiceHelper | 7份×12行 | 1份×10行 | **100行** | 0 | ~2KB |
| 7 | 合并 SessionBox 重复函数 | ~195行重复 | 共享1份 | **180行** | 0 | ~4KB |
| 8 | 删除 RedEnvelopOperation 死代码 | 120行 | 0行 | **120行** | 2 | ~3KB |
| 9 | 精简 RedEnvelop 保活代码 | 115行 | 30行 | **85行** | 0 | ~2KB |
| 10 | 精简 ClearUnreadHook 探测 | 402行 | 250行 | **152行** | 0 | ~3KB |
| 11 | 删除空壳模块 | 48行 | 0行 | **48行** | 4 | ~1KB |
| 12 | 删除 RedEnvelopParam.m | 4行 | 0行 | **4行** | 1 | ~0.1KB |
| 13 | 精简 SessionBoxHook 扫描 | 718行 | 380行 | **338行** | 0 | ~7KB |
| 14 | WPCommonUI.h → .m | 121×7份=847 | 60×1份 | **787等效行** | 0 | ~8KB |
| 15 | 合并 Settings 控制器 | ~1200行 | 700行 | **500行** | 5 | ~10KB |
| 16 | 编译优化标志 | — | — | — | — | **40-60%** |
| 17 | 删除 RedEnvelopParam | — | — | — | 1 | 微小 |
| **合计** | | | **~4500行** | **~15个文件** | **50-70%** |

---

## 四、实施优先级

### P0 (立即执行, 改 5 分钟, 效果最大)

1. **Makefile 加编译优化标志** — `-Oz -flto=full -dead_strip -Wl,-S -Wl,-x`
2. **删除 WeChatRedEnvelopOperation 死代码** — 删 .m + .h
3. **删除 WeChatRedEnvelopParam.m** — 不需要的 .m
4. **提取统一日志模块 `Core/LogManager.h`** — 消除 22 份日志函数副本

### P1 (本周, 删代码为主)

5. **FriendDetectionHook 删 700 行探测扫描代码**
6. **删除 WPAlert.m/h，全局统一用 WeChatAlertHelper**
7. **提取 `Core/ServiceHelper.h`** — getService 统一
8. **WPSessionBoxHook 删 probeAllClasses + dumpClassInfo + tryHookSwipeCellClasses 全局扫描**
9. **删除 2 个空壳 Setting(AssistFunction/UIBeautify)Controller**

### P2 (下周, 重构为主)

10. **PluginConfig 用宏重构** — loadDefaults/save
11. **WPBorderLayer 精简为 80 行** — 只保留核心 border
12. **SessionBoxHook + SessionBoxController 提取共享 helper**
13. **WPCommonUI.h → .m**
14. **合并 Setting 控制器**
15. **精简 ClearUnreadHook 探测层**

### P3 (下下周, 细节优化)

16. **精简 RedEnvelop 后台保活代码**
17. **减少 RedEnvelop hook 入口点 (5→2)**
18. **统一 hook 方式 (全用 HookEngine 或全用 substrate)**

---

## 五、微信优化 1.3MB 为什么能做到

分析微信优化反编译代码后的特征:

1. **只用 C 函数 + objc_msgSend** — 不用 OC 方法调用, 减少符号表和元数据
2. **零 NSLog** — 没有任何运行时日志
3. **零文件 I/O** — 不写日志文件（我们 23 个文件写了 23 个日志文件）
4. **零 UI 代码** — 所有设置界面复用微信原生控制器（我们手写了 14+ 个自定义 ViewController）
5. **极度内联** — 反编译代码几乎是扁平的，没有深层调用栈
6. **没有 try/catch** — 所有异常处理都是提前返回 nil/0
7. **复用微信内部类** — 不自己造轮子（WCUIAlertView）
8. **单一 hook 方式** — 全部用 MSHookMessageEx
9. **无重复代码** — 每个辅助函数只出现一次
10. **编译开启 LTO** — 跨文件的死代码全被链接器消除

> 我们项目的核心反模式: **每个 .m 文件是一次"从头开始"** — 日志函数重写一遍、getService 重写一遍、联系人查询重写一遍、弹窗逻辑重写一遍。

---

## 六、推荐的最终 Makefile

```makefile
ARCHS = arm64
TARGET = iphone:latest:14.0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MioHelper

MioHelper_FILES = Tweak.m \
	Core/LogManager.m \
	Core/ServiceHelper.m \
	Core/HookEngine.m \
	Core/WeChatAlertHelper.m \
	Registry/HookRegistry.m \
	Config/PluginConfig.m \
	# ... 精简后保留的文件

MioHelper_CFLAGS = -fobjc-arc \
	-Oz \
	-flto=full \
	-DNS_BLOCK_ASSERTIONS=1 \
	-Wno-deprecated-declarations \
	-Wno-unused-function \
	-Wno-unused-variable

MioHelper_LDFLAGS = -dead_strip \
	-Wl,-S \
	-Wl,-x

MioHelper_FRAMEWORKS = UIKit Foundation Security

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
```

---

## 七、总结

当前项目 12,904 行源码，但真正有价值的业务逻辑（hook + 红包抢 + 撤回处理 + 配置）大约在 6,000-7,000 行。剩余 ~5,000 行（约 **40%**）是:

| 来源 | 行数 | 占比 |
|------|------|------|
| 重复日志函数 (23份) | ~400行 | 3% |
| 调试/探测扫描代码 (3个文件) | ~1,000行 | 8% |
| WPBorderLayer 过度设计 | ~603行 | 5% |
| getService 等 helper 重复 (7份) | ~120行 | 1% |
| SessionBox 双份逻辑 | ~200行 | 2% |
| SessionBox Hook 类扫描 | ~300行 | 2% |
| Settings 碎片化空壳 | ~500行 | 4% |
| RedEnvelop 死代码(Operation) + 过度保活 | ~200行 | 2% |
| ClearUnread 多层 fallback | ~150行 | 1% |
| WPAlert 冗余弹窗 | ~305行 | 2% |
| WPCommonUI.h 多份副本 | ~120等效行 | — |
| **合计** | **~3,900行** | **~30%** |

关键策略:
1. **编译优化先行** — `-Oz -flto -dead_strip` 单条可减 40-60% 体积
2. **消除重复** — 日志、getService、SessionBox 业务函数 各一份
3. **删除死代码** — WeChatRedEnvelopOperation (完全未用)、WPAlert (只被调 1 次)、空壳 Controller
4. **删除探测代码** — FriendDetection 扫描、SessionBox prob、ClearUnread fallback
5. **复用微信内置类** — WCUIAlertView 替代手写弹窗
6. **减少文件数** — 每个 .m 文件都产生一份 Mach-O 元数据 (section header、符号表等)