#import "SettingEntryHook.h"
#import "WPCommonUI.h"
#import "../../Config/PluginConfig.h"
#import "../../Settings/Common/SettingController.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"

// 仿微信优化做法：不在 viewDidLoad 里创建 UI（view bounds 可能为 (0,0,0,0)），
// 改在 viewWillAppear 里创建 —— 此时 view 已在 window 中，bounds 正确。
// 微信优化不创建新 VC，而是往微信现有 VC 上加子视图，所以天然没这个问题。
// 我们虽然创建了新 VC（WeChatPluginEntryVC），但把 UI 创建推迟到 viewWillAppear，
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

static void pluginEntryViewWillAppear(id self, SEL _cmd, BOOL animated) {
    WPLog(@"Setting", @"[Entry] viewWillAppear");

    // 调用父类
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }

    // associated object 做一次性标记（runtime 级原子安全，无需 @synchronized）
    if (objc_getAssociatedObject(self, @"_entrySetupDone")) {
        WPLog(@"Setting", @"[Entry] viewWillAppear: already set up");
        return;
    }
    objc_setAssociatedObject(self, @"_entrySetupDone", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    UIViewController *vc = (UIViewController *)self;

    // bounds 检查
    if (vc.view.bounds.size.width < 1) {
        WPLog(@"Setting", @"[Entry] viewWillAppear: bounds invalid (w=%.0f), skip",
              vc.view.bounds.size.width);
        objc_setAssociatedObject(self, @"_entrySetupDone", nil, OBJC_ASSOCIATION_ASSIGN); // 允许重试
        return;
    }

    CGFloat w = vc.view.bounds.size.width;

    // === 以下是 UI 创建逻辑（与原来完全一致，只是移到了 viewWillAppear） ===
    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 8;

    UIView *heroCard = WPMakeCard(y, w);
    CGFloat hy = 24;

    UIView *avatar = [[UIView alloc] initWithFrame:CGRectMake((w - kPad * 2) / 2 - 40, hy, 80, 80)];
    avatar.backgroundColor = [UIColor colorWithRed:0.851 green:0.851 blue:0.859 alpha:1.0];
    avatar.layer.cornerRadius = 40;
    [heroCard addSubview:avatar];
    hy += 88;

    UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 30)];
    heroName.text = @"Mio助手";
    heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    heroName.textColor = WPAccent();
    heroName.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroName];
    hy += 34;

    UILabel *heroVer = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 20)];
    heroVer.text = [NSString stringWithFormat:@"v%@", kPluginVersion];
    heroVer.font = [UIFont systemFontOfSize:13];
    heroVer.textColor = [UIColor colorWithRed:0.400 green:0.800 blue:0.451 alpha:1.0];
    heroVer.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroVer];
    hy += 28;

    CGRect hcf = heroCard.frame; hcf.size.height = hy; heroCard.frame = hcf;
    [sv addSubview:heroCard];
    y += hy + 8;

    [sv addSubview:WPMakeSectionHeader(@"功能列表", y, w)];
    y += 32;

    UIView *listCard = WPMakeCard(y, w);
    CGFloat cy = 0;

    NSArray *navItems = @[@[@"常用功能", @"openCommon:"], @[@"界面定制", @"openUI:"], @[@"红包设置", @"openRedEnvelop:"], @[@"其他功能", @"openOther:"], @[@"备份", @"openBackup:"], @[@"关于", @"openAbout:"]];
    CGFloat scale = [UIScreen mainScreen].scale;
    for (NSUInteger i = 0; i < navItems.count; i++) {
        if (i > 0) {
            WPAddSep(listCard, cy, w);
            cy = round((cy + 1.0 / scale) * scale) / scale;
        }
        WPAddNavRow(listCard, cy, w, navItems[i][0], navItems[i][1], [WeChatPluginSwitchHandler sharedInstance]);
        cy += kRowH;
    }

    CGRect lcf = listCard.frame; lcf.size.height = cy; listCard.frame = lcf;
    [sv addSubview:listCard];
    y += cy + 8;

    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(0, y, w, 50)];
    footer.text = @"Mio助手 v2.0.0";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    footer.numberOfLines = 2;
    [sv addSubview:footer];
    y += 60;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"Setting", @"[Entry] setup complete (via viewWillAppear)");
}

@implementation WeChatPluginSwitchHandler

