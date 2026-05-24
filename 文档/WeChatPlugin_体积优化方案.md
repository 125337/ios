# WeChatPlugin (MioHelper) 体积优化方案

> **编译方式**: GitHub Actions (`build-standalone.yml`, 35个 .m 文件)，编译标志不动。

---

## 一、当前状态

| 指标 | 值 |
|------|----|
| .m 源文件 (全仓/编译) | 35 个（全部编译，无死文件） |
| 源码总行数 | ~8,055 行 |
| build-standalone.yml | `-Oz` ✅ / `-Wl,-S` ✅ / `-Wl,-x` ✅ |

---

## 二、已完成

| # | 项 | 效果 |
|---|----|------|
| 1 | 删除 `WPAlert.m/.h` | -305行, RedEnvelopHook 改用 WeChatAlertHelper ✅ |
| 2 | 删除 `WeChatRedEnvelopOperation.m/.h` (死代码) | -120行 |
| 3 | 删除 `SettingAssistFunctionController` + `SettingUIBeautifyController` | -48行 |
| 4 | 统一日志模块 (LogManager.h/.m) | ~250+ 处调用迁移，19 文件 ✅ |
| 5 | 统一 ServiceHelper.h | 4 文件 getService 去重 ✅ |
| 6 | FriendDetection 模块完全移除 | -1011行，2 文件 + 1 编译项 ✅ |
| 7 | ClearUnreadHook 精简 | 404→232行，删除多层 fallback ✅ |
| 8 | WPBorderLayer 精简 | 603→91行，删除 4 个未使用类 ✅ |
| 9 | WPCommonUI.h → .m | 121→30行 .h，消除 4 份编译副本 ✅ |
| 10 | 合并 Settings 碎片控制器 | -2 编译文件（AboutController/LayoutFunction） ✅ |
| 11 | 删除 WeChatRedEnvelopParam.m 空实现 | -1 编译项 ✅ |
| 12 | 删除 SettingSessionActionController 死代码 | -2 文件, 124行 ✅ |
| 13 | 清理 WPSessionBox 未编译文件 | -4 文件, ~1400行 ✅ |

---

## 三、待优化问题（2项）

### 问题1：PluginConfig.m — 配置加载/保存高度重复（424行）

`loadDefaults` + `save` = ~250行纯重复模式，每个属性 4-6行。

**方案**: 用宏批量处理

**预计减少**: 150+行

---

### 问题2：MessageTimeHook 独用 MSHookMessageEx（872行）

其余模块全用 HookEngine。`MessageTimeHook.m` line 850 调用 `MSHookMessageEx`，导致需要编译 `libs/CydiaSubstrate.m`。

**方案**: 迁移到 HookEngine，删 `libs/CydiaSubstrate.m` 编译（需真机验证）

**预计减少**: ~3-5KB dylib

---

## 四、优化总表

| # | 优化项 | 减少 | 文件变化 | 状态 |
|---|--------|------|---------|------|
| 1 | 统一日志模块 | **280行** + ~8KB | +2文件 | ✅ |
| 2 | 统一 ServiceHelper | **50行** | +1文件 | ✅ |
| 3 | FriendDetection 完整移除 | **~1011行** | -2文件, -1编译项 | ✅ |
| 4 | ClearUnreadHook 精简 | **~170行** | 改1文件 | ✅ |
| 5 | WPBorderLayer 精简 | **~510行** | 改1文件(.m+.h) | ✅ |
| 6 | WPCommonUI.h → .m | 消除 4 份副本 | +1文件, 改1文件 | ✅ |
| 7 | 合并 Settings 碎片 | **—** | -2编译项 | ✅ |
| 8 | 删除 RedEnvelopParam.m | 1编译项 | -1文件 | ✅ |
| 9 | 删除 SettingSessionActionController | **124行** | -2文件 | ✅ |
| 10 | 清理 WPSessionBox | **~1400行** | -4文件 | ✅ |
| 11 | PluginConfig 宏化 | **~150行** | 改1文件 | ⬜ |
| 12 | 统一 HookEngine (需真机) | ~3-5KB | -1编译项 | ⬜ |
| **已完成合计** | | **~3545行源码** | **-13文件, -5编译项, +4文件** | |

---

## 五、分阶段目标

| 阶段 | 内容 | 预计 dylib | 状态 |
|------|------|-----------|------|
| 当前 | 已完成 13 项优化 | ~400K | ✅ |
| +消除重复 | 宏化 PluginConfig | -150行 | ⬜ |
| +统一引擎 | HookEngine 替换 CydiaSubstrate | ~3-5KB | ⬜ (需真机验证) |
| **全部完成后** | 全仓清洁 | **~3700行减少, ~375K** | |