#import "WPCommonUI.h"
#import "SettingEntryHook.h"
#import "../../Core/LogManager.h"
#import "../../Core/WeChatRestartHelper.h"
#import <objc/runtime.h>

/// ========== 配置读取辅助 ==========
static inline NSUserDefaults *SD(void) {
    return [NSUserDefaults standardUserDefaults];
}

static inline NSString *SStr(NSString *key) {
    return [SD() stringForKey:key];
}

static BOOL _simplifyPageDidModify = NO;

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

    NSUserDefaults *d = SD();

    NSString *currentVal = valueLabel.text;
    NSString *prefill = (currentVal && currentVal.length > 0) ? currentVal : @"";

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.text = prefill;
        tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    __unsafe_unretained UILabel *weakLabel = valueLabel;
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *newText = alert.textFields.firstObject.text;
        if (weakLabel) {
            weakLabel.text = (newText && newText.length > 0) ? newText : @"";
        }

        if (dictKey && nsKey) {
            NSMutableDictionary *dict = [[d dictionaryForKey:nsKey] ?: @{} mutableCopy];
            if (newText && newText.length > 0) {
                dict[dictKey] = newText;
            } else {
                [dict removeObjectForKey:dictKey];
            }
            [d setObject:dict forKey:nsKey];
        } else if (nsKey) {
            if (newText && newText.length > 0) {
                [d setObject:newText forKey:nsKey];
            } else {
                [d removeObjectForKey:nsKey];
            }
        }
        [d synchronize];
        
        // 标记已修改，返回时弹窗
        _simplifyPageDidModify = YES;
    }]];
}

@end


#pragma mark - ========== UI 构建 ==========

static NSString *const kSimplifyEnabledKey = @"SimplifyEnabled";

static void WPUISimplifyBuildUI(id self, SEL _cmd);

#pragma mark - ========== viewDidLoad ==========

