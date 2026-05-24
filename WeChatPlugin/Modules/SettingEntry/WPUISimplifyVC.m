#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Core/LogManager.h"

/// ========== 配置读取辅助 ==========
static inline NSUserDefaults *SD(void) {
    return [NSUserDefaults standardUserDefaults];
}

static inline NSString *SStr(NSString *key) {
    return [SD() stringForKey:key];
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
    NSUserDefaults *d = SD();
    if (dictKey) {
        currentValue = [d dictionaryForKey:nsKey][dictKey];
    }
    if (!currentValue && nsKey) {
        currentValue = [d stringForKey:nsKey];
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
            NSMutableDictionary *dict = [[d dictionaryForKey:nsKey] ?: @{} mutableCopy];
            dict[dictKey] = newText;
            [d setObject:dict forKey:nsKey];
        } else if (nsKey) {
            [d setObject:newText forKey:nsKey];
        }
        [d synchronize];
    }]];

    [topVC presentViewController:alert animated:YES completion:nil];
}

@end


#pragma mark - ========== UI 构建 ==========

static NSString *const kSimplifyEnabledKey = @"SimplifyEnabled";

/// rebuild 标记：在 viewDidLoad 入口检查此 flag
static BOOL _needsRebuildUI = NO;

// 内部前向声明
static void WPUISimplifyBuildUI(id self, SEL _cmd);

#pragma mark - ========== viewDidLoad ==========

static void WPUISimplifyViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    // 如果是 toggle 触发的 rebuild，直接构建 UI 后返回
    if (_needsRebuildUI) {
        _needsRebuildUI = NO;
        WPUISimplifyBuildUI(self, _cmd);
        return;
    }

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"界面简化";

    WPUISimplifyBuildUI(self, _cmd);
}

#pragma mark - ========== buildUI ==========

static void WPUISimplifyBuildUI(id self, SEL _cmd) {
    UIViewController *vc = (UIViewController *)self;
    CGFloat w = vc.view.bounds.size.width;
    CGFloat scale = [UIScreen mainScreen].scale;
    id handler = [WeChatPluginSwitchHandler sharedInstance];

    // 清除旧的 scrollView，重新创建
    UIView *oldSV = objc_getAssociatedObject(self, "buildUISV");
    [oldSV removeFromSuperview];

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];
    objc_setAssociatedObject(self, "buildUISV", sv, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGFloat y = 8;
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    BOOL enabled = [d boolForKey:kSimplifyEnabledKey];

    // ========== 总开关 ==========
    [sv addSubview:WPMakeSectionHeader(@"界面名称简化", y, w)];
    y += 32;

    UIView *switchCard = WPMakeCard(y, w);
    CGFloat scy = 0;

    UILabel *swLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, scy, w - kPad * 2 - 70, kRowH)];
    swLabel.text = @"界面名称简化";
    swLabel.font = [UIFont systemFontOfSize:15];
    swLabel.textColor = WPT1();
    [switchCard addSubview:swLabel];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = enabled;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(w - kPad * 2 - 51, scy + 6.5, 51, 31);
    [sw addTarget:(id)self action:@selector(onSimplifySwitch:) forControlEvents:UIControlEventValueChanged];
    [switchCard addSubview:sw];
    scy += kRowH;

    CGRect scf = switchCard.frame; scf.size.height = scy; switchCard.frame = scf;
    [sv addSubview:switchCard];
    y += scy + 16;

    // ========== 预取字典数据 ==========
    NSDictionary *menuDict = [d dictionaryForKey:@"Simplify_MenuNames"] ?: @{};
    NSDictionary *tabDict = [d dictionaryForKey:@"Simplify_Tab_Names"] ?: @{};
    #define EVal(key, def) (SStr(key) ?: (def))
    #define EValD(dict, dk, def) ((dict)[dk] ?: (def))

    // ========== Section 1: 顶部标签自定义 ==========
    [sv addSubview:WPMakeSectionHeader(@"顶部标签自定义", y, w)];
    y += 32;

    UIView *topBarCard = WPMakeCard(y, w);
    CGFloat tby = 0;
    {
        UIButton *row = WPAddEditableRow(topBarCard, tby, w, @"微信标题", EVal(@"Simplify_MainTitle", @"微信"), handler);
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
    [sv addSubview:WPMakeSectionHeader(@"特殊自定义", y, w)];
    y += 32;

    UIView *specialCard = WPMakeCard(y, w);
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
    [sv addSubview:WPMakeSectionHeader(@"我的页面菜单名称自定义", y, w)];
    y += 32;

    UIView *menuCard = WPMakeCard(y, w);
    CGFloat mcy = 0;
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
    [sv addSubview:WPMakeSectionHeader(@"底部标签自定义", y, w)];
    y += 32;

    UIView *bottomCard = WPMakeCard(y, w);
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

    // 提示文字
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
    footer.text = @"修改后将在下次启动时生效";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    [sv addSubview:footer];
    y += 48;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] WPUISimplifyBuildUI done");
}

#pragma mark - ========== Helper ==========

// 前向声明：onSimplifySwitchIMP 在 class_addMethod 之前定义
static void onSimplifySwitchIMP(id self, SEL _cmd, UISwitch *sender);

@interface WPUISimplifyVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPUISimplifyVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPUISimplifyVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPUISimplifyVC", 0);
        if (subClass) {
            // ⚠️ class_addMethod 必须在 objc_registerClassPair 之前
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPUISimplifyViewDidLoad, "v@:");
            class_addMethod(subClass, NSSelectorFromString(@"onSimplifySwitch:"), (IMP)onSimplifySwitchIMP, "v@:@");
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

// IMP for onSimplifySwitch: — C 函数指针
static void onSimplifySwitchIMP(id self, SEL _cmd, UISwitch *sender) {
    [[NSUserDefaults standardUserDefaults] setBool:sender.on forKey:kSimplifyEnabledKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
    WPLog(@"UI", @"[Toggle] SimplifyEnabled=%d, trigger rebuild", sender.on);
    _needsRebuildUI = YES;
}

@end
