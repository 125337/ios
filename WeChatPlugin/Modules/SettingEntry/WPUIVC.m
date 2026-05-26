#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Core/LogManager.h"

static void WPUIViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"界面定制";

    CGFloat w = vc.view.bounds.size.width;

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 8;

    [sv addSubview:WPMakeSectionHeader(@"界面定制", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cy = 0;
    CGFloat scale = [UIScreen mainScreen].scale;
    NSArray *items = @[
        @[@"聊天顶栏",      @"openChatTopBar:"],
        @[@"消息居中",      @"noop:"],
        @[@"名字颜色",      @"openNameColor:"],
        @[@"文本颜色",      @"noop:"],
        @[@"长按菜单",      @"noop:"],
        @[@"附件布局",      @"openAttachLayout:"],
        @[@"文本占位",      @"openPlaceholderText:"],
        @[@"界面简化",      @"openUISimplify:"],
        @[@"界面净化",      @"openUIPurify:"],
        @[@"隐藏头像",      @"openAvatarHide:"],
        @[@"圆角设置",      @"noop:"],
        @[@"卡片背景",      @"noop:"],
        @[@"列表圆角",      @"noop:"],
        @[@"悬浮底栏",      @"noop:"],
    ];
    id handler = [WeChatPluginSwitchHandler sharedInstance];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, w);
            cy = round((cy + 1.0 / scale) * scale) / scale;
        }
        WPAddNavRow(card, cy, w, items[i][0], items[i][1], handler);
        cy += kRowH;
    }
    CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;
    [sv addSubview:card];
    y += cy + 8;
    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] uiViewDidLoad");
}

@implementation WeChatPluginSwitchHandler (WPUICustomization)

- (void)openChatTopBar:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openChatTopBar: currentVC nil"); return; }
    Class cls = NSClassFromString(@"SettingChatTopBarController");
    if (!cls) { WPLog(@"UI", @"[Nav] SettingChatTopBarController not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        [subVC release];
        WPLog(@"UI", @"[Nav] pushed SettingChatTopBarController");
    }
}

- (void)openNameColor:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openNameColor: currentVC nil"); return; }
    Class cls = NSClassFromString(@"SettingNameColorController");
    if (!cls) { WPLog(@"UI", @"[Nav] SettingNameColorController not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        [subVC release];
        WPLog(@"UI", @"[Nav] pushed SettingNameColorController");
    }
}

- (void)openAvatarHide:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openAvatarHide: currentVC nil"); return; }
    Class cls = NSClassFromString(@"SettingAvatarHideController");
    if (!cls) { WPLog(@"UI", @"[Nav] SettingAvatarHideController not found"); return; }
    UIViewController *subVC = [[cls alloc] init];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        [subVC release];
        WPLog(@"UI", @"[Nav] pushed SettingAvatarHideController");
    }
}

- (void)openUIPurify:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openUIPurify: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPUIPurifyVCHelper");
    if (!helperClass) { WPLog(@"UI", @"[Nav] WPUIPurifyVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"UI", @"[Nav] pushed WPUIPurifyVC");
    } else {
        WPLog(@"UI", @"[Nav] WPUIPurifyVCHelper makeVC returned nil");
    }
}

- (void)openUISimplify:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openUISimplify: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPUISimplifyVCHelper");
    if (!helperClass) { WPLog(@"UI", @"[Nav] WPUISimplifyVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"UI", @"[Nav] pushed WPUISimplifyVC");
    } else {
        WPLog(@"UI", @"[Nav] WPUISimplifyVCHelper makeVC returned nil");
    }
}

- (void)openAttachLayout:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openAttachLayout: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPUIAttachLayoutVCHelper");
    if (!helperClass) { WPLog(@"UI", @"[Nav] WPUIAttachLayoutVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"UI", @"[Nav] pushed WPUIAttachLayoutVC");
    } else {
        WPLog(@"UI", @"[Nav] WPUIAttachLayoutVCHelper makeVC returned nil");
    }
}

- (void)openPlaceholderText:(id)sender {
    UIResponder *responder = (UIResponder *)sender;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    UIViewController *vc = (UIViewController *)responder;
    if (!vc) { WPLog(@"UI", @"[Nav] openPlaceholderText: currentVC nil"); return; }
    Class helperClass = objc_getClass("WPUIPlaceholderTextVCHelper");
    if (!helperClass) { WPLog(@"UI", @"[Nav] WPUIPlaceholderTextVCHelper not found"); return; }
    UIViewController *subVC = [helperClass performSelector:@selector(makeVC)];
    if (subVC) {
        [vc.navigationController pushViewController:subVC animated:YES];
        WPLog(@"UI", @"[Nav] pushed WPUIPlaceholderTextVC");
    } else {
        WPLog(@"UI", @"[Nav] WPUIPlaceholderTextVCHelper makeVC returned nil");
    }
}

@end

@interface WPUIVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPUIVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPUIVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPUIVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPUIViewDidLoad, "v@:");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPUIVC class created");
        } else {
            WPLog(@"UI", @"[Sub] WPUIVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end