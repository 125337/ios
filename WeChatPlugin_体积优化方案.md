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

### 2.1 重复日志函数（最大问题）

**问题**: 23个 .m 文件中各自实现了完全相同的文件写日志函数，每个约 15-20 行。

```
受影响文件:
  - PluginConfig.m          (configLog)
  - WeChatAlertHelper.m     (walertLog)
  - AutoTransferHook.m      (日志函数)
  - FriendDetectionHook.m   (fdLog)
  - GroupExitHook.m         (日志函数)
  - JokerHook.m             (jokerLog)
  - MessageTimeHook.m       (mtLog)
  - RedEnvelopHook.m        (reLog)
  - WeChatRedEnvelopTaskManager.m
  - RevokeHandler.m
  - RevokeHook.m
  - WPSessionBoxController.m
  - WPSessionBoxHook.m      (sbHookLog)
  - SettingEntryHook.m      (reLog)
  - WPAboutVC.m
  - WPBackupVC.m
  - WPOtherVC.m
  - ClearUnreadHook.m
  - SettingCategoryController.m
  - SettingController.m
  - SettingRedEnvelopController.m
  - SettingSessionActionController.m
  - WeChatTweakGroupSelectsController.m
```

**影响**: ~350+ 行纯重复代码 → 编译后产生大量重复指令段

**优化**: 提取到单一的 `LogManager.h/.m`，提供一个宏:

```objc
// Core/LogManager.h
#define WPLog(tag, fmt, ...) wp_shared_log(tag, [NSString stringWithFormat:fmt, ##__VA_ARGS__])
void wp_shared_log(NSString *tag, NSString *content);
```

---

### 2.2 FriendDetectionHook.m — 1022行实验性代码

**问题**: 这个模块是项目中最臃肿的单文件，包含大量仅在开发阶段有用的"类浏览"和"策略探测"代码:

- `scanAllServices()` (146行): 扫描 WeChat 所有服务类，打印方法列表
- `scanCGIClasses()` (28行): 扫描所有 CGI 类
- `installNetworkHook()` (49行): 尝试 hook 网络层，只有日志输出
- `installContactSyncHook()` (26行): 探测联系人同步方法
- `tryTransferDetection()` (116行): 转账预检方案，基本不可用
- `FDViewDidLoad()` (84行): 手动构建 ViewController UI

**优化**: 
1. 所有 `scanXXX` / `installXXX` 函数仅在首次运行时执行一次且不产生实际效果 → **直接删除，或放到 `#ifdef DEBUG` 块**
2. `tryTransferDetection()` 不可用 → 删除
3. ViewController 中的弹窗改用 `WeChatAlertHelper` 即可
4. **预期减少: 700+ 行**

---

### 2.3 PluginConfig.m — 高度重复的配置加载/保存（441行）

**问题**: `loadDefaults` 和 `save` 方法对每个配置项重复同样的模式:

```objc
// 每个 bool 都要写 3-5 行:
_debugLogging = [d boolForKey:[kPluginPrefix stringByAppendingString:@"DebugLogging"]];

// 每个 string 都要写 4-5 行:
v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"NotifyFormat"]];
if (v.length > 0) _notifyFormat = v;
```

**优化**: 用宏或反射方式批量处理:

```objc
#define LOAD_BOOL(name) _##name = [d boolForKey:KEY(name)]
#define LOAD_STRING(name) do { NSString *v = [d stringForKey:KEY(name)]; if (v.length) _##name = v; } while(0)
```

**预期减少: 150+ 行**

---

### 2.4 弹窗系统三套并存 → 统一用 WCUIAlertView（可减 ~305行 + 调用侧精简）

**问题**: 项目同时存在 3 套弹窗系统，但实际调用量极不均衡:

