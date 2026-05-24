#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Core/LogManager.h"

/// 总开关 toggle 目标 — 控制下方配置区的显示/隐藏
@interface SimplifySwitchTarget : NSObject
- (void)toggleSwitch:(UISwitch *)sw;
@end

@implementation SimplifySwitchTarget
- (void)toggleSwitch:(UISwitch *)sw {
    NSArray *sections = objc_getAssociatedObject(sw, "sections");
    for (UIView *v in sections) { v.hidden = !sw.on; }
    [[NSUserDefaults standardUserDefaults] setBool:sw.on forKey:@"SimplifyEnabled"];
    // 更新 scroll contentSize
    UIScrollView *sv = objc_getAssociatedObject(sw, "simplifySV");
    NSNumber *expandedH = objc_getAssociatedObject(sw, "simplifyExpandedH");
    NSNumber *collapsedH = objc_getAssociatedObject(sw, "simplifyCollapsedH");
    if (sv && expandedH && collapsedH) {
        sv.contentSize = CGSizeMake(sv.contentSize.width, sw.on ? [expandedH floatValue] : [collapsedH floatValue]);
    }
}
@end

/// 编辑行 tap 处理 — 弹出 UIAlertController，弹窗标题 = 配置项名称
@implementation WeChatPluginSwitchHandler (WPUISimplify)

- (void)onEditRowTap:(UIButton *)sender {
    NSString *title = objc_getAssociatedObject(sender, "editTitle");
    UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
    if (!title) return;

    UIViewController *topVC = WPGetTopVCForPresentation();
    if (!topVC) return;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.text = valueLabel.text ?: @"";
        tf.placeholder = title;
        tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    __weak UILabel *weakLabel = valueLabel;
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *newText = alert.textFields.firstObject.text;
        if (newText.length > 0 && weakLabel) {
            weakLabel.text = newText;
        }
    }]];

    [topVC presentViewController:alert animated:YES completion:nil];
}

@end


#pragma mark - viewDidLoad

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
    id handler = [WeChatPluginSwitchHandler sharedInstance];

    // ========== 总开关 ==========
    [sv addSubview:WPMakeSectionHeader(@"界面名称简化", y, w)];
    y += 32;

    UIView *switchCard = WPMakeCard(y, w);
    BOOL enabled = [[NSUserDefaults standardUserDefaults] boolForKey:@"SimplifyEnabled"];
    CGFloat scy = 0;

    SimplifySwitchTarget *swTarget = [[SimplifySwitchTarget alloc] init];

    UILabel *swLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, scy, w - kPad * 2 - 70, kRowH)];
    swLabel.text = @"界面名称简化";
    swLabel.font = [UIFont systemFontOfSize:15];
    swLabel.textColor = WPT1();
    [switchCard addSubview:swLabel];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = enabled;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(w - kPad * 2 - 51, scy + 6.5, 51, 31);
    [sw addTarget:swTarget action:@selector(toggleSwitch:) forControlEvents:UIControlEventValueChanged];
    [switchCard addSubview:sw];
    scy += kRowH;

    CGRect scf = switchCard.frame; scf.size.height = scy; switchCard.frame = scf;
    [sv addSubview:switchCard];
    y += scy + 16;

    NSMutableArray *allSections = [NSMutableArray array];

    // ========== Section 1: 顶部标签自定义 ==========
    UILabel *sec1Header = WPMakeSectionHeader(@"顶部标签自定义", y, w);
    [sv addSubview:sec1Header];
    [allSections addObject:sec1Header];
    y += 32;

    UIView *topBarCard = WPMakeCard(y, w);
    [allSections addObject:topBarCard];
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
        WPAddEditableRow(topBarCard, tby, w, topBarItems[i][0], topBarItems[i][1], handler);
        tby += kRowH;
    }
    CGRect tbf = topBarCard.frame; tbf.size.height = tby; topBarCard.frame = tbf;
    [sv addSubview:topBarCard];
    y += tby + 16;

    // ========== Section 2: 特殊自定义 ==========
    UILabel *sec2Header = WPMakeSectionHeader(@"特殊自定义", y, w);
    [sv addSubview:sec2Header];
    [allSections addObject:sec2Header];
    y += 32;

    UIView *specialCard = WPMakeCard(y, w);
    [allSections addObject:specialCard];
    CGFloat spy = 0;
    NSArray *specialItems = @[
        @[@"通讯录底部好友", @"好友"],
    ];
    for (NSUInteger i = 0; i < specialItems.count; i++) {
        if (i > 0) {
            WPAddSep(specialCard, spy, w);
            spy = round((spy + 1.0 / scale) * scale) / scale;
        }
        WPAddEditableRow(specialCard, spy, w, specialItems[i][0], specialItems[i][1], handler);
        spy += kRowH;
    }
    CGRect spf = specialCard.frame; spf.size.height = spy; specialCard.frame = spf;
    [sv addSubview:specialCard];
    y += spy + 16;

    // ========== Section 3: 我的页面菜单名称自定义 ==========
    UILabel *sec3Header = WPMakeSectionHeader(@"我的页面菜单名称自定义", y, w);
    [sv addSubview:sec3Header];
    [allSections addObject:sec3Header];
    y += 32;

    UIView *menuCard = WPMakeCard(y, w);
    [allSections addObject:menuCard];
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
        WPAddEditableRow(menuCard, mcy, w, menuItems[i][0], menuItems[i][1], handler);
        mcy += kRowH;
    }
    CGRect mcf = menuCard.frame; mcf.size.height = mcy; menuCard.frame = mcf;
    [sv addSubview:menuCard];
    y += mcy + 16;

    // ========== Section 4: 底部标签自定义 ==========
    UILabel *sec4Header = WPMakeSectionHeader(@"底部标签自定义", y, w);
    [sv addSubview:sec4Header];
    [allSections addObject:sec4Header];
    y += 32;

    UIView *bottomCard = WPMakeCard(y, w);
    [allSections addObject:bottomCard];
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
        WPAddEditableRow(bottomCard, bcy, w, bottomItems[i][0], bottomItems[i][1], handler);
        bcy += kRowH;
    }
    CGRect bcf = bottomCard.frame; bcf.size.height = bcy; bottomCard.frame = bcf;
    [sv addSubview:bottomCard];
    y += bcy + 16;

    // 绑定 sections / scrollView / 高度 到 switch 并设置初始隐藏状态
    CGFloat collapsedY = y;
    objc_setAssociatedObject(sw, "sections", allSections, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [allSections enumerateObjectsUsingBlock:^(UIView *v, NSUInteger i, BOOL *s) { v.hidden = !enabled; }];

    // 提示文字
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
    footer.text = @"修改后将在下次启动时生效";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    [sv addSubview:footer];
    y += 48;

    sv.contentSize = CGSizeMake(w, enabled ? y : collapsedY + 48);
    objc_setAssociatedObject(sw, "simplifySV", sv, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(sw, "simplifyExpandedH", @(y), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(sw, "simplifyCollapsedH", @(collapsedY + 48), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    WPLog(@"UI", @"[Sub] uiSimplifyViewDidLoad");
}

#pragma mark - Helper

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