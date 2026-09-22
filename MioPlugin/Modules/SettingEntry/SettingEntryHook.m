#import "SettingEntryHook.h"
#import "WPCommonUI.h"
#import "WPUIVC.h"
#import "WPOtherVC.h"
#import "WPBackupVC.h"
#import "WPAboutVC.h"
#import "WPAccountVC.h"
#import "../Voice/WPVoicePackSettingsVC.h"
#import "../../Core/ConfigManager.h"
#import "../../Config/Constants.h"
#import "../../Settings/Controllers/SettingGeneralFunctionController.h"
#import "../../Settings/Controllers/SettingRedEnvelopController.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Settings/Controllers/SettingCornerRadiusController.h"
#import "../../Settings/Common/WPWeChatTable.h"

// 仿微信优化做法：不在 viewDidLoad 里创建 UI（view bounds 可能为 (0,0,0,0)），
// 改在 viewWillAppear 里创建 —— 此时 view 已在 window 中，bounds 正确。
// 微信优化不创建新 VC，而是往微信现有 VC 上加子视图，所以天然没这个问题。
// 我们虽然创建了新 VC（MioPluginEntryVC），但把 UI 创建推迟到 viewWillAppear，
// 等价于在 view 已就绪后才开始施工，从根本上消除黑屏。

static void pluginEntryViewDidLoad(id self, SEL _cmd) {
    WPLog(@"Setting", @"[Entry] viewDidLoad");

    // 调用父类 viewDidLoad（创建基础 view）
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);
    }

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"Mio助手";

    // 不做 UI 创建 — 全部推迟到 viewWillAppear
    WPLog(@"Setting", @"[Entry] viewDidLoad done, defer UI to viewWillAppear");
}

static void pluginEntryViewDidAppear(id self, SEL _cmd, BOOL animated) {
    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }
    // 兜底：pop 返回时子页 viewWillDisappear 恢复微信原样的时机晚于本页 viewWillAppear，
    // 这里在 appear 完成后再统一一次，避免顶栏停留在微信原色
    WPApplyNavAppearance((UIViewController *)self);
}

static void pluginEntryViewWillDisappear(id self, SEL _cmd, BOOL animated) {
    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }
    WPRestoreNavAppearance((UIViewController *)self);
}

