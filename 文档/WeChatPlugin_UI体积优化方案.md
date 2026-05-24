# WeChatPlugin UI 代码体积优化方案

> 当前 35 个编译文件中，UI/Settings 代码约 **2,200 行，占 27%**。存在大量模板化重复代码。

---

## 一、当前 UI 代码分布

| 分类 | 文件 | 行数 | UI占比 | 主要问题 |
|------|------|------|--------|----------|
| **格式编辑器** | MessageTimeFormatEditorVC.m | 368 | 60% | 🔴 与 Revoke 98% 结构相同 |
| | RevokeFormatEditorVC.m | 261 | 50% | 🔴 与 MessageTime 98% 结构相同 |
| **Setting VCs** | SettingRedEnvelopController.m | 184 | 70% | 🟡 4 个 VC 的 buildUI 入口重复 |
| | SettingGeneralFunctionController.m | 130 | 70% | 🟡 同上 |
| | SettingMessageTimeController.m | 129 | 70% | 🟡 同上 |
| | SettingRevokeController.m | 86 | 70% | 🟡 同上 |
| | SettingController.m | 187 | 50% | 🟡 导航函数与 SettingCategoryController 部分重叠 |
| **WP*VC 子页** | WPOtherVC.m | 104 | 80% | 🟡 含 16 行 reLog 死代码 |
| | WPAboutVC.m | 110 | 80% | 🟡 含 16 行 reLog 死代码 |
| | WPBackupVC.m | 133 | 80% | 🟡 含 16 行 reLog 死代码 |
| **主入口+分类** | SettingCategoryController.m | 582 | 60% | 🟡 含 16 行 configLog 死代码 |
| | SettingEntryHook.m | 323 | 30% | 🟡 5 个 open* 函数相同模板 |
| **工具+辅助** | WPCommonUI.m | 134 | 100% | ✅ 已是最优 |
| | WPBorderLayer.m | 91 | 80% | ✅ 已精简 |
| | WeChatTweakGroupSelectsController.m | 217 | 50% | ✅ 重度依赖微信内部类 |
| | TintHook.m | 101 | 30% | ✅ 独立功能 |
| **合计** | **16 个文件** | **~3,040** | | |

---

## 二、优化方案（5 项，按收益排序）

### 优化 1：合并两个 FormatEditorVC → FormatEditorBaseVC 🔴 最大收益

**当前**: `MessageTimeFormatEditorVC.m` (368行) + `RevokeFormatEditorVC.m` (261行) = **629 行**

**重复部分**（完全相同）:
- `viewDidLoad` — 结构完全一致
- `setupNavBar` — 导航栏按钮完全一致
- `setupScrollView` — ScrollView 创建完全一致
- `buildHelpTableAtY:` — 表格构建逻辑完全一致（只 token 列表不同）
- `buildEditorSectionAtY:` — 编辑器 UI 完全一致
- `buildPreviewSectionAtY:` — 预览区 UI 完全一致
- `closeAction` / `restoreAction` / `registerKeyboardNotifications` / `kbShow:` / `kbHide:` / `textViewDidChange:` — 全相同
- `dealloc` — 完全一致

**差异部分**（仅此不同）:
- 标题: `@"自定义时间格式"` vs `@"撤回消息显示"`
- token 列表: `_tokenNames()` / `_tokenDescs()` 内容不同
- `saveAction` 保存逻辑: `config.messageTimeFormat` vs `config.detailedRevokeFormatMsg`
- `updatePreview`: 时间格式化 vs 撤回消息格式化

**方案**: 创建 `FormatEditorBaseVC.m` 提取所有公共代码；两个子类只提供：
- `- (NSString *)viewTitle` — 返回标题
- `- (NSArray<NSString *> *)tokenNames` / `tokenDescs` — 返回 token 列表
- `- (NSString *)defaultTemplate` — 返回默认模板
- `- (void)saveFormat:(NSString *)format` — 保存逻辑
- `- (NSString *)previewForFormat:(NSString *)format` — 预览逻辑

<details>
<summary>基类骨架（点击展开）</summary>

