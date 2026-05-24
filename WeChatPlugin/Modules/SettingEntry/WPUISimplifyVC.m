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
    [[NSUserDefaults standardUserDefaults] synchronize];
    // 更新 scroll contentSize
    UIScrollView *sv = objc_getAssociatedObject(sw, "simplifySV");
    NSNumber *expandedH = objc_getAssociatedObject(sw, "simplifyExpandedH");
    NSNumber *collapsedH = objc_getAssociatedObject(sw, "simplifyCollapsedH");
    if (sv && expandedH && collapsedH) {
        sv.contentSize = CGSizeMake(sv.contentSize.width, sw.on ? [expandedH floatValue] : [collapsedH floatValue]);
    }
}
@end

/// ========== 配置读取辅助 ==========
static inline NSUserDefaults *SD(void) {
    return [NSUserDefaults standardUserDefaults];
}

static inline NSString *SStr(NSString *key) {
    return [SD() stringForKey:key];
}

static inline NSDictionary *SDict(NSString *key) {
    return [SD() dictionaryForKey:key] ?: @{};
}

static void SSave(NSString *key, id value) {
    [SD() setObject:value forKey:key];
    [SD() synchronize];
}

/// ========== 编辑行 tap — 弹窗 + 持久化 ==========
@implementation WeChatPluginSwitchHandler (WPUISimplify)

- (void)onEditRowTap:(UIButton *)sender {
    NSString *title = objc_getAssociatedObject(sender, "editTitle");
    UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
    NSString *nsKey = objc_getAssociatedObject(sender, "editNSKey");
    NSString *dictKey = objc_getAssociatedObject(sender, "editDictKey");
    if (!title) return;

    UIViewController *topVC = WPGetTopVCForPresentation();
    if (!topVC) return;

    // 从 NSUserDefaults 读取当前值作为初始值
    NSString *currentValue = nil;
    if (dictKey) {
        currentValue = SDict(nsKey)[dictKey];
    }
    if (!currentValue && nsKey) {
        currentValue = SStr(nsKey);
    }
    if (!currentValue) {
        currentValue = valueLabel.text ?: @"";
    }

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.text = currentValue;
        tf.placeholder = title;
        tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    __weak UILabel *weakLabel = valueLabel;
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *newText = alert.textFields.firstObject.text;
        if (newText.length == 0) return;
        if (weakLabel) weakLabel.text = newText;

        // 持久化：字典项 vs 字符串项
        if (dictKey && nsKey) {
            NSMutableDictionary *dict = [SDict(nsKey) mutableCopy];
            dict[dictKey] = newText;
            SSave(nsKey, dict);
        } else if (nsKey) {
            SSave(nsKey, newText);
        }
    }]];

    [topVC presentViewController:alert animated:YES completion:nil];
}

@end


#pragma mark - ========== viewDidLoad ==========

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
    BOOL enabled = [SD() boolForKey:@"SimplifyEnabled"];
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
    // ⚠️ UISwitch.addTarget: 不持有 target，必须用 associated object 保住 swTarget
    objc_setAssociatedObject(sw, "swTarget", swTarget, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [switchCard addSubview:sw];
    scy += kRowH;

    CGRect scf = switchCard.frame; scf.size.height = scy; switchCard.frame = scf;
    [sv addSubview:switchCard];
    y += scy + 16;

    NSMutableArray *allSections = [NSMutableArray array];

    // ========== 预取字典数据 ==========
    NSDictionary *menuDict = SDict(@"Simplify_MenuNames");
    NSDictionary *tabDict = SDict(@"Simplify_Tab_Names");

    // 读取当前值（从 NSUserDefaults 读取，无则用默认值）
    #define EVal(key, def) (SStr(key) ?: def)
    #define EValD(dict, dk, def) (dict[dk] ?: def)

    // ========== Section 1: 顶部标签自定义 ==========
    UILabel *sec1Header = WPMakeSectionHeader(@"顶部标签自定义", y, w);
    [sv addSubview:sec1Header];
    [allSections addObject:sec1Header];
    y += 32;

    UIView *topBarCard = WPMakeCard(y, w);
    [allSections addObject:topBarCard];
    CGFloat tby = 0;

    {
        UIButton *row;
        row = WPAddEditableRow(topBarCard, tby, w, @"微信标题", EVal(@"Simplify_MainTitle", @"微信"), handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_MainTitle", OBJC_ASSOCIATION_COPY_NONATOMIC);
        tby += kRowH;
    }
    {
        WPAddSep(topBarCard, tby, w);
        tby = round((tby + 1.0 / scale) * scale) / scale;
        UIButton *row = WPAddEditableRow(topBarCard, tby, w, @"通讯录标题", EVal(@"Simplify_ContactsTitle", @"通讯录"), handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_ContactsTitle", OBJC_ASSOCIATION_COPY_NONATOMIC);
        tby += kRowH;
    }
    {
        WPAddSep(topBarCard, tby, w);
        tby = round((tby + 1.0 / scale) * scale) / scale;
        UIButton *row = WPAddEditableRow(topBarCard, tby, w, @"发现标题", EVal(@"Simplify_DiscoverTitle", @"发现"), handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_DiscoverTitle", OBJC_ASSOCIATION_COPY_NONATOMIC);
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

    {
        UIButton *row = WPAddEditableRow(specialCard, spy, w, @"通讯录底部好友", EVal(@"Simplify_FriendsCount", @"好友"), handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_FriendsCount", OBJC_ASSOCIATION_COPY_NONATOMIC);
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

    // 菜单项: title, dictKey, defaultVal
    NSArray *menuDefs = @[
        @[@"服务/支付与服务", @"服务", @"服务"],
        @[@"收藏", @"收藏", @"收藏"],
        @[@"朋友圈", @"朋友圈", @"朋友圈"],
        @[@"卡片/订单与卡包", @"卡包", @"卡包"],
        @[@"表情", @"表情", @"表情"],
        @[@"设置", @"设置", @"设置"],
        @[@"插件", @"插件", @"插件"],
    ];
    for (NSUInteger i = 0; i < menuDefs.count; i++) {
        if (i > 0) {
            WPAddSep(menuCard, mcy, w);
            mcy = round((mcy + 1.0 / scale) * scale) / scale;
        }
        NSString *rowTitle = menuDefs[i][0];
        NSString *dictKeyVal = menuDefs[i][1];
        NSString *defVal = menuDefs[i][2];
        NSString *curVal = EValD(menuDict, dictKeyVal, defVal);
        UIButton *row = WPAddEditableRow(menuCard, mcy, w, rowTitle, curVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_MenuNames", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDictKey", dictKeyVal, OBJC_ASSOCIATION_COPY_NONATOMIC);
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

    NSArray *tabDefs = @[
        @[@"微信", @"微信", @"微信"],
        @[@"通讯录", @"通讯录", @"通讯录"],
        @[@"发现", @"发现", @"发现"],
        @[@"我", @"我", @"我"],
    ];
    for (NSUInteger i = 0; i < tabDefs.count; i++) {
        if (i > 0) {
            WPAddSep(bottomCard, bcy, w);
            bcy = round((bcy + 1.0 / scale) * scale) / scale;
        }
        NSString *rowTitle = tabDefs[i][0];
        NSString *dictKeyVal = tabDefs[i][1];
        NSString *defVal = tabDefs[i][2];
        NSString *curVal = EValD(tabDict, dictKeyVal, defVal);
        UIButton *row = WPAddEditableRow(bottomCard, bcy, w, rowTitle, curVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_Tab_Names", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDictKey", dictKeyVal, OBJC_ASSOCIATION_COPY_NONATOMIC);
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