| 弹窗系统 | 实现方式 | 自身代码 | 实际调用次数 | 位置 |
|---------|---------|---------|-------------|------|
| `WPAlert` | 手写 Auto Layout, 292行 | **305行** (含.h) | **1 处** | RedEnvelopHook (红包详情) |
| `UIAlertController` | 系统原生, 0行 | 0行 | **8 处** | FriendDetection(4)、SessionBox(2)、BackupVC(1)、MessageTime(1) |
| `WeChatAlertHelper` | 复用微信 `WCUIAlertView`, 200行 | 200行 | **2 处** | JokerHook、SettingGeneralFunction |

**分析**: `WPAlert` 292 行代码只被 1 个地方调用 — 典型的"为一行调用写了一套框架"。

**优化方案 — 全部统一到 WeChatAlertHelper (WCUIAlertView)**:

`WeChatAlertHelper` 已支持的接口:
- `showTipAlert:` — 纯提示弹窗
- `showTipAlert:buttonTitle:` — 自定义按钮文字
- `showInputAlertWithInitialText:target:onConfirm:` — 带输入框+回调

各调用点替换可行性:

| 原调用 | 原弹窗 | 替换为 | 可行性 |
|--------|--------|--------|--------|
| FriendDetection (4处提示弹窗) | UIAlertController | `showTipAlert:` | ✅ |
| WPBackupVC (确认重置) | UIAlertController | `showTipAlert:` | ✅ |
| WPSessionBoxHook (备注编辑) | UIAlertController | `showInputAlertWithInitialText:...` | ✅ |
| WPSessionBoxController (提示) | UIAlertController | `showTipAlert:` | ✅ |
| RedEnvelopHook (红包详情) | WPAlert | `showTipAlert:message:` | ✅ |
| JokerHook (输入弹窗) | WeChatAlertHelper | — | ✅ 已统一 |
| SettingGeneralFunction | WeChatAlertHelper | — | ✅ 已统一 |
| SettingMessageTime (ActionSheet) | UIAlertController | **保留** | ⚠️ WCUIAlertView 不支持 ActionSheet 多选，保留 1 处系统调用 |

**最终架构**:
```
弹窗需求           → 实现
──────────────────────────────
简单提示           → WeChatAlertHelper (WCUIAlertView)
带输入框弹窗       → WeChatAlertHelper (WCUIAlertView)
ActionSheet 选择   → UIAlertController (系统, 仅 1 处)
```

**优化**:
- 删除 `WPAlert.m` + `WPAlert.h` → **-305 行**
- 8 处 `UIAlertController` 调用 → 改为 `WeChatAlertHelper`，代码更简洁统一
- 预期减少: **305 行 (WPAlert 删除) + 调用侧代码精简**

---

### 2.5 WPBorderLayer.m — 过度设计的边框层（603行）

**问题**: 自定义 `CAShapeLayer` 子类，用 CoreGraphics 手动绘制圆角边框。这是典型的过度工程化。

**优化**:
- 用 `UIView.layer.borderWidth` + `UIView.layer.borderColor` + `UIView.layer.cornerRadius` 替代
- 或者保留但精简为 100 行以内
- 预期减少: **500+ 行**

---

### 2.6 Settings 控制器 — 碎片化严重（1194行, 11个文件）

**问题**: 11 个设置页面控制器，很多只有 24 行（空壳）：

| 控制器 | 行数 | 说明 |
|--------|------|------|
| SettingAssistFunctionController | 24 | 空壳 |
| SettingUIBeautifyController | 24 | 空壳 |
| SettingLayoutFunctionController | 52 | 空壳 |
| SettingAboutController | 86 | 简单页面 |
| SettingRevokeController | 86 | 简单页面 |
| SettingGeneralFunctionController | 111 | 简单页面 |
| SettingController | 110 | 主设置页 |
| SettingMessageTimeController | 129 | 时间设置 |
| SettingSessionActionController | 148 | 会话操作 |
| SettingRedEnvelopController | 207 | 红包设置 |
| WeChatTweakGroupSelectsController | 217 | 群选择 |

