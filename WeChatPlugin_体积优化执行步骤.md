# WeChatPlugin 体积优化执行步骤

> 基于 `WeChatPlugin_体积优化方案.md`，本文件提供可逐条执行的详细步骤。
> UI 专项优化步骤详见 `文档/WeChatPlugin_UI体积优化执行步骤.md`

---

## 执行前准备

```bash
cd /www/wwwroot/ios && git status
```

---

## 阶段一：消除重复代码

### 步骤 1：统一日志模块 ✅ 已完成

**结果**: 已创建 `Core/LogManager.h/.m`，19 个文件 ~250+ 处 `reLog`/`fdLog`/`mtLog` 等调用已替换为 `WPLog(tag, fmt, ...)`。

**实际减少**: ~280 行 + ~8KB

---

### 步骤 2：统一 ServiceHelper ✅ 已完成

**结果**: 已创建 `Core/ServiceHelper.h`，`WXGetService(Class)` 被 3 个文件使用。

**实际减少**: ~50 行

---

### 步骤 3：PluginConfig 宏化

**目标**: `loadDefaults` 和 `save` 每个属性 4-6 行重复代码，用宏消除。

**操作**: 编辑 `WeChatPlugin/Config/PluginConfig.m` (437行)：

1. 在文件顶部添加宏定义：

```objc
#define PREFIX_KEY(prop) [kPluginPrefix stringByAppendingString:@#prop]

#define LOAD_BOOL(prop, defaultVal) \
    _##prop = [d boolForKey:PREFIX_KEY(prop)]; \
    if (![d objectForKey:PREFIX_KEY(prop)]) { \
        _##prop = (defaultVal); [d setBool:(defaultVal) forKey:PREFIX_KEY(prop)]; \
    }

#define LOAD_INT(prop, defaultVal) \
    _##prop = ([d integerForKey:PREFIX_KEY(prop)] >= 0) ? (unsigned int)[d integerForKey:PREFIX_KEY(prop)] : (defaultVal)

#define LOAD_ARRAY(prop) do { NSArray *_a = [d arrayForKey:PREFIX_KEY(prop)]; _##prop = _a ?: @[]; } while(0)
#define LOAD_STRING(prop) _##prop = [d stringForKey:PREFIX_KEY(prop)] ?: @""

#define SAVE_BOOL(prop) [d setBool:_##prop forKey:PREFIX_KEY(prop)]
#define SAVE_INT(prop) [d setInteger:(NSInteger)_##prop forKey:PREFIX_KEY(prop)]
#define SAVE_ARRAY(prop) [d setObject:_##prop ?: @[] forKey:PREFIX_KEY(prop)]
#define SAVE_STRING(prop) if (_##prop) [d setObject:_##prop forKey:PREFIX_KEY(prop)]
```

2. 用宏替换 `loadDefaults` 中的 ~158 行和 `save` 中的 ~96 行。  
3. 同时简化 `autoSaveTextField:` 中的大量 else-if 链（lines 524-560）。

**预计减少**: ~150 行

---

## 阶段二：已完成的模块删除和精简 ✅

以下步骤全部完成，仅保留记录：

| 步骤 | 内容 | 提交 | 减少 |
|------|------|------|------|
| 4 | FriendDetection 完整移除 | `808a2ee` | -1011行, -4文件, -1编译项 |
| 5 | ClearUnreadHook 精简 (日志确认 MMNewSessionMgr) | — | -172行 |
| 6 | WPBorderLayer 精简 603→91行 | — | -510行 |
| 7 | WPCommonUI.h static → .m | — | 消除 4 份副本 |
| 8 | 合并 Settings 碎片 | — | -2 编译项 |
| 9 | 删除 WeChatRedEnvelopParam.m | — | -1 编译项 |
| 10 | 删除 SettingSessionActionController 死代码 | — | -2文件, 124行 |
| 11 | 清理 WPSessionBox 未编译文件 | — | -4文件, ~1400行 |

---

## 阶段三：UI 体积优化（详见 `文档/WeChatPlugin_UI体积优化执行步骤.md`）

| 步骤 | 内容 | 预计减少 |
|------|------|----------|
| UI-1 | 删除 4 个死 `*Log` 函数 | ~64行 |
| UI-2 | 删除 WPUIVC noop 占位 | ~25行 |
| UI-3 | 合并 open*Helper 导航 | ~35行 |
| UI-4 | 提取 buildUI 公共模板 | ~40行 |
| UI-5 | UIPurifyHook 5连Hook 宏化 | ~30行 |
| UI-6 | 合并 FormatEditorVCs → BaseVC | ~300行 |

---

## 阶段四：统一 Hook 引擎（需真机验证）

### 步骤 12：MessageTimeHook + UIPurifyHook 迁移到 HookEngine

**⚠️ 风险**: 两个文件均使用 `MSHookMessageEx`（CydiaSubstrate），需逐个迁移并真机验证。

**当前 MSHookMessageEx 使用量**:
- `MessageTimeHook.m`: 1 处 (line 850)
- `UIPurifyHook.m`: 12 处（含 `purifySafeHook` 内部 4 处 + `install` 直接调用 8 处）

**操作**:

1. **先迁移 MessageTimeHook**（改动小，风险低）：
   - 将 `MSHookMessageEx` 改为 `[HookEngine swizzleMethod:inClass:withIMP:]`
   - 真机测试消息时间显示功能

2. **再迁移 UIPurifyHook**（改动大，12 处调用）：
   - `purifySafeHook` 函数内部的 `MSHookMessageEx` → `[HookEngine swizzleMethod:]`
   - `+install` 中的 8 处直接 `MSHookMessageEx` → `[HookEngine swizzleMethod:]`
   - 真机测试界面净化各功能（分割线隐藏、撤回提示隐藏、拍一拍隐藏等）

3. 两份文件都验证通过后，从 `build-standalone.yml` 移除 `libs/CydiaSubstrate.m`（保留文件不删）。

**预计减少**: ~3-5KB

---

## 执行进度追踪表

| 步骤 | 描述 | 状态 | 减少量 |
|------|------|------|--------|
| 0 | 准备/确认状态 | ✅ | — |
| 1 | 统一日志模块 | ✅ | ~280行 + ~8KB |
| 2 | 统一 ServiceHelper | ✅ | ~50行 |
| 3 | PluginConfig 宏化 | ⬜ | ~150行 |
| 4-11 | 模块删除/精简 (8步) | ✅ | ~3065行 |
| 12 | 统一 HookEngine (MessageTime + UIPurify) | ⬜ | ~3-5KB |
| UI-1~6 | UI 体积优化 | ⬜ | ~494行 |
| **已完合计** | | | **~3395行源码** |
| **全部完成后** | | | **~4040行源码** |

---

## 快速回退

```bash
git log --oneline -5
git reset --hard HEAD~1
```