```objc
// FormatEditorBaseVC.h
@interface FormatEditorBaseVC : UIViewController <UITextViewDelegate>
// 子类必须重写（5 个方法）
- (NSString *)viewTitle;
- (NSArray<NSString *> *)tokenNames;
- (NSArray<NSString *> *)tokenDescs;
- (NSString *)defaultTemplate;
- (void)saveFormat:(NSString *)format;
- (NSString *)previewForFormat:(NSString *)format;
@end

// 子类示例（MessageTimeFormatEditorVC，~40行）
@implementation MessageTimeFormatEditorVC
- (NSString *)viewTitle { return @"自定义时间格式"; }
- (NSArray *)tokenNames { return @[@"{YYYY}", ...]; }
- (NSArray *)tokenDescs { return @[@"年份(2025)", ...]; }
- (NSString *)defaultTemplate { return @"{YYYY}-{MM}-{dd} {HH}:{mm}:{ss}"; }
- (void)saveFormat:(NSString *)fmt { [PluginConfig shared].messageTimeFormat = fmt; [[PluginConfig shared] save]; }
- (NSString *)previewForFormat:(NSString *)fmt { return [MessageTimeFormatParser previewForFormat:fmt]; }
@end
```

</details>

**文件变化**: +1 文件 (Base), 改 2 文件 (两个子类变轻量), -4编译项→-3

**预计减少**: **~300 行源码**

---

### 优化 2：删除 4 个死 `*Log` 函数（净删除）

**当前**: 4 个文件中各有一个已无调用的日志函数，已被 `WPLog()` 替代：

| 文件 | 死函数 | 行数 |
|------|--------|------|
| `SettingCategoryController.m` | `configLog()` (lines 10-26) | 16 行 |
| `WPOtherVC.m` | `reLog()` (lines 6-22) | 16 行 |
| `WPAboutVC.m` | `reLog()` (lines 5-21) | 16 行 |
| `WPBackupVC.m` | `reLog()` (lines 6-22) | 16 行 |

**验证**: grep 确认无调用引用
```bash
grep -rn "configLog(" WeChatPlugin/SettingCategoryController.m  # 仅定义，无调用
grep -rn "reLog(" WeChatPlugin/Modules/SettingEntry/*.m          # 仅定义，无调用
```

**方案**: 直接删除

**预计减少**: **64 行**

---

### 优化 3：合并 3 个 WPVCHelper `makeVC` 相同模板

**当前**: `WPOtherVC.m`, `WPAboutVC.m`, `WPBackupVC.m` 各有 `*VCHelper` 类，`makeVC` 方法完全相同：

```objc
// 三个文件中的 makeVC 都是这个模板（仅类名和 method 数量不同）
+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPXXXVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPXXXVC", 0);
        if (subClass) {
            class_addMethod(subClass, @selector(viewDidLoad), (IMP)WPXXXViewDidLoad, "v@:");
            // ... 可能还有 onResetTapped
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPXXXVC class created");
        }
    }
    return subClass ? [[subClass alloc] init] : nil;
}
```

**方案**: 提取一个公共函数：

```objc
// WPCommonUI.m 追加
UIViewController *WPMakeSimpleVC(NSString *className, void *func_imp, const char *types) {
    Class subClass = objc_getClass([className UTF8String]);
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), [className UTF8String], 0);
        if (subClass) {
            class_addMethod(subClass, @selector(viewDidLoad), func_imp, types);
            objc_registerClassPair(subClass);
        }
    }
    return subClass ? [[subClass alloc] init] : nil;
}
```

三个 `makeVC` 简化为一行：
```objc
+ (UIViewController *)makeVC {
    return WPMakeSimpleVC(@"WPAboutVC", (void *)WPAboutViewDidLoad, "v@:");
}
```

**文件变化**: 改 1 文件 (WPCommonUI.m), 改 3 文件 (WP*VC), 净减 ~60 行

**预计减少**: **~60 行**

---

### 优化 4：提取 Settings VC 公共 buildUI 入口

**当前**: `SettingRedEnvelopController`、`SettingGeneralFunctionController`、`SettingMessageTimeController`、`SettingRevokeController` 四个 VC 的 `buildUI` 方法开头都有同样的模板：

```objc
// 4 个 VC 的 buildUI 开头完全相同
- (void)buildUI {
    for (UIView *v in self.contentView.subviews) { [v removeFromSuperview]; }
    [self.inputFields removeAllObjects];
    CGFloat w = self.view.bounds.size.width;
    // ... 各自不同的 UI 构建代码 ...
    CGRect cf = self.contentView.frame;
    cf.size.height = y + 40;
    self.contentView.frame = cf;
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}
```

如果把上面三行和下面三行提取为父类方法，每个 VC 省 ~8 行：

```objc
// SettingController 中新增两个方法
- (CGFloat)beginBuildUI {
    for (UIView *v in self.contentView.subviews) { [v removeFromSuperview]; }
    [self.inputFields removeAllObjects];
    return self.view.bounds.size.width;
}
- (void)endBuildUI:(CGFloat)y width:(CGFloat)w {
    CGRect cf = self.contentView.frame;
    cf.size.height = y + 40;
    self.contentView.frame = cf;
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}
```

