//
//  ThemeVC.m
//  MioPlugin
//

#import "ThemeVC.h"
#import "../../Modules/Theme/ThemeConfig.h"
#import "../../Modules/Theme/ThemeService.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/MioRestartHelper.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/message.h>
#import <objc/runtime.h>

// 主题美化设置页：
//   卡片1 主题美化：启用开关 + 导入主题包(zip) + 说明
//   卡片2 已导入主题：动态行（点行 → 菜单：应用 / 删除）
//   卡片3 维护：恢复默认主题 + 重启微信
@interface ThemeVC () <UIDocumentPickerDelegate>
@end

// 主题行动 key 前缀（buttonClicked 按 key 分流）
static NSString * const kThemeRowPrefix = @"theme::";

@implementation ThemeVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"主题美化";
    // 不在此处构建：viewWillAppear 统一 wpReloadUI（同 FontBeautifyVC 模式）
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpReloadUI]; // 导入/删除/应用后刷新列表
}

// ── 页面构建（SettingCategoryController 同款） ──
- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    ThemeConfig *cfg = [ThemeConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ── 卡片1 主题美化 ──
    y = [self addSectionHeader:@"主题美化" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSubSwitchRowInGroup:group
                                title:@"启用主题美化"
                                  key:@"enableTheme"
                                 isOn:cfg.enableTheme
                                   cy:cy
                                width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addButtonRowInGroup:group
                             title:@"导入主题包"
                              hint:[NSString stringWithFormat:@"当前主题: %@", [[ThemeService shared] currentThemeDisplayName]]
                               key:@"importTheme"
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addHintRowInGroup:group
                            text:@"支持微信主题包格式（zip）：图标 PNG + weui_color 颜色表 + 可选 CSS\n导入后自动应用，未刷新的部分重启微信生效"
                              cy:cy
                           width:w];
    y = [self finishGroup:group atY:y height:cy];

    // ── 卡片2 已导入主题（动态行） ──
    NSArray<NSString *> *names = [[ThemeService shared] importedThemeNames];
    y += 8;
    y = [self addSectionHeader:@"已导入主题" y:y width:w];
    UIView *tGroup = [self addTableGroupAtY:y width:w];
    CGFloat tcy = 0;
    if (names.count == 0) {
        tcy = [self addHintRowInGroup:tGroup
                                  text:@"暂无已导入主题，点击上方「导入主题包」添加"
                                    cy:tcy
                                 width:w];
    } else {
        for (NSUInteger i = 0; i < names.count; i++) {
            NSString *name = names[i];
            BOOL active = [cfg.activeThemeName isEqualToString:name];
            tcy = [self addButtonRowInGroup:tGroup
                                      title:name
                                       hint:active ? @"使用中" : nil
                                        key:[kThemeRowPrefix stringByAppendingString:name]
                                         cy:tcy
                                      width:w];
            if (i + 1 < names.count) {
                tcy = [self addSeparatorInGroup:tGroup cy:tcy width:w];
            }
        }
    }
    y = [self finishGroup:tGroup atY:y height:tcy];

    // ── 卡片3 维护 ──
    y += 8;
    UIView *mGroup = [self addTableGroupAtY:y width:w];
    CGFloat mcy = 0;
    mcy = [self addButtonRowInGroup:mGroup
                              title:@"恢复默认主题"
                               hint:nil
                                key:@"restoreDefault"
                                 cy:mcy
                              width:w];
    mcy = [self addSeparatorInGroup:mGroup cy:mcy width:w];
    mcy = [self addButtonRowInGroup:mGroup
                              title:@"重启微信"
                               hint:nil
                                key:@"restartWeChat"
                                 cy:mcy
                              width:w];
    y = [self finishGroup:mGroup atY:y height:mcy];

    [self addSectionFooter:@"主题包兼容微信助手（WXHelper）格式" y:y width:w];
}

// ── 按钮行回调（基类统一入口） ──
- (void)buttonClicked:(NSString *)key {
    WPLog(@"Theme", @"[BUTTON] key=%@", key);
    if ([key isEqualToString:@"importTheme"]) {
        [self presentThemePicker];
    } else if ([key isEqualToString:@"restoreDefault"]) {
        [MioAlertHelper showConfirmAlertWithTitle:@"恢复默认主题"
                                         message:@"将卸载当前主题并恢复微信原生外观"
                                    confirmTitle:@"恢复默认"
                                       onConfirm:^{
            BOOL ok = [[ThemeService shared] restoreDefaultTheme];
            WPLog(@"Theme", @"[BUTTON] restoreDefault → %@", ok ? @"OK" : @"FAIL");
            WPShowToast(ok ? @"已恢复默认主题" : @"恢复失败，见日志");
            if (ok) [self wpReloadUI];
        }];
    } else if ([key isEqualToString:@"restartWeChat"]) {
        [MioAlertHelper showConfirmAlertWithTitle:@"重启微信"
                                         message:@"将关闭并重新打开微信，确定继续吗？"
                                    confirmTitle:@"立即重启"
                                       onConfirm:^{
            WPLog(@"Theme", @"[BUTTON] restarting WeChat (elegant)");
            [MioRestartHelper elegantRestartFromVC:self];
        }];
    } else if ([key hasPrefix:kThemeRowPrefix]) {
        NSString *name = [key substringFromIndex:kThemeRowPrefix.length];
        [self showThemeRowMenu:name];
    }
}

