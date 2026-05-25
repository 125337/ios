#import "WPCommonUI.h"
#import "../../Core/LogManager.h"

static NSString *const kAttachLayoutEnabledKey = @"AttachLayoutEnabled";

/// ========== buildUI ==========
static void WPUIAttachLayoutBuildUI(id self, SEL _cmd) {
    UIViewController *vc = (UIViewController *)self;
    CGFloat w = vc.view.bounds.size.width;
    CGFloat scale = [UIScreen mainScreen].scale;
    id handler = [objc_getClass("WeChatPluginSwitchHandler") sharedInstance];
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    BOOL enabled = [d boolForKey:kAttachLayoutEnabledKey];

    // 清除旧的 scrollView
    UIView *oldSV = objc_getAssociatedObject(self, "buildUISV");
    [oldSV removeFromSuperview];

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];
    objc_setAssociatedObject(self, "buildUISV", sv, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGFloat y = 8;

    // ========== 总开关 ==========
    [sv addSubview:WPMakeSectionHeader(@"附件布局优化", y, w)];
    y += 32;

    UIView *switchCard = WPMakeCard(y, w);
    CGFloat scy = 0;

    UILabel *swLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, scy, w - kPad * 2 - 70, kRowH)];
    swLabel.text = @"附件布局优化";
    swLabel.font = [UIFont systemFontOfSize:15];
    swLabel.textColor = WPT1();
    [switchCard addSubview:swLabel];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = enabled;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(w - kPad * 2 - 51, scy + 6.5, 51, 31);
    [sw addTarget:(id)self action:@selector(onAttachLayoutSwitch:) forControlEvents:UIControlEventValueChanged];
    [switchCard addSubview:sw];
    scy += kRowH;

    CGRect scf = switchCard.frame; scf.size.height = scy; switchCard.frame = scf;
    [sv addSubview:switchCard];
    y += scy + 16;

    // ========== 子功能：布局设置 ==========
    UILabel *secHeader = WPMakeSectionHeader(@"布局设置", y, w);
    [sv addSubview:secHeader];
    NSMutableArray *expandViews = [NSMutableArray array];
    [expandViews addObject:secHeader];
    y += 32;

    UIView *layoutCard = WPMakeCard(y, w);
    [expandViews addObject:layoutCard];
    CGFloat lcy = 0;

    NSString *colsKey = @"AttachLayout_Columns";
    NSString *rowsKey = @"AttachLayout_Rows";
    NSString *colsVal = [d stringForKey:colsKey] ?: @"";
    NSString *rowsVal = [d stringForKey:rowsKey] ?: @"";

    // 每行列数
    {
        UIButton *row = WPAddEditableRowWithArrow(layoutCard, lcy, w, @"每行列数", colsVal, handler);
        objc_setAssociatedObject(row, "editNSKey", colsKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        lcy += kRowH;
    }
    // 显示行数
    {
        WPAddSep(layoutCard, lcy, w);
        lcy = round((lcy + 1.0 / scale) * scale) / scale;
        UIButton *row = WPAddEditableRowWithArrow(layoutCard, lcy, w, @"显示行数", rowsVal, handler);
        objc_setAssociatedObject(row, "editNSKey", rowsKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        lcy += kRowH;
    }

    CGRect lcf = layoutCard.frame; lcf.size.height = lcy; layoutCard.frame = lcf;
    [sv addSubview:layoutCard];
    y += lcy + 16;

    // 绑定 expandViews + 设置初始 hidden
    objc_setAssociatedObject(sw, "expandViews", expandViews, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    for (UIView *v in expandViews) {
        v.hidden = !enabled;
    }

    // 提示文字
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
    footer.text = @"修改后将在下次启动时生效";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    [sv addSubview:footer];
    y += 48;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] WPUIAttachLayoutBuildUI done (enabled=%d)", enabled);
}


#pragma mark - ========== 开关响应 ==========

static void onAttachLayoutSwitchIMP(id self, SEL _cmd, UISwitch *sender) {
    [[NSUserDefaults standardUserDefaults] setBool:sender.on forKey:kAttachLayoutEnabledKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
    WPLog(@"UI", @"[AttachLayout] Toggle=%d", sender.on);

    NSArray *expandViews = objc_getAssociatedObject(sender, "expandViews");
    for (UIView *v in expandViews) {
        v.hidden = !sender.on;
    }
    // 标记 rebuild（下次 viewDidLoad 完全重建）
    objc_setAssociatedObject(sender, "needsRebuild", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


#pragma mark - ========== viewDidLoad ==========

static void WPUIAttachLayoutViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"附件布局优化";

    WPUIAttachLayoutBuildUI(self, _cmd);
}


#pragma mark - ========== Helper ==========

@interface WPUIAttachLayoutVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPUIAttachLayoutVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPUIAttachLayoutVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPUIAttachLayoutVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPUIAttachLayoutViewDidLoad, "v@:");
            class_addMethod(subClass, NSSelectorFromString(@"onAttachLayoutSwitch:"), (IMP)onAttachLayoutSwitchIMP, "v@:@");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPUIAttachLayoutVC class created");
        } else {
            WPLog(@"UI", @"[Sub] WPUIAttachLayoutVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end