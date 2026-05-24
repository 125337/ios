#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Core/LogManager.h"

static void WPUISimplifyViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"界面简化";

    CGFloat w = vc.view.bounds.size.width;

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];

    CGFloat y = 8;
    CGFloat scale = [UIScreen mainScreen].scale;

    // Section 1: 顶部标签自定义
    [sv addSubview:WPMakeSectionHeader(@"顶部标签自定义", y, w)];
    y += 32;

    UIView *topBarCard = WPMakeCard(y, w);
    CGFloat tby = 0;
    NSArray *topBarItems = @[
        @[@"微信标题", @"微信"],
        @[@"通讯录标题", @"通讯录"],
        @[@"发现标题", @"发现"],
    ];
    for (NSUInteger i = 0; i < topBarItems.count; i++) {
        if (i > 0) {
            WPAddSep(topBarCard, tby, w);
            tby = round((tby + 1.0 / scale) * scale) / scale;
        }
        WPAddTextFieldRow(topBarCard, tby, w, topBarItems[i][0], topBarItems[i][1]);
        tby += kRowH;
    }
    CGRect tbf = topBarCard.frame; tbf.size.height = tby; topBarCard.frame = tbf;
    [sv addSubview:topBarCard];
    y += tby + 16;

    // Section 2: 特殊自定义
    [sv addSubview:WPMakeSectionHeader(@"特殊自定义", y, w)];
    y += 32;

    UIView *specialCard = WPMakeCard(y, w);
    CGFloat scy = 0;
    NSArray *specialItems = @[
        @[@"通讯录底部好友", @"好友"],
    ];
    for (NSUInteger i = 0; i < specialItems.count; i++) {
        if (i > 0) {
            WPAddSep(specialCard, scy, w);
            scy = round((scy + 1.0 / scale) * scale) / scale;
        }
        WPAddTextFieldRow(specialCard, scy, w, specialItems[i][0], specialItems[i][1]);
        scy += kRowH;
    }
    CGRect scf = specialCard.frame; scf.size.height = scy; specialCard.frame = scf;
    [sv addSubview:specialCard];
    y += scy + 16;

    // Section 3: 我的页面菜单名称自定义
    [sv addSubview:WPMakeSectionHeader(@"我的页面菜单名称自定义", y, w)];
    y += 32;

    UIView *menuCard = WPMakeCard(y, w);
    CGFloat mcy = 0;
    NSArray *menuItems = @[
        @[@"服务/支付与服务", @"服务"],
        @[@"收藏", @"收藏"],
        @[@"朋友圈", @"朋友圈"],
        @[@"卡片/订单与卡包", @"卡包"],
        @[@"表情", @"表情"],
        @[@"设置", @"设置"],
        @[@"插件", @"插件"],
    ];
    for (NSUInteger i = 0; i < menuItems.count; i++) {
        if (i > 0) {
            WPAddSep(menuCard, mcy, w);
            mcy = round((mcy + 1.0 / scale) * scale) / scale;
        }
        WPAddTextFieldRow(menuCard, mcy, w, menuItems[i][0], menuItems[i][1]);
        mcy += kRowH;
    }
    CGRect mcf = menuCard.frame; mcf.size.height = mcy; menuCard.frame = mcf;
    [sv addSubview:menuCard];
    y += mcy + 16;

    // Section 4: 底部标签自定义
    [sv addSubview:WPMakeSectionHeader(@"底部标签自定义", y, w)];
    y += 32;

    UIView *bottomCard = WPMakeCard(y, w);
    CGFloat bcy = 0;
    NSArray *bottomItems = @[
        @[@"微信", @"微信"],
        @[@"通讯录", @"通讯录"],
        @[@"发现", @"发现"],
        @[@"我", @"我"],
    ];
    for (NSUInteger i = 0; i < bottomItems.count; i++) {
        if (i > 0) {
            WPAddSep(bottomCard, bcy, w);
            bcy = round((bcy + 1.0 / scale) * scale) / scale;
        }
        WPAddTextFieldRow(bottomCard, bcy, w, bottomItems[i][0], bottomItems[i][1]);
        bcy += kRowH;
    }
    CGRect bcf = bottomCard.frame; bcf.size.height = bcy; bottomCard.frame = bcf;
    [sv addSubview:bottomCard];
    y += bcy + 16;

    // 提示文字
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
    footer.text = @"修改文字后将在下次启动时生效";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    [sv addSubview:footer];
    y += 48;

    sv.contentSize = CGSizeMake(w, y);

    // 点击空白区域收起键盘
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:NSSelectorFromString(@"dismissKB")];
    tap.cancelsTouchesInView = NO;
    [sv addGestureRecognizer:tap];

    WPLog(@"UI", @"[Sub] uiSimplifyViewDidLoad");
}

static void dismissKB(id self, SEL _cmd) {
    [[(UIViewController *)self view] endEditing:YES];
}

@interface WPUISimplifyVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPUISimplifyVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPUISimplifyVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPUISimplifyVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPUISimplifyViewDidLoad, "v@:");
            class_addMethod(subClass, NSSelectorFromString(@"dismissKB"), (IMP)dismissKB, "v@:");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPUISimplifyVC class created");
        } else {
            WPLog(@"UI", @"[Sub] WPUISimplifyVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end