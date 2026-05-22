#import "SettingEntryHook.h"
#import "WPCommonUI.h"
#import "../../Config/PluginConfig.h"
#import "../../Settings/Common/SettingController.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"

else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

static NSMutableSet *_viewDidLoadSet = nil;

static void pluginEntryViewDidLoad(id self, SEL _cmd) {
    WPLog(@"Setting", @"[Entry] viewDidLoad");

    if (!_viewDidLoadSet) {
        _viewDidLoadSet = [NSMutableSet new];
    }

    NSNumber *ptr = [NSNumber numberWithUnsignedLong:(unsigned long)self];
    BOOL isRecursive = [_viewDidLoadSet containsObject:ptr];
    if (!isRecursive) {
        [_viewDidLoadSet addObject:ptr];
    }

    // 始终调用父类 viewDidLoad（确保视图被创建），即使递归调用也要创建视图
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);
    }

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"Mio助手";

    CGFloat w = vc.view.bounds.size.width;

    // 递归调用时视图已创建，直接返回避免重复添加子视图
    if (isRecursive) {
        WPLog(@"Setting", @"[Entry] recursive skip");
        return;
    }

    // 以下为自定义 UI 创建逻辑
    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 20;

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
    y += hy + 16;

    [sv addSubview:WPMakeSectionHeader(@"功能列表", y, w)];
    y += 32;

    UIView *listCard = WPMakeCard(y, w);
    CGFloat cy = 0;

    NSArray *navItems = @[@[@"常用功能", @"openCommon:"], @[@"红包设置", @"openRedEnvelop:"], @[@"其他功能", @"openOther:"], @[@"好友检测", @"openFriendDetection:"], @[@"备份", @"openBackup:"], @[@"关于", @"openAbout:"]];
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
    y += cy + 16;

    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(0, y, w, 50)];
    footer.text = @"Mio助手 v2.0.0";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    footer.numberOfLines = 2;
    [sv addSubview:footer];
    y += 60;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"Setting", @"[Entry] viewDidLoad complete");
}

static void pluginEntryViewWillAppear(id self, SEL _cmd, BOOL animated) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) {
        ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);
    }
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
        @"AutoRedEnvelop": @"autoRedEnvelop",
        @"RedEnvelopCatchMe": @"redEnvelopCatchMe",
        @"PersonalRedEnvelopEnable": @"personalRedEnvelopEnable",
        @"PreventRecall": @"preventRecall",
        @"ClearUnreadEnabled": @"clearUnreadEnabled",
        @"DebugLogging": @"debugLogging",
        @"HideContent": @"hideContent",
        @"NoTip": @"noTip"
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
    Class helperClass = objc_getClass("WPOtherVCHelper");
    if (!helperClass) { WPLog(@"Setting", @"[Nav] WPOtherVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPOtherVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPOtherVCHelper makeVC returned nil");
    }
}

- (void)openFriendDetection:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openFriendDetection: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPFriendDetectionVCHelper");
    if (!helperClass) { WPLog(@"Setting", @"[Nav] WPFriendDetectionVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPFriendDetectionVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPFriendDetectionVCHelper makeVC returned nil");
    }
}

- (void)openBackup:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openBackup: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPBackupVCHelper");
    if (!helperClass) { WPLog(@"Setting", @"[Nav] WPBackupVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPBackupVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPBackupVCHelper makeVC returned nil");
    }
}

- (void)openAbout:(id)sender {
    UIViewController *vc = [self currentVCFrom:sender];
    if (!vc) { WPLog(@"Setting", @"[Nav] openAbout: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPAboutVCHelper");
    if (!helperClass) { WPLog(@"Setting", @"[Nav] WPAboutVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"Setting", @"[Nav] pushed WPAboutVC");
    } else {
        WPLog(@"Setting", @"[Nav] WPAboutVCHelper makeVC returned nil");
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