// ── 主题行菜单：应用 / 删除 ──
- (void)showThemeRowMenu:(NSString *)name {
    BOOL active = [[ThemeConfig shared].activeThemeName isEqualToString:name];
    NSMutableArray *buttons = [NSMutableArray array];
    NSMutableArray *destructive = [NSMutableArray array];
    if (!active) [buttons addObject:@"应用此主题"];
    [buttons addObject:@"删除"];
    [destructive addObject:@(buttons.count - 1)];

    [MioAlertHelper showMenuAlert:name
                          buttons:buttons
                      destructive:destructive
                         onButton:^(NSInteger index) {
        NSString *tapped = buttons[index];
        if ([tapped isEqualToString:@"应用此主题"]) {
            BOOL ok = [[ThemeService shared] applyThemeNamed:name];
            WPLog(@"Theme", @"[ROW] apply %@ → %@", name, ok ? @"OK" : @"FAIL");
            WPShowToast(ok ? @"已应用，未刷新的部分重启微信生效" : @"应用失败，见日志");
            if (ok) [self wpReloadUI];
        } else if ([tapped isEqualToString:@"删除"]) {
            [MioAlertHelper showConfirmAlertWithTitle:@"删除主题"
                                             message:[NSString stringWithFormat:@"确定删除「%@」吗？", name]
                                        confirmTitle:@"删除"
                                           onConfirm:^{
                BOOL ok = [[ThemeService shared] deleteThemeNamed:name];
                WPLog(@"Theme", @"[ROW] delete %@ → %@", name, ok ? @"OK" : @"FAIL");
                if (ok) [self wpReloadUI];
            }];
        }
    }];
}

#pragma mark - 文件选择器（FontPickerVC 同款 legacy init）

- (void)presentThemePicker {
    @try {
        SEL sel = NSSelectorFromString(@"initWithDocumentTypes:inMode:");
        if (![UIDocumentPickerViewController instancesRespondToSelector:sel]) {
            WPLog(@"Theme", @"[PICKER] initWithDocumentTypes:inMode: 不可用");
            WPShowToast(@"当前系统不支持文件选择器");
            return;
        }
        id (*initFn)(id, SEL, NSArray *, long) = (id (*)(id, SEL, NSArray *, long))objc_msgSend;
        id picker = initFn([UIDocumentPickerViewController alloc], sel,
                           @[@"public.zip-archive", @"com.pkware.zip-archive",
                             @"public.data", @"public.item"],
                           0 /* UIDocumentPickerModeImport */);
        WPLog(@"Theme", @"[PICKER] legacy inMode: init → %@", picker ?: @"nil");
        if (!picker) {
            WPShowToast(@"文件选择器创建失败");
            return;
        }
        ((void (*)(id, SEL, id))objc_msgSend)(picker, NSSelectorFromString(@"setDelegate:"), self);
        [self presentViewController:picker animated:YES completion:nil];
    } @catch (NSException *e) {
        WPLog(@"Theme", @"[PICKER] exception: %@", e);
        WPShowToast([NSString stringWithFormat:@"无法打开文件选择器：%@", e.reason ?: @"未知错误"]);
    }
}

- (void)documentPicker:(UIDocumentPickerViewController *)controller
didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    if (urls.count == 0) return;
    NSURL *src = urls[0];
    WPLog(@"Theme", @"[PICKER] picked: %@", src.lastPathComponent);

    NSString *name = nil, *err = nil;
    BOOL ok = [[ThemeService shared] importThemeFromZip:src.path
                                                outName:&name
                                                errText:&err];
    if (!ok) {
        WPShowToast(err ?: @"导入失败");
        return;
    }
    WPShowToast([NSString stringWithFormat:@"导入成功：%@", name]);
    // 导入即应用（导入的主要意图就是换肤）；失败不阻断，可在列表手动再试
    BOOL applied = [[ThemeService shared] applyThemeNamed:name];
    if (applied) {
        WPShowToast(@"已应用，未刷新的部分重启微信生效");
    }
    [self wpReloadUI];
}

@end
