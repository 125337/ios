# WeChatPlugin UI 代码体积优化执行步骤

> 基于 `WeChatPlugin_UI体积优化方案.md`，含逐步骤风险评估和验证清单。

---

## 执行前准备

```bash
cd /www/wwwroot/ios && git status
```

---

## 步骤 A：删除 4 个死 `*Log` 函数

| 风险 | 🟢 零 |
|------|------|

**检查清单**（执行前）:
```bash
# 确认全仓无调用引用
grep -rn "configLog(" WeChatPlugin/ --include="*.m" --include="*.h"
grep -rn "\breLog(" WeChatPlugin/Settings/ --include="*.m" --include="*.h"
grep -rn "\breLog(" WeChatPlugin/Modules/SettingEntry/WP* --include="*.m"
# 预期：全部输出为空（仅函数定义，无调用）
```

### A.1 SettingCategoryController.m (582→566行)

删除 lines 10-26（`configLog` 函数块，含前后的空行）。

### A.2 WPOtherVC.m (104→88行)

删除 lines 6-22（`reLog` 函数块 + 空行）。

### A.3 WPAboutVC.m (110→94行)

删除 lines 5-21（`reLog` 函数块 + 空行）。

### A.4 WPBackupVC.m (133→117行)

删除 lines 6-22（`reLog` 函数块 + 空行）。

**验证清单**（执行后）:
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "UI-A: 删除 4 个死 *Log 函数" && git push origin HEAD
```

**预计减少**: 64 行 | **无功能影响**

---

## 步骤 B：合并 SettingEntryHook 的 4 个 open*Helper 导航

| 风险 | 🟢 低 |
|------|------|

**检查清单**（执行前）:
```bash
# 确认 4 个方法的 Helper 类名
grep -n "objc_getClass.*Helper" WeChatPlugin/Modules/SettingEntry/SettingEntryHook.m
# 预期：WPUIVCHelper, WPOtherVCHelper, WPBackupVCHelper, WPAboutVCHelper
```

**操作**: 编辑 `SettingEntryHook.m` (323行)

1. 在 `currentVCFrom:` 之前添加公共方法：

```objc
- (void)p_pushHelperVC:(NSString *)helperClassName from:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] %@: currentVC nil", helperClassName); return; }
    Class helperClass = objc_getClass([helperClassName UTF8String]);
    if (!helperClass) { WPLog(@"Setting", @"[Nav] %@ not found", helperClassName); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed %@", helperClassName);
    } else {
        WPLog(@"Setting", @"[Nav] %@ makeVC returned nil", helperClassName);
    }
}
```

2. 替换 4 个方法为一行转发：

```objc
- (void)openUI:(id)sender    { [self p_pushHelperVC:@"WPUIVCHelper"    from:sender]; }
- (void)openOther:(id)sender { [self p_pushHelperVC:@"WPOtherVCHelper"  from:sender]; }
- (void)openBackup:(id)sender { [self p_pushHelperVC:@"WPBackupVCHelper" from:sender]; }
- (void)openAbout:(id)sender { [self p_pushHelperVC:@"WPAboutVCHelper"  from:sender]; }
```

**验证清单**（执行后）:
- [ ] 编译通过
- [ ] 点击"界面定制"→ 跳转到 WPUIVC
- [ ] 点击"其他功能"→ 跳转到 WPOtherVC
- [ ] 点击"备份"→ 跳转到 WPBackupVC
- [ ] 点击"关于"→ 跳转到 WPAboutVC

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "UI-B: 合并 SettingEntryHook open*Helper 导航" && git push origin HEAD
```

**预计减少**: ~35 行 | **失败模式**: 类名拼错 → 不跳转（不 crash）

---

## 步骤 C：删除 WPUIVC.m 的 13 个 noop 占位

| 风险 | 🟢 低 |
|------|------|

**检查清单**（执行前）:
确认 `noop:` selector 不会被 `respondsToSelector:` 命中，不会触发任何行为。

**操作**: 编辑 `WPUIVC.m` (104行)

