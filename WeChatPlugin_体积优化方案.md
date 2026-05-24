# WeChatPlugin (MioHelper) 体积优化方案

> **编译方式**: GitHub Actions (`build-standalone.yml`, 38个 .m 文件)，编译标志不动。

---

## 一、当前状态

| 指标 | 值 |
|------|----|
| .m 源文件 (全仓/编译) | 38 个（全部编译，无死文件） |
| .h 源文件 | 36 个 |
| 源码总行数 | ~8,892 行 |
| build-standalone.yml | `-Oz` ✅ / `-Wl,-S` ✅ / `-Wl,-x` ✅ |

---

## 二、已完成

| # | 项 | 效果 |
|---|----|------|
| 1 | 删除 `WPAlert.m/.h` | -305行 ✅ |
| 2 | 删除 `WeChatRedEnvelopOperation.m/.h` (死代码) | -120行 |
| 3 | 删除 `SettingAssistFunctionController` + `SettingUIBeautifyController` | -48行 |
| 4 | 统一日志模块 (LogManager.h/.m) | ~250+ 处调用迁移，19 文件 ✅ |
| 5 | 统一 ServiceHelper.h | 4 文件 getService 去重 ✅ |
| 6 | FriendDetection 模块完全移除 | -1011行，4 文件 + 1 编译项 ✅ |
| 7 | ClearUnreadHook 精简 | 404→232行，删除多层 fallback ✅ |
| 8 | WPBorderLayer 精简 | 603→91行，删除 4 个未使用类 ✅ |
| 9 | WPCommonUI.h → .m | 121→30行 .h，消除 4 份编译副本 ✅ |
| 10 | 合并 Settings 碎片控制器 | -2 编译项 ✅ |
| 11 | 删除 WeChatRedEnvelopParam.m 空实现 | -1 编译项 ✅ |
| 12 | 删除 SettingSessionActionController 死代码 | -2 文件, 124行 ✅ |
| 13 | 清理 WPSessionBox 未编译文件 | -4 文件, ~1400行 ✅ |
| 14 | 新增 UI 净化模块 (UIPurifyHook + 2 VC) | +589行, +3编译项 🆕 |
| 15 | 新增界面定制入口 (WPUIVC) | +104行, +1编译项 🆕 |

---

## 三、待优化问题（3项）

### 问题1：PluginConfig.m — 配置加载/保存高度重复（437行）

`loadDefaults` + `save` = ~250行纯重复模式，每个属性 4-6行。

**方案**: 用宏批量处理

**预计减少**: 150+行

---

### 问题2：MessageTimeHook + UIPurifyHook 双用 MSHookMessageEx

`MessageTimeHook.m` (line 850) 和 `UIPurifyHook.m` (12 处) 使用 `MSHookMessageEx`（CydiaSubstrate），其余模块用 HookEngine。

> UIPurifyHook 使用 12 次 MSHookMessageEx（含 purifySafeHook 内的调用），迁移量增加。

**方案**: 迁移两个文件到 HookEngine，删 `libs/CydiaSubstrate.m` 编译（需真机验证）

**预计减少**: ~3-5KB dylib

---

### 问题3：UI 代码冗余（详见 `WeChatPlugin_UI体积优化方案.md`）

| 优化项 | 预计减少 |
|--------|----------|
| 合并 FormatEditorVCs → BaseVC | ~300行 |
| 删除 4 个死 `*Log` 函数 | ~64行 |
| UIPurifyHook 5连Hook 宏化 | ~30行 |
| 删除 WPUIVC noop 占位 | ~25行 |
| 合并 open*Helper 导航 | ~35行 |
| 提取 buildUI 公共模板 | ~40行 |
| **UI 合计** | **~494行** |

---

## 四、优化总表

| # | 优化项 | 类型 | 减少 | 文件变化 | 状态 |
|---|--------|------|------|---------|------|
| 1 | 统一日志模块 | 框架 | 280行 + ~8KB | +2文件 | ✅ |
| 2 | 统一 ServiceHelper | 框架 | 50行 | +1文件 | ✅ |
| 3 | FriendDetection 完整移除 | 删模块 | ~1011行 | -4文件, -1编译项 | ✅ |
| 4 | ClearUnreadHook 精简 | 删冗余 | ~170行 | 改1文件 | ✅ |
| 5 | WPBorderLayer 精简 | 删冗余 | ~510行 | 改1文件 | ✅ |
| 6 | WPCommonUI.h → .m | 消除重复 | 4 份副本 | +1文件 | ✅ |
| 7 | 合并 Settings 碎片 | 删冗余 | — | -2编译项 | ✅ |
| 8 | 删除 RedEnvelopParam.m | 删空文件 | 1编译项 | -1文件 | ✅ |
| 9 | 删除 SettingSessionActionController | 删死代码 | 124行 | -2文件 | ✅ |
| 10 | 清理 WPSessionBox | 删死代码 | ~1400行 | -4文件 | ✅ |
| 11 | PluginConfig 宏化 | 消除重复 | ~150行 | 改1文件 | ⬜ |
| 12 | 统一 HookEngine (MessageTime + UIPurify) | 统一引擎 | ~3-5KB | -1编译项 | ⬜ |
| 13 | UI 体积优化 (6项) | 消除UI重复 | ~494行 | 改9文件 | ⬜ |
| **已完成合计** | | | **~3545行源码** | | |

---

## 五、分阶段目标

| 阶段 | 内容 | 预计 dylib | 状态 |
|------|------|-----------|------|
| 当前 | 已完成 15 项 (含新增 UI净化模块) | ~420K | ✅ |
| +消除重复 | 宏化 PluginConfig | -150行 | ⬜ |
| +UI精简 | UI 优化 6 项 | -494行 | ⬜ |
| +统一引擎 | HookEngine 替换 2 个文件的 CydiaSubstrate | ~3-5KB | ⬜ (需真机验证) |
| **全部完成后** | | **~4040行减少, ~390K** | |