**优化**:
- 合并所有 24行的空壳控制器到一个数据驱动的 `SettingListController`，用 plist/JSON 配置
- 预期减少: **500+ 行** + 减少 6-8 个文件

---

### 2.7 WPSessionBoxHook.m — 过度复杂的类扫描（718行）

**问题**: 包含大量运行时类扫描代码（`probeAllClasses()`, `dumpClassInfo()`, `tryHookSwipeCellClasses()`），遍历所有我们知道的 Cell 类名并探测方法列表:

- 3 层 hook 尝试策略
- 全局类列表扫描
- 每 0.3-1.0 秒重试 hook

**优化**:
- 运行时只需 hook 已知的确定类名（如 `NewMainFrameViewController`）
- 删除 `probeAllClasses`、`dumpClassInfo` 等调试扫描代码
- 预期减少: **300+ 行**

---

### 2.8 WPCommonUI.h — 静态函数膨胀（121行）

**问题**: 头文件中的 `static` 函数会被复制到每个 `#import` 该文件的 .m 文件中。`__attribute__((unused))` 只是消除警告，不消除代码复制。

当前有 7 个 .m 文件 `#import "WPCommonUI.h"`，每个静态函数被编译 7 次。

**优化**: 把函数移到 .m 文件中，头文件只保留声明。

---

### 2.9 编译优化标志缺失

**问题**: Makefile 完全没有体积优化标志:

```
当前 CFLAGS: -fobjc-arc -Wno-deprecated-declarations -Wno-unused-function -Wno-unused-variable
```

**优化**: 添加:

```makefile
MioHelper_CFLAGS += -Oz -flto=full
MioHelper_LDFLAGS += -dead_strip -Wl,-S -Wl,-x -Wl,-dead_strip_dylibs
```

| 标志 | 作用 | 预期体积减少 |
|------|------|-------------|
| `-Oz` | 最小体积优化 (比 -Os 更激进) | 25-30% |
| `-flto=full` | 全链接时优化，跨文件内联和死代码消除 | 15-20% |
| `-dead_strip` | 移除未使用的函数和数据 | 5-10% |
| `-Wl,-S` | 去除调试符号表 | 10-20% |
| `-Wl,-x` | 去除局部符号 | 5-10% |

---

### 2.10 其他冗余

| 问题 | 位置 | 影响 |
|------|------|------|
| 3 套弹窗系统并存 (WPAlert/UIAlertController/WeChatAlertHelper) | 全局 | 详见 2.4，WPAlert 只被调用 1 次 |
| `substrate.h` + `CydiaSubstrate.m` | libs/ | 与 CydiaSubstrate.framework 重复, MessageTimeHook 使用 MSHookMessageEx |
| HookEngine 与 CydiaSubstrate 混用 | 全局 | 两套 hook 机制并存，用一套即可 |
| `#import <UIKit/UIKit.h>` 在每个文件 | 全局 | 用预编译头(.pch)统一引入 |
| 过多 `@try/@catch` 防御性代码 | MessageTimeHook, FriendDetectionHook | 每个 try/catch 产生额外 unwind 表 |
| `Config/Constants.h` 中的 static NSString | - | 每个 import 该文件的 .m 都会产生副本 |
| 过度使用 `NSLog` + 文件日志双写 | 多处 | 日志代码占比 ~8% |
| MessageTimeHook 调试日志 | 918行文件 | ~30% 都是 [DBG] 日志行 |

---

## 三、优化对比总表