static void WPUISimplifyViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

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
    NSUserDefaults *d = SD();
    BOOL enabled = [d boolForKey:kSimplifyEnabledKey];

    // 清除旧的 scrollView，重新创建
    UIView *oldSV = objc_getAssociatedObject(self, "buildUISV");
    [oldSV removeFromSuperview];

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];
    objc_setAssociatedObject(self, "buildUISV", sv, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGFloat y = 8;

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
    sw.frame = CGRectMake(w - kPad * 3 - 51, scy + 6.5, 51, 31);
    [sw addTarget:(id)self action:@selector(onSimplifySwitch:) forControlEvents:UIControlEventValueChanged];
    [switchCard addSubview:sw];
    scy += kRowH;

    CGRect scf = switchCard.frame; scf.size.height = scy; switchCard.frame = scf;
    [sv addSubview:switchCard];
    y += scy + 8;

    // 问题3：开关关闭时只显示开关卡片，不显示下方配置区
    if (!enabled) {
        UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
        footer.text = @"修改后将在下次启动时生效";
        footer.font = [UIFont systemFontOfSize:12];
        footer.textColor = WPT3();
        footer.textAlignment = NSTextAlignmentCenter;
        [sv addSubview:footer];
        y += 48;
        sv.contentSize = CGSizeMake(w, y);
        WPLog(@"UI", @"[Sub] WPUISimplifyBuildUI done (enabled=0, switch only)");
        return;
    }

    // ========== Section 1: 顶部标签自定义 ==========
    UILabel *sec1Header = WPMakeSectionHeader(@"顶部标签自定义", y, w);
    [sv addSubview:sec1Header];
    y += 32;

    UIView *topBarCard = WPMakeCard(y, w);
    CGFloat tby = 0;

    // 顶部标题
    NSArray *topDefs = @[
        @[@"微信标题",      @"Simplify_MainTitle"],
        @[@"通讯录标题",    @"Simplify_ContactsTitle"],
        @[@"发现标题",      @"Simplify_DiscoverTitle"],
    ];
    for (NSUInteger i = 0; i < topDefs.count; i++) {
        if (i > 0) {
            WPAddSep(topBarCard, tby, w);
            tby = round((tby + 1.0 / scale) * scale) / scale;
        }
        NSString *rowTitle  = topDefs[i][0];
        NSString *nsKey     = topDefs[i][1];
        NSString *curVal    = SStr(nsKey);
        NSString *showVal   = (curVal && curVal.length > 0) ? curVal : @"";
        UIButton *row = WPAddEditableRowWithArrow(topBarCard, tby, w, rowTitle, showVal, handler);
        objc_setAssociatedObject(row, "editNSKey", nsKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        tby += kRowH;
    }

    CGRect tbf = topBarCard.frame; tbf.size.height = tby; topBarCard.frame = tbf;
    [sv addSubview:topBarCard];
    y += tby + 8;

    // ========== Section 2: 特殊自定义 ==========
    UILabel *sec2Header = WPMakeSectionHeader(@"特殊自定义", y, w);
    [sv addSubview:sec2Header];
    y += 32;

    UIView *specialCard = WPMakeCard(y, w);
    CGFloat spy = 0;

    NSString *fcCur = SStr(@"Simplify_FriendsCount");
    NSString *fcShow = (fcCur && fcCur.length > 0) ? fcCur : @"";
    UIButton *fcRow = WPAddEditableRowWithArrow(specialCard, spy, w, @"通讯录底部好友", fcShow, handler);
    objc_setAssociatedObject(fcRow, "editNSKey", @"Simplify_FriendsCount", OBJC_ASSOCIATION_COPY_NONATOMIC);
    spy += kRowH;

    CGRect spf = specialCard.frame; spf.size.height = spy; specialCard.frame = spf;
    [sv addSubview:specialCard];
    y += spy + 8;

    // ========== Section 3: 我的页面菜单名称自定义 ==========
    UILabel *sec3Header = WPMakeSectionHeader(@"我的页面菜单名称自定义", y, w);
    [sv addSubview:sec3Header];
    y += 32;

    UIView *menuCard = WPMakeCard(y, w);
    CGFloat mcy = 0;

    NSDictionary *menuDict = [d dictionaryForKey:@"Simplify_MenuNames"] ?: @{};
    NSArray *menuDefs = @[
        @[@"服务/支付与服务", @"服务"],
        @[@"收藏",             @"收藏"],
        @[@"朋友圈",           @"朋友圈"],
        @[@"视频号",           @"视频号"],
        @[@"卡片/订单与卡包", @"卡包"],
        @[@"表情",             @"表情"],
        @[@"设置",             @"设置"],
        @[@"插件",             @"插件"],
    ];
    for (NSUInteger i = 0; i < menuDefs.count; i++) {
        if (i > 0) {
            WPAddSep(menuCard, mcy, w);
            mcy = round((mcy + 1.0 / scale) * scale) / scale;
        }
        NSString *rowTitle   = menuDefs[i][0];
        NSString *dictKeyVal = menuDefs[i][1];
        NSString *curVal     = menuDict[dictKeyVal];
        NSString *showVal    = (curVal && curVal.length > 0) ? curVal : @"";
        UIButton *row = WPAddEditableRowWithArrow(menuCard, mcy, w, rowTitle, showVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_MenuNames", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDictKey", dictKeyVal, OBJC_ASSOCIATION_COPY_NONATOMIC);
        mcy += kRowH;
    }

    CGRect mcf = menuCard.frame; mcf.size.height = mcy; menuCard.frame = mcf;
    [sv addSubview:menuCard];
    y += mcy + 8;

    // ========== Section 4: 底部标签自定义 ==========
    UILabel *sec4Header = WPMakeSectionHeader(@"底部标签自定义", y, w);
    [sv addSubview:sec4Header];
    y += 32;

    UIView *bottomCard = WPMakeCard(y, w);
    CGFloat bcy = 0;

    NSDictionary *tabDict = [d dictionaryForKey:@"Simplify_Tab_Names"] ?: @{};
    NSArray *tabDefs = @[
        @[@"微信",   @"微信"],
        @[@"通讯录", @"通讯录"],
        @[@"发现",   @"发现"],
        @[@"我",     @"我"],
    ];
    for (NSUInteger i = 0; i < tabDefs.count; i++) {
        if (i > 0) {
            WPAddSep(bottomCard, bcy, w);
            bcy = round((bcy + 1.0 / scale) * scale) / scale;
        }
        NSString *rowTitle   = tabDefs[i][0];
        NSString *dictKeyVal = tabDefs[i][1];
        NSString *curVal     = tabDict[dictKeyVal];
        NSString *showVal    = (curVal && curVal.length > 0) ? curVal : @"";
        UIButton *row = WPAddEditableRowWithArrow(bottomCard, bcy, w, rowTitle, showVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"Simplify_Tab_Names", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDictKey", dictKeyVal, OBJC_ASSOCIATION_COPY_NONATOMIC);
        bcy += kRowH;
    }

    CGRect bcf = bottomCard.frame; bcf.size.height = bcy; bottomCard.frame = bcf;
    [sv addSubview:bottomCard];
    y += bcy + 8;

    // 提示文字
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
    footer.text = @"修改后将在下次启动时生效";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    [sv addSubview:footer];
    y += 48;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] WPUISimplifyBuildUI done (enabled=%d)", enabled);
}


#pragma mark - ========== 开关响应 ==========

static void onSimplifySwitchIMP(id self, SEL _cmd, UISwitch *sender) {
    [[NSUserDefaults standardUserDefaults] setBool:sender.on forKey:kSimplifyEnabledKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
    _simplifyPageDidModify = YES;
    WPLog(@"UI", @"[Toggle] SimplifyEnabled=%d, rebuilding UI", sender.on);

    // 问题3：展开/关闭时完全重建界面，确保布局、scrollView contentSize 正确
    WPUISimplifyBuildUI(self, _cmd);
}


#pragma mark - ========== viewWillDisappear ==========

static void WPUISimplifyViewWillDisappear(id self, SEL _cmd, BOOL animated) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, NSSelectorFromString(@"viewWillDisappear:"));
    if (m) ((void (*)(id, SEL, BOOL))method_getImplementation(m))(self, _cmd, animated);

    if (_simplifyPageDidModify) {
        _simplifyPageDidModify = NO;
        [WeChatRestartHelper showRestartAlertFromVC:(UIViewController *)self];
    }
}

#pragma mark - ========== Helper ==========

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
            class_addMethod(subClass, NSSelectorFromString(@"viewWillDisappear:"), (IMP)WPUISimplifyViewWillDisappear, "v@:B");
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

@end