static void pluginEntryViewWillAppear(id self, SEL _cmd, BOOL animated) {
    WPLog(@"Setting", @"[Entry] viewWillAppear");

    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }

    UIViewController *vc = (UIViewController *)self;

    // 每次出现都重设背景（微信主题系统可能在子页返回时改过 view/scrollView 颜色）
    vc.view.backgroundColor = WPBgColor();
    for (UIView *sub in vc.view.subviews) {
        if ([sub isKindOfClass:[UIScrollView class]]) {
            sub.backgroundColor = WPBgColor();
        }
    }

    // 顶栏颜色与页面背景统一：viewWillAppear 应用一次，viewDidAppear 还有兜底二次应用
    WPApplyNavAppearance(vc);

    // associated object 做一次性标记（runtime 级原子安全，无需 @synchronized）
    if (objc_getAssociatedObject(self, @"_entrySetupDone")) {
        return;
    }
    objc_setAssociatedObject(self, @"_entrySetupDone", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // bounds 检查
    if (vc.view.bounds.size.width < 1) {
        WPLog(@"Setting", @"[Entry] viewWillAppear: bounds invalid (w=%.0f), skip",
              vc.view.bounds.size.width);
        objc_setAssociatedObject(self, @"_entrySetupDone", nil, OBJC_ASSOCIATION_ASSIGN); // 允许重试
        return;
    }

    CGFloat w = vc.view.bounds.size.width;

    // === 以下是 UI 创建逻辑（与原来完全一致，只是移到了 viewWillAppear） ===
    // 与子页面(SettingCategoryController)对齐：self.view 和 scrollView 都设 WPBgColor，
    // 防止 scrollView 未完全覆盖时露出微信基类的主题背景色
    vc.view.backgroundColor = WPBgColor();

    CGFloat y = 8;

    UIView *heroCard = WPMakeCard(y, w);
    CGFloat hy = 24;

    UIView *avatar = [[UIView alloc] initWithFrame:CGRectMake((w - kPad * 2) / 2 - 40, hy, 80, 80)];
    avatar.backgroundColor = [UIColor colorWithRed:0.851 green:0.851 blue:0.859 alpha:1.0];
    avatar.layer.cornerRadius = 40;
    [heroCard addSubview:avatar];
    hy += 88;

    UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 28)];
    heroName.text = @"Mio助手";
    heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    heroName.textColor = WPAccent();
    heroName.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroName];
    hy += 36;

    UILabel *heroVer = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 18)];
    heroVer.text = [NSString stringWithFormat:@"v%@", kPluginVersion];
    heroVer.font = [UIFont systemFontOfSize:13];
    heroVer.textColor = [UIColor colorWithRed:0.400 green:0.800 blue:0.451 alpha:1.0];
    heroVer.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroVer];
    hy += 28;

    CGRect hcf = heroCard.frame; hcf.size.height = hy; heroCard.frame = hcf;

    // === 微信引擎：功能列表交给微信原生渲染（WCR 同款 NormalCell accessoryType=1，箭头是微信自家图） ===
    WPWeChatTable *wc = [WPWeChatTable tableForVC:vc];
    if (wc) {
        UITableView *tv = wc.tableView;
        // headW 必须跟表实际宽度（[UIScreen] 硬编码在表宽变化时会让 header 错位重排）
        CGFloat headW = tv.bounds.size.width > 1 ? tv.bounds.size.width : vc.view.bounds.size.width;

        // hero 卡包一层容器作 tableHeaderView；顶部 8px 间隔与子页面 y=8 起步对齐
        UIView *headerWrap = [[UIView alloc] initWithFrame:CGRectMake(0, 0, headW, hy + 14)];
        heroCard.frame = CGRectMake(kPad, 8, headW - kPad * 2, hy);
        heroCard.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [headerWrap addSubview:heroCard];
        // UIKit 已知要求：tableHeaderView.frame 修改后需重新赋值才会重算内容区布局
        headerWrap.frame = CGRectMake(0, 0, headW, hy + 14);
        tv.tableHeaderView = headerWrap;
        headerWrap.frame = CGRectMake(0, 0, headW, hy + 14);
        tv.tableHeaderView = headerWrap;

        WPWGroup *g = [wc addGroup];
        [g wpSetHeader:@"功能列表" footer:nil];
        NSArray *navItems = @[@[@"账户信息", @"openAccount:"], @[@"语音包", @"openVoice:"], @[@"常用功能", @"openCommon:"], @[@"界面定制", @"openUI:"], @[@"圆角美化", @"openCorner:"], @[@"红包设置", @"openRedEnvelop:"], @[@"其他功能", @"openOther:"], @[@"备份", @"openBackup:"], @[@"关于", @"openAbout:"]];
        for (NSUInteger i = 0; i < navItems.count; i++) {
            id cell = WPWCNavCell(NSSelectorFromString(@"wpEntryNavTap:"),
                                  [MioPluginSwitchHandler sharedInstance],
                                  navItems[i][0], nil);
            if (cell) {
                objc_setAssociatedObject(cell, "action", navItems[i][1], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                [g addCell:cell];
            }
        }

        UILabel *wfooter = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, headW, 50)];
        wfooter.text = @"Mio助手 v2.0.0";
        wfooter.font = [UIFont systemFontOfSize:12];
        wfooter.textColor = WPT3();
        wfooter.textAlignment = NSTextAlignmentCenter;
        wfooter.numberOfLines = 2;
        wc.tableView.tableFooterView = wfooter;

        [vc.view addSubview:wc.tableView];
        [wc reloadAsync]; // addSection: 数据已就绪，延迟双刷兜底首帧时序；normalizeTopInset 挂尾部修 inset 回写

        WPLog(@"Setting", @"[Entry] 微信引擎列表完成 (header=%@)", NSStringFromClass([headerWrap class]));
        return;
    }

    // 旧兜底路径已删除：微信 cell 框架缺失时入口页无法渲染（与子页面策略一致）
    WPLog(@"Setting", @"[Entry] 微信 cell 框架缺失，入口页无法渲染（旧兜底已移除）");
}