将 `items` 数组从 14 项改为 1 项，同时调整后续的 card frame 计算：

```objc
// 替换 lines 26-53（items 数组 + for 循环 + card frame + y 更新）
NSArray *items = @[
    @[@"界面净化", @"openUIPurify:"],
];
id handler = [WeChatPluginSwitchHandler sharedInstance];
CGFloat cy = 0;
for (NSUInteger i = 0; i < items.count; i++) {
    WPAddNavRow(card, cy, w, items[i][0], items[i][1], handler);
    cy += kRowH;
}
CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;
[sv addSubview:card];
y += cy + 40;
```

**验证清单**（执行后）:
- [ ] 编译通过
- [ ] 进入"界面定制"页面 → 只显示"界面净化"一项
- [ ] 点击"界面净化"→ 正常跳转到 WPUIPurifyVC

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "UI-C: 删除 WPUIVC 13 个 noop 占位" && git push origin HEAD
```

**预计减少**: ~25 行 | **无功能影响**

---

## 步骤 D：UIPurifyHook — SysCell/PatCell 5连Hook 提取宏

| 风险 | 🟢 低 |
|------|------|

> 宏是纯文本替换，展开后的代码与原代码逐字符相同。编译产物 bit-for-bit 不变。

**检查清单**（执行前）:
确认 IMP 函数和 orig 指针的命名约定一致：

| pfx | hook 函数 | orig 指针 |
|-----|-----------|-----------|
| Sys | `hook_SysCell_initWithViewModel` | `_orig_SysCell_initWithViewModel` |
| Sys | `hook_SysCell_layoutInternal` | `_orig_SysCell_layoutInternal` |
| Sys | `hook_SysCell_canBeReused` | `_orig_SysCell_canBeReused` |
| Sys | `hook_SysCell_shouldLayoutIfNeeded` | `_orig_SysCell_shouldLayoutIfNeeded` |
| Sys | `hook_SysVM_measure` | `_orig_SysVM_measure` |
| Pat | `hook_PatCell_initWithViewModel` | `_orig_PatCell_initWithViewModel` |
| Pat | `hook_PatCell_layoutInternal` | `_orig_PatCell_layoutInternal` |
| Pat | `hook_PatCell_canBeReused` | `_orig_PatCell_canBeReused` |
| Pat | `hook_PatCell_shouldLayoutIfNeeded` | `_orig_PatCell_shouldLayoutIfNeeded` |
| Pat | `hook_PatVM_measure` | `_orig_PatVM_measure` |

**操作**: 编辑 `UIPurifyHook.m` (388行)

1. 在 `purifyReadConfig` 函数下方添加宏：

```objc
#define PURIFY_INSTALL_5HOOK(pfx, clsStr, vmStr) do { \
    Class cls = objc_getClass(clsStr); \
    if (cls) { \
        MSHookMessageEx(cls, sel_registerName("initWithViewModel:"), \
            (IMP)hook_##pfx##Cell_initWithViewModel, &_orig_##pfx##Cell_initWithViewModel); \
        MSHookMessageEx(cls, sel_registerName("layoutInternal"), \
            (IMP)hook_##pfx##Cell_layoutInternal, &_orig_##pfx##Cell_layoutInternal); \
        purifySafeHook(cls, sel_registerName("canBeReused"), \
            (IMP)hook_##pfx##Cell_canBeReused, &_orig_##pfx##Cell_canBeReused); \
        purifySafeHook(cls, sel_registerName("shouldLayoutIfNeeded"), \
            (IMP)hook_##pfx##Cell_shouldLayoutIfNeeded, &_orig_##pfx##Cell_shouldLayoutIfNeeded); \
        WPLog(@"UIPurify", @"[Hook] ✓ %s (5 hooks)", clsStr); \
    } else { \
        WPLog(@"UIPurify", @"[Hook] - %s not found", clsStr); \
    } \
    Class vmCls = objc_getClass(vmStr); \
    if (vmCls) { \
        purifySafeHook(vmCls, sel_registerName("measure:"), \
            (IMP)hook_##pfx##VM_measure, &_orig_##pfx##VM_measure); \
        WPLog(@"UIPurify", @"[Hook] ✓ %s.measure: (占位归零)", vmStr); \
    } \
} while(0)
```

2. 替换 `+install` 中的两组代码：

```objc
// 替换 lines 292-314（隐藏撤回消息整块）：
PURIFY_INSTALL_5HOOK(Sys, "SystemMessageCellView", "SystemMessageViewModel");

// 替换 lines 318-340（隐藏拍一拍整块）：
PURIFY_INSTALL_5HOOK(Pat, "AppPatMessageCellView", "AppPatMessageViewModel");
```

**验证清单**（执行后）:
- [ ] 编译通过
- [ ] 真机测试：打开"隐藏撤回消息提示"开关 → 撤回消息不显示提示 ✅
- [ ] 真机测试：打开"隐藏拍一拍提示"开关 → 拍一拍不显示提示 ✅

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "UI-D: UIPurifyHook 5连Hook 宏化" && git push origin HEAD
```

**预计减少**: ~30 行 | **失败模式**: 命名不一致 → 编译报错（不会静默）

---

## 步骤 E：提取 Settings VC 公共 buildUI 尾部

| 风险 | 🟡 中低 |
|------|------|

> ⚠️ 本步骤方案已调整。经过代码逐行对比，4 个 VC 的 `buildUI` 开头差异较大（RedEnvelop 多了 `masterSwitchKeys` 清理），不适合统一提取开头。只提取尾部相同的 2 行。

**代码对比验证** — 4 个 VC 的 buildUI 尾部完全相同：

```objc
// SettingRevokeController line 55-56:
self.contentView.frame = CGRectMake(0, 0, w, y + 40);
self.scrollView.contentSize = CGSizeMake(w, y + 40);

// SettingMessageTimeController line 126-127:
self.contentView.frame = CGRectMake(0, 0, w, y + 40);
self.scrollView.contentSize = CGSizeMake(w, y + 40);

// SettingRedEnvelopController（末尾）:
self.contentView.frame = CGRectMake(0, 0, w, y + 40);
self.scrollView.contentSize = CGSizeMake(w, y + 40);

// SettingGeneralFunctionController（末尾）:
self.contentView.frame = CGRectMake(0, 0, w, y + 40);
self.scrollView.contentSize = CGSizeMake(w, y + 40);
```

**操作**:

### E.1 在 SettingController.m 父类中添加方法：

```objc
- (void)finishBuildUI:(CGFloat)contentHeight width:(CGFloat)w {
    self.contentView.frame = CGRectMake(0, 0, w, contentHeight + 40);
    self.scrollView.contentSize = CGSizeMake(w, contentHeight + 40);
}
```

### E.2 替换 4 个子 VC：

在每个 `buildUI` 方法末尾，将两行替换为：

```objc
// 替换前：
self.contentView.frame = CGRectMake(0, 0, w, y + 40);
self.scrollView.contentSize = CGSizeMake(w, y + 40);

// 替换后：
[self finishBuildUI:y width:w];
```

> 注意：SettingRedEnvelopController 的 buildUI 较长（~130行），需确认末尾确实是这两行。`SettingRedEnvelopController` 使用了 `finishGroup:atY:height:` 辅助方法但 buildUI 尾部仍是显式的 frame 设置。

**验证清单**（执行后）:
- [ ] 编译通过
- [ ] 进入红包设置 → 切换开关 → rebuild 正常，scrollView 可滚动到最底部
- [ ] 进入通用功能 → 切换开关 → rebuild 正常
- [ ] 进入消息时间设置 → 切换开关 → rebuild 正常
- [ ] 进入防撤回设置 → 切换开关 → rebuild 正常
- [ ] 所有页面 scrollView.contentSize 正确（不会出现空白截断或过长）

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "UI-E: 提取 buildUI 尾部到父类" && git push origin HEAD
```

**预计减少**: ~20 行 | **失败模式**: `masterSwitchKeys` 未清导致展开态错乱（但本次不改清理段，不受影响）

---

## 步骤 F：合并 FormatEditorVCs → FormatEditorBaseVC

| 风险 | 🔴 中高 |
|------|--------|

> ⚠️ 改动最大，需两个编辑功能均通过真机测试。

**检查清单**（执行前）:
```bash
# 对比两个文件的结构差异
diff <(grep -n "^-\|^+\|@property\|@interface" WeChatPlugin/Modules/MessageTime/MessageTimeFormatEditorVC.m) \
     <(grep -n "^-\|^+\|@property\|@interface" WeChatPlugin/Modules/Revoke/RevokeFormatEditorVC.m)
```

### F.1 创建基类

新建 `WeChatPlugin/Modules/FormatEditorBaseVC.h`:

```objc
#import <UIKit/UIKit.h>

@interface FormatEditorBaseVC : UIViewController <UITextViewDelegate>

// === 子类必须重写（6 个方法） ===
- (NSString *)viewTitle;
- (NSArray<NSString *> *)tokenNames;
- (NSArray<NSString *> *)tokenDescs;
- (NSString *)defaultTemplate;
- (void)saveFormat:(NSString *)format;
- (NSString *)previewForFormat:(NSString *)format;

// === 可选重写 ===
- (CGFloat)buildExtraSectionAtY:(CGFloat)y width:(CGFloat)w; // 默认返回 y

@end
```

新建 `WeChatPlugin/Modules/FormatEditorBaseVC.m`（约 270 行），从两个原文件中提取完全相同的方法：
- `viewDidLoad` — 调用 `[self viewTitle]`、`[self tokenNames]`、`[self tokenDescs]`、`[self defaultTemplate]`
- `setupNavBar`、`setupScrollView`
- `buildHelpTableAtY:width:` — 调用 `[self tokenNames]` / `[self tokenDescs]`
- `buildEditorSectionAtY:width:`、`buildPreviewSectionAtY:width:`
- `closeAction`、`restoreAction`、`registerKeyboardNotifications`、`kbShow:`、`kbHide:`、`textViewDidChange:`、`dealloc`
- `saveAction` — 调用 `[self saveFormat:editorView.text]`
- `updatePreview` — 调用 `[self previewForFormat:editorView.text]`

### F.2 简化 MessageTimeFormatEditorVC.m（~40行）

```objc
@implementation MessageTimeFormatEditorVC
- (NSString *)viewTitle { return @"自定义时间格式"; }
- (NSArray *)tokenNames { return @[@"{YYYY}", @"{YY}", @"{MM}", @"{dd}", @"{HH}", @"{hh}", @"{mm}", @"{ss}", @"{EE}", @"{EEEE}", @"{a}"]; }
- (NSArray *)tokenDescs { return @[@"年份(2025)", @"年份(25)", @"月份(01-12)", @"日期(01-31)", @"小时-24h", @"小时-12h", @"分钟", @"秒数", @"星期(周一)", @"星期(星期一)", @"上午/下午"]; }
- (NSString *)defaultTemplate { return @"{YYYY}-{MM}-{dd} {HH}:{mm}:{ss}"; }
- (void)saveFormat:(NSString *)fmt { [PluginConfig shared].messageTimeFormat = fmt; [[PluginConfig shared] save]; }
- (NSString *)previewForFormat:(NSString *)fmt { return [MessageTimeFormatParser previewForFormat:fmt]; }
- (CGFloat)buildExtraSectionAtY:(CGFloat)y width:(CGFloat)w { return [self buildPseudoReadSectionAtY:y width:w]; }
@end
```

> `buildPseudoReadSectionAtY:width:` 实现保留在 MessageTimeFormatEditorVC.m 中，不迁移到基类。

### F.3 简化 RevokeFormatEditorVC.m（~35行）

```objc
@implementation RevokeFormatEditorVC
- (NSString *)viewTitle { return @"撤回消息显示"; }
- (NSArray *)tokenNames { return @[@"{用户名}", @"{内容}", @"{yyyy}", @"{MM}", @"{dd}", @"{HH}", @"{mm}", @"{ss}"]; }
- (NSArray *)tokenDescs { return @[@"发送者名称", @"消息内容/类型", @"年份(2026)", @"月份", @"日期", @"小时", @"分钟", @"秒数"]; }
- (NSString *)defaultTemplate { return kDefaultRevokeEditorTemplate; }
- (void)saveFormat:(NSString *)fmt { [PluginConfig shared].detailedRevokeFormatMsg = fmt; [[PluginConfig shared] save]; }
- (NSString *)previewForFormat:(NSString *)fmt { return fmt; }
@end
```

### F.4 更新 build-standalone.yml

在编译列表中添加 `FormatEditorBaseVC.m`（放在两个 VC 之前）：

```yaml
WeChatPlugin/Modules/FormatEditorBaseVC.m \
```

**验证清单**（⚠️ 必须逐项验证）:

**消息时间格式编辑器**:
- [ ] 打开 → 标题显示"自定义时间格式"
- [ ] Token 帮助表格正确显示 11 行
- [ ] 伪已读自定义段落显示（`buildPseudoReadSectionAtY:`）
- [ ] 编辑区显示当前格式
- [ ] 预览区实时更新
- [ ] 键盘弹出 → 编辑区不被遮挡
- [ ] 键盘收起 → 布局恢复
- [ ] 点击"恢复"→ 恢复为默认模板
- [ ] 点击"保存"→ 配置持久化，返回后 rebuild 生效
- [ ] 点击"关闭"→ 不保存，返回

**撤回消息格式编辑器**:
- [ ] 打开 → 标题显示"撤回消息显示"
- [ ] Token 帮助表格正确显示 8 行
- [ ] 没有伪已读段落（Revoke 不需要）
- [ ] 编辑区显示当前格式
- [ ] 预览区实时更新
- [ ] 键盘弹出 → 编辑区不被遮挡
- [ ] 键盘收起 → 布局恢复
- [ ] 点击"恢复"→ 恢复为默认模板
- [ ] 点击"保存"→ 配置持久化，返回后 rebuild 生效
- [ ] 点击"关闭"→ 不保存，返回

**真机验证**（必须）:
- [ ] 真机：两个编辑器的键盘行为正常
- [ ] 真机：编辑后的格式在实际微信中生效

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "UI-F: 合并 FormatEditorVCs → FormatEditorBaseVC" && git push origin HEAD
```

**预计减少**: ~300 行 | **失败模式**: 见下表

| 失败场景 | 检测方法 | 回退 |
|----------|----------|------|
| 键盘遮挡编辑区 | 打开编辑器，点编辑区 → 键盘弹出 | git revert |
| Revoke 显示伪已读段 | 打开撤回编辑器 → 看到伪已读内容 | `buildExtraSectionAtY:` 默认返回 y |
| 保存后格式不生效 | 保存 → 退出 → 检查消息时间/撤回显示 | 检查 saveFormat: 实现 |
| 关闭按钮不工作 | 点击关闭 → 页面不消失 | 检查 closeAction 是否在基类 |

---

## 执行进度追踪表

| 步骤 | 描述 | 风险 | 减少 | 真机 | 状态 |
|------|------|------|------|------|------|
| A | 删除 4 个死 `*Log` 函数 | 🟢 | ~64行 | — | ✅ 已完成 |
| B | 合并 open*Helper 导航 | 🟢 | ~35行 | — | ✅ 已完成 |
| C | 删除 WPUIVC noop 占位 | 🟢 | ~25行 | — | ✅ 已完成 |
| D | UIPurifyHook 5连Hook 宏化 | 🟢 | ~30行 | 推荐 | ✅ 已完成 |
| E | 提取 buildUI 尾部 | 🟡 | ~20行 | 推荐 | ⬜ |
| F | 合并 FormatEditorVCs | 🔴 | ~300行 | **必须** | ⬜ |
| **合计** | | | **~474行** | | **ABCD: ~154 行已完成** |

---

## 快速回退

```bash
git log --oneline -3
git reset --hard HEAD~1
```