| 优化项 | 当前行数 | 优化后行数 | 减少行数 | 预期体积减少 |
|--------|---------|-----------|---------|-------------|
| 1. 统一日志模块 | ~350行(重复) | 30行(1个地方) | 320行 | ~8KB |
| 2. FriendDetection 精简 | 1022行 | 250行 | 772行 | ~18KB |
| 3. PluginConfig 宏化 | 441行 | 250行 | 191行 | ~5KB |
| 4. 统一弹窗(删WPAlert+迁移UIAlertController→WeChatAlertHelper) | 305行(自身)+8处调用 | 保留WeChatAlertHelper | 305行(WPAlert) + 调用侧精简 | ~7KB+ |
| 5. 精简 WPBorderLayer | 603行 | 100行 | 503行 | ~12KB |
| 6. 合并 Settings 控制器 | 1194行 | 500行 | 694行 | ~16KB |
| 7. 精简 SessionBoxHook | 718行 | 400行 | 318行 | ~8KB |
| 8. WPCommonUI 重构 | 121行(×7复制) | 60行(×1) | ~780行(等效) | ~12KB |
| 9. 编译优化标志 | - | - | - | **30-50%** |
| 10. 删除调试扫描代码 | ~500行 | 0行 | 500行 | ~10KB |
| **合计** | | | **~4370行源码** | **预估 40-60% 体积减少** |

---

## 四、实施优先级

### P0 (立即执行, 投入产出比最高)

1. **添加编译优化标志** — 改3行 Makefile, 立竿见影
2. **提取统一日志模块** — 减少编译后的重复函数段
3. **删除 FriendDetectionHook 中的类扫描代码** — 删 700 行无用代码

### P1 (本周完成)

4. **统一弹窗系统: 删除 WPAlert，UIAlertController 调用全部迁移到 WeChatAlertHelper** — 消除一整套弹窗系统，全局统一用 WCUIAlertView
5. **PluginConfig 用宏重构** — 减少一半代码
6. **合并空壳 Settings 控制器**
7. **精简 WPBorderLayer**

### P2 (下周完成)

8. **重构 WPCommonUI.h 为 .m**
9. **精简 WPSessionBoxHook 扫描代码**
10. **统一使用 HookEngine 或 CydiaSubstrate, 删除冗余的 hook 库**

---

## 五、微信优化 1.3MB 为什么能做到

分析微信优化反编译代码后发现的特征:

1. **只用 C 函数 + objc_msgSend** — 不用 OC 方法调用开销，减少符号表和元数据
2. **零 NSLog** — 没有任何运行时日志
3. **零文件 I/O** — 不写日志文件
4. **零 UI 代码** — 所有设置界面复用微信原生控制器
5. **极度内联** — 反编译代码几乎是扁平的，没有深层调用栈
6. **没有 try/catch** — 所有异常处理都是提前返回 nil/0
7. **复用微信内部类** — 不自己造轮子 (如 不用 UIAlertController 而是调用 WCUIAlertView)
8. **单一 hook 方式** — 全部用 MSHookMessageEx

---

## 六、推荐的最终 Makefile

```makefile
ARCHS = arm64
TARGET = iphone:latest:14.0

THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MioHelper

MioHelper_FILES = Tweak.m \
	Config/PluginConfig.m \
	Core/HookEngine.m \
	Core/LogManager.m \
	Core/WeChatAlertHelper.m \
	Registry/HookRegistry.m \
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

当前项目的核心问题不是"功能多"，而是"代码密度低"——大量重复代码、调试探针代码、冗余的 UI 系统和配置管理代码占据了编译产物的绝大部分。

**微信优化用 10 倍+ 的代码量编译出 1.3MB 的 dylib，我们用不到 1/10 的代码量却能编译出相同甚至更大的 dylib**，说明我们的代码效率极低。

关键策略:
1. **编译优化** — 马上添加 -Oz -flto -dead_strip
2. **消除重复** — 日志模块统一, 宏化配置
3. **删除死代码** — 类扫描、策略探测、不可用方案
4. **复用而非重造** — 统一用 WeChatAlertHelper (WCUIAlertView) 处理弹窗，复用微信内置类替代自定义 View
5. **减少文件数** — 合并空壳控制器, 降低元数据开销