@implementation MioPluginSwitchHandler

+ (instancetype)sharedInstance {
    static MioPluginSwitchHandler *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MioPluginSwitchHandler alloc] init];
    });
    return instance;
}

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    @try {
        [ConfigManager setValue:@(sender.on) forKey:key];
        [ConfigManager saveAll];
        WPLog(@"Setting", @"[SAVE] %@ = %@", key, sender.on ? @"ON" : @"OFF");
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[ERR] save %@: %@ - %@", key, e.name, e.reason);
    }
}

- (void)onEditRowTap:(id)sender {
    NSString *key = objc_getAssociatedObject(sender, "editConfigKey");
    NSString *title = objc_getAssociatedObject(sender, "editTitle");
    UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
    NSString *hint = objc_getAssociatedObject(sender, "editConfigHint");
    if (!key || !title) return;

    NSString *currentValue = nil;
    @try {
        id val = [ConfigManager valueForKey:key];
        if ([val isKindOfClass:[NSString class]]) currentValue = val;
        else if ([val isKindOfClass:[NSNumber class]]) currentValue = [val stringValue];
    } @catch (NSException *e) {}

    NSString *message = objc_getAssociatedObject(sender, @"editMessage");
    NSNumber *typeNum = objc_getAssociatedObject(sender, @"editValueType");
    InputValueType valueType = typeNum ? [typeNum integerValue] : InputValueTypeNumber;
    [MioAlertHelper showInputAlert:title
                           message:message ?: @""
                       initialText:currentValue ?: @""
                       placeholder:hint ?: @""
                          keyboard:(valueType == InputValueTypeNumber)
                                       ? UIKeyboardTypeNumbersAndPunctuation
                                       : UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *input) {
        NSString *newValue = input ?: @"";
        @try {
            if (newValue.length == 0 && hint.length > 0) {
                newValue = hint;
            }

            if (valueType == InputValueTypeText) {
                // 文本类型：直接保存字符串
                [ConfigManager setValue:newValue forKey:key];
            } else {
                // 数值类型：转为 NSDecimalNumber 保存
                NSDecimalNumber *decimal = [NSDecimalNumber decimalNumberWithString:newValue];
                [ConfigManager setValue:decimal forKey:key];
            }

            [ConfigManager saveAll];
            WPLog(@"Setting", @"[EDIT] %@ = %@ (type=%ld)", key, newValue, (long)valueType);
            if (valueLabel) {
                valueLabel.text = newValue.length > 0 ? newValue : hint ?: @"";
            }
        } @catch (NSException *e) {
            WPLog(@"Setting", @"[ERR] save %@: %@ - %@", key, e.name, e.reason);
        }
    }];
}