子 VC 的 `buildUI` 变为：
```objc
- (void)buildUI {
    CGFloat w = [self beginBuildUI];
    CGFloat y = 8;
    // ... 构建 UI ...
    [self endBuildUI:y width:w];
}
```

**文件变化**: 改 1 文件 (SettingController 新增方法), 改 4 文件 (子 VC 简化 buildUI)

**预计减少**: **~40 行**

---

### 优化 5：SettingEntryHook 合并 3 个 open* Helper 导航函数

**当前**: `openOther:`、`openBackup:`、`openAbout:` 三个方法仅 helperClass 类名不同，其余完全相同：

```objc
// 这三个方法的唯一区别是 helper 类名和 WPLog 标签
- (void)openOther:(id)sender  { /* 仅 helper = "WPOtherVCHelper" */ }
- (void)openBackup:(id)sender { /* 仅 helper = "WPBackupVCHelper" */ }
- (void)openAbout:(id)sender  { /* 仅 helper = "WPAboutVCHelper" */ }
```

**方案**: 提取通用方法：

```objc
- (void)p_openHelperVC:(NSString *)helperClassName tag:(NSString *)tag from:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] %@: currentVC nil", tag); return; }
    Class helperClass = objc_getClass([helperClassName UTF8String]);
    if (!helperClass) { WPLog(@"Setting", @"[Nav] %@ not found", helperClassName); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed %@", tag);
    } else {
        WPLog(@"Setting", @"[Nav] %@ makeVC returned nil", helperClassName);
    }
}

- (void)openOther:(id)sender  { [self p_openHelperVC:@"WPOtherVCHelper"  tag:@"OTHER" from:sender]; }
- (void)openBackup:(id)sender { [self p_openHelperVC:@"WPBackupVCHelper" tag:@"BACKUP" from:sender]; }
- (void)openAbout:(id)sender  { [self p_openHelperVC:@"WPAboutVCHelper"  tag:@"ABOUT" from:sender]; }
```

**文件变化**: 改 1 文件 (SettingEntryHook.m)

**预计减少**: **~35 行**

---

## 三、优化总表

| # | 优化项 | 涉及文件 | 减少行数 | 难度 |
|---|--------|----------|----------|------|
| 1 | 合并 FormatEditorVCs → BaseVC | 3 文件 | **~300 行** | 中 |
| 2 | 删除 4 个死 `*Log` 函数 | 4 文件 | **~64 行** | 低 |
| 3 | 合并 WPVCHelper makeVC | 4 文件 | **~60 行** | 低 |
| 4 | 提取 buildUI 公共模板 | 5 文件 | **~40 行** | 低 |
| 5 | 合并 open* Helper 导航 | 1 文件 | **~35 行** | 低 |
| **合计** | | **9 个文件（去重后）** | **~499 行** | |

---

## 四、剩余 UI 代码分布（优化后）

| 分类 | 文件 | 优化前 | 优化后 |
|------|------|--------|--------|
| 格式编辑器 | FormatEditorBaseVC（新） | — | ~270 |
| | MessageTimeFormatEditorVC | 368 | ~40 |
| | RevokeFormatEditorVC | 261 | ~40 |
| Setting VCs | SettingCategoryController | 582 | ~566 |
| | SettingController | 187 | ~200 |
| | SettingRedEnvelopController | 184 | ~176 |
| | SettingGeneralFunctionController | 130 | ~122 |
| | SettingMessageTimeController | 129 | ~121 |
| | SettingRevokeController | 86 | ~78 |
| WP*VC 子页 | WPOtherVC | 104 | ~62 |
| | WPAboutVC | 110 | ~68 |
| | WPBackupVC | 133 | ~91 |
| 入口 | SettingEntryHook | 323 | ~288 |
| 工具 | WPCommonUI | 134 | ~150 |
| | WPBorderLayer | 91 | 91 |
| | WeChatTweakGroupSelectsController | 217 | 217 |
| | TintHook | 101 | 101 |
| **合计** | **16→15 文件** | **~3,040** | **~2,680** |

> UI 占比从 27% 降至 **~24%**，源码总行数从 ~8,055 → **~7,556**。

---

## 五、执行顺序建议

| 顺序 | 优化项 | 理由 |
|------|--------|------|
| 先做 | 优化 2：删除死日志函数 | 零风险，纯删除 |
| 次做 | 优化 5：合并 open* 导航 | 单文件改动 |
| 再做 | 优化 4：提取 buildUI 模板 | 父类加方法，子类改调用 |
| 然后 | 优化 3：合并 WPVCHelper | 改动 WPCommonUI + 3 文件 |
| 最后 | 优化 1：合并 FormatEditorVCs | 改动最大，需验证两个编辑功能 |