+ (instancetype)sharedInstance {
    static WeChatPluginSwitchHandler *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[WeChatPluginSwitchHandler alloc] init];
    });
    return instance;
}

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    PluginConfig *config = [PluginConfig shared];
    NSDictionary *mapping = @{
        @"AutoConfirmTransfer": @"autoConfirmTransfer",
        @"AutoConfirmTransferAutoReply": @"autoConfirmTransferAutoReply",
        @"AutoConfirmTransferGroup": @"autoConfirmTransferGroup",
        @"AutoConfirmTransferPersonal": @"autoConfirmTransferPersonal",
        @"AutoRedEnvelop": @"autoRedEnvelop",
        @"BottomPosition": @"bottomPosition",
        @"ClearUnreadEnabled": @"clearUnreadEnabled",
        @"CustomColorsEnabled": @"customColorsEnabled",
        @"CustomNotifyEnabled": @"customNotifyEnabled",
        @"DebugLogging": @"debugLogging",
        @"DisableDictation": @"disableDictation",
        @"EnableGroupExitMonitor": @"enableGroupExitMonitor",
        @"EnableJoker": @"enableJoker",
        @"HideBubbleBackground": @"hideBubbleBackground",
        @"HideC2COtherAvatar": @"hideC2COtherAvatar",
        @"HideC2CSelfAvatar": @"hideC2CSelfAvatar",
        @"HideChatTime": @"hideChatTime",
        @"HideContent": @"hideContent",
        @"HideDiscoverBadge": @"hideDiscoverBadge",
        @"HideEnterpriseBadge": @"hideEnterpriseBadge",
        @"HideGroupOtherAvatar": @"hideGroupOtherAvatar",
        @"HideGroupSelfAvatar": @"hideGroupSelfAvatar",
        @"HideOAOtherAvatar": @"hideOAOtherAvatar",
        @"HideOASelfAvatar": @"hideOASelfAvatar",
        @"HidePatHint": @"hidePatHint",
        @"HideRevokeHint": @"hideRevokeHint",
        @"HideSeparatorLine": @"hideSeparatorLine",
        @"HideVoiceRedDot": @"hideVoiceRedDot",
        @"InterceptNotifyEnabled": @"interceptNotifyEnabled",
        @"MessageTimeBoldFont": @"messageTimeBoldFont",
        @"MessageTimeTextColor": @"messageTimeTextColor",
        @"NoTip": @"noTip",
        @"NotifySender": @"notifySender",
        @"PersonalRedEnvelopEnable": @"personalRedEnvelopEnable",
        @"PreventRecall": @"preventRecall",
        @"RedEnvelopAutoReply": @"redEnvelopAutoReply",
        @"RedEnvelopAutoReplyInGroup": @"redEnvelopAutoReplyInGroup",
        @"RedEnvelopCatchMe": @"redEnvelopCatchMe",
        @"RedEnvelopDetail": @"redEnvelopeDetail",
        @"RedEnvelopGroupFilterEnabled": @"redEnvelopGroupFilterEnabled",
        @"RedEnvelopTextFilterEnabled": @"redEnvelopTextFilterEnabled",
        @"SendInterceptedContent": @"sendInterceptedContent",
        @"ShowMessageTime": @"showMessageTime"
    };

    NSString *prop = mapping[key];
    if (prop) {
        @try {
            [config setValue:@(sender.on) forKey:prop];
            [config save];
            WPLog(@"Setting", @"[SAVE] %@ = %@", key, sender.on ? @"ON" : @"OFF");
        } @catch (NSException *e) {
            WPLog(@"Setting", @"[ERR] save %@: %@ - %@", key, e.name, e.reason);
        }
    }
}

- (void)onNavigate:(UIButton *)sender {
    NSString *action = objc_getAssociatedObject(sender, "action");
    if (!action) return;
    SEL sel = NSSelectorFromString(action);
    if ([self respondsToSelector:sel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(self, sel, sender);
    }
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
    Class cls = NSClassFromString(@"WPUIVC");
    if (!cls) { WPLog(@"Setting", @"[Nav] WPUIVC class not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPUIVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPUIVC alloc returned nil");
    }
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
    Class cls = NSClassFromString(@"WPOtherVC");
    if (!cls) { WPLog(@"Setting", @"[Nav] WPOtherVC class not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPOtherVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPOtherVC alloc returned nil");
    }
}

- (void)openBackup:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openBackup: currentVC nil"); return; }
    Class cls = NSClassFromString(@"WPBackupVC");
    if (!cls) { WPLog(@"Setting", @"[Nav] WPBackupVC class not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPBackupVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPBackupVC alloc returned nil");
    }
}

- (void)openAbout:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openAbout: currentVC nil"); return; }
    Class cls = NSClassFromString(@"WPAboutVC");
    if (!cls) { WPLog(@"Setting", @"[Nav] WPAboutVC class not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPAboutVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPAboutVC alloc returned nil");
    }
}

- (UIViewController *)currentVCFrom:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
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

                Class entryClass = objc_getClass("WeChatPluginEntryVC");
                if (!entryClass) {
                    entryClass = objc_allocateClassPair(baseClass, "WeChatPluginEntryVC", 0);
                    if (entryClass) {
                        class_addMethod(entryClass, NSSelectorFromString(@"viewDidLoad"), (IMP)pluginEntryViewDidLoad, "v@:");
                        class_addMethod(entryClass, NSSelectorFromString(@"viewWillAppear:"), (IMP)pluginEntryViewWillAppear, "v@:B");
                        objc_registerClassPair(entryClass);
                        WPLog(@"Setting", @"[Plugin] WeChatPluginEntryVC created");
                    } else {
                        WPLog(@"Setting", @"[Plugin] WeChatPluginEntryVC create failed");
                    }
                } else {
                    WPLog(@"Setting", @"[Plugin] WeChatPluginEntryVC exists");
                }

                if (entryClass) {
                    SEL regSel = NSSelectorFromString(@"registerControllerWithTitle:version:controller:");
                    if ([sharedInstance respondsToSelector:regSel]) {
                        ((void (*)(id, SEL, NSString *, NSString *, NSString *))objc_msgSend)(
                            sharedInstance, regSel,
                            @"Mio助手", kPluginVersion, @"WeChatPluginEntryVC");
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