- (void)onNavigate:(UIButton *)sender {
    NSString *action = objc_getAssociatedObject(sender, "action");
    if (!action) return;
    SEL sel = NSSelectorFromString(action);
    if ([self respondsToSelector:sel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(self, sel, sender);
    }
}

- (void)openAccount:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openAccount: currentVC nil"); return; }
    WPAccountVC *subVC = [[WPAccountVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPAccountVC");
}

- (void)openVoice:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openVoice: currentVC nil"); return; }
    WPVoicePackSettingsVC *subVC = [[WPVoicePackSettingsVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPVoicePackSettingsVC");
}

- (void)openCommon:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openCommon: currentVC nil"); return; }
    SettingGeneralFunctionController *subVC = [[SettingGeneralFunctionController alloc] init];
    subVC.categoryName = @"通用功能";
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingGeneralFunctionController");
}

- (void)openUI:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openUI: currentVC nil"); return; }
    WPUIVC *subVC = [[WPUIVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPUIVC");
}

- (void)openCorner:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openCorner: currentVC nil"); return; }
    SettingCornerRadiusController *subVC = [[SettingCornerRadiusController alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingCornerRadiusController");
}

- (void)openRedEnvelop:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openRedEnvelop: currentVC nil"); return; }
    SettingRedEnvelopController *subVC = [[SettingRedEnvelopController alloc] init];
    subVC.categoryName = @"自动抢红包";
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed SettingRedEnvelopController");
}

- (void)openOther:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openOther: currentVC nil"); return; }
    WPOtherVC *subVC = [[WPOtherVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPOtherVC");
}

- (void)openBackup:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openBackup: currentVC nil"); return; }
    WPBackupVC *subVC = [[WPBackupVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPBackupVC");
}

- (void)openAbout:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openAbout: currentVC nil"); return; }
    WPAboutVC *subVC = [[WPAboutVC alloc] init];
    [vc.navigationController pushViewController:subVC animated:YES];
    WPLog(@"Setting", @"[Nav] pushed WPAboutVC");
}

- (UIViewController *)currentVCFrom:(id)sender {
    // 微信引擎回调传入的是 cellManager（非视图），走顶层 VC 兜底
    if (![sender isKindOfClass:[UIView class]]) {
        return WPGetTopVCForPresentation();
    }
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

// 微信引擎入口列表回调：入参 = cellManager（反编译实证），action 名挂在 assoc "action"
- (void)wpEntryNavTap:(id)arg {
    NSString *action = objc_getAssociatedObject(arg, "action");
    WPLog(@"Setting", @"[Entry] wpEntryNavTap: action=%@ arg=%@", action, arg ? NSStringFromClass([arg class]) : @"nil");
    if (!action) return;
    SEL sel = NSSelectorFromString(action);
    if ([self respondsToSelector:sel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(self, sel, arg);
    }
}

@end

@implementation SettingEntryHook

+ (void)install {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WPLog(@"Setting", @"SettingEntryHook install");

        Class pluginsMgrClass = objc_getClass("WCPluginsMgr");
        if (pluginsMgrClass) {
            WPLog(@"Setting", @"[Plugin] WCPluginsMgr found");
            id sharedInstance = ((id (*)(id, SEL, ...))objc_msgSend)(pluginsMgrClass, NSSelectorFromString(@"sharedInstance"));
            if (sharedInstance) {
                Class baseClass = WPGetBaseClass();
                WPLog(@"Setting", @"[Plugin] baseClass: %@", NSStringFromClass(baseClass));

                Class entryClass = objc_getClass("MioPluginEntryVC");
                if (!entryClass) {
                    entryClass = objc_allocateClassPair(baseClass, "MioPluginEntryVC", 0);
                    if (entryClass) {
                        class_addMethod(entryClass, NSSelectorFromString(@"viewDidLoad"), (IMP)pluginEntryViewDidLoad, "v@:");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewWillAppear:"), (IMP)pluginEntryViewWillAppear, "v@:B");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewDidAppear:"), (IMP)pluginEntryViewDidAppear, "v@:B");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewWillDisappear:"), (IMP)pluginEntryViewWillDisappear, "v@:B");
                        objc_registerClassPair(entryClass);
                        WPLog(@"Setting", @"[Plugin] MioPluginEntryVC created");
                    } else {
                        WPLog(@"Setting", @"[Plugin] MioPluginEntryVC create failed");
                    }
                } else {
                    WPLog(@"Setting", @"[Plugin] MioPluginEntryVC exists");
                }

                if (entryClass) {
                    SEL regSel = NSSelectorFromString(@"registerControllerWithTitle:version:controller:");
                    if ([sharedInstance respondsToSelector:regSel]) {
                        ((void (*)(id, SEL, NSString *, NSString *, NSString *))objc_msgSend)(
                            sharedInstance, regSel,
                            @"Mio助手", kPluginVersion, @"MioPluginEntryVC");
                        WPLog(@"Setting", @"[Plugin] registered");
                    } else {
                        WPLog(@"Setting", @"[Plugin] registerController not found");
                    }
                }
            } else {
                WPLog(@"Setting", @"[Plugin] sharedInstance nil");
            }
        } else {
            WPLog(@"Setting", @"[Plugin] WCPluginsMgr not found");
        }

        WPLog(@"Setting", @"SettingEntryHook install complete");
    });
}

@end
