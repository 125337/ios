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
        @"聊天顶栏",
        @"消息居中",
        @"名字颜色",
        @"文本颜色",
        @"长按菜单",
        @"附件布局",
        @"文本占位",
        @"界面简化",
        @"界面净化",
        @"隐藏头像",
        @"圆角设置",
        @"卡片背景",
        @"列表圆角",
        @"悬浮底栏",
    ];
    id handler = [WeChatPluginSwitchHandler sharedInstance];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, w);
            cy = round((cy + 1.0 / scale) * scale) / scale;
        }
        WPAddNavRow(card, cy, w, items[i], @"noop:", handler);
        cy += kRowH;
    }
    CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;
    [sv addSubview:card];
    y += cy + 40;
    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] uiViewDidLoad");
}

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