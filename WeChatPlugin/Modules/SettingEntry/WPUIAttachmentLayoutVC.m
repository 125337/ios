#import "WPCommonUI.h"
#import "../../Core/LogManager.h"

static NSString *const kAttachLayoutEnabledKey = @"AttachLayoutEnabled";

/// ========== buildUI ==========
static void WPUIAttachLayoutBuildUI(id self, SEL _cmd);

#pragma mark - ========== viewDidLoad ==========

static void WPUIAttachLayoutViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"附件布局优化";

    WPUIAttachLayoutBuildUI(self, _cmd);
}

#pragma mark - ========== buildUI ==========

static void WPUIAttachLayoutBuildUI(id self, SEL _cmd) {
    UIViewController *vc = (UIViewController *)self;
    CGFloat w = vc.view.bounds.size.width;
    CGFloat scale = [UIScreen mainScreen].scale;
    id handler = [objc_getClass("WeChatPluginSwitchHandler") sharedInstance];
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    BOOL enabled = [d boolForKey:kAttachLayoutEnabledKey];

    // 清除旧的 scrollView，重新创建
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

    WPAddSwitchRow(switchCard, scy, w, @"附件布局优化", kAttachLayoutEnabledKey, enabled, nil,
        ^(BOOL isOn) {
            [[NSUserDefaults standardUserDefaults] setBool:isOn forKey:kAttachLayoutEnabledKey];
            [[NSUserDefaults standardUserDefaults] synchronize];
            WPUIAttachLayoutBuildUI(self, NULL);
        });
    scy += kRowH;

    CGRect scf = switchCard.frame; scf.size.height = scy; switchCard.frame = scf;
    [sv addSubview:switchCard];
    y += scy + 8;

    // 关闭状态：只显示开关卡片
    if (!enabled) {
        UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
        footer.text = @"修改后将在下次启动时生效";
        footer.font = [UIFont systemFontOfSize:12];
        footer.textColor = WPT3();
        footer.textAlignment = NSTextAlignmentCenter;
        [sv addSubview:footer];
        y += 48;
        sv.contentSize = CGSizeMake(w, y);
        WPLog(@"UI", @"[Sub] WPUIAttachLayoutBuildUI done (enabled=0, switch only)");
        return;
    }

    // ========== 子功能：布局设置 ==========
    UILabel *secHeader = WPMakeSectionHeader(@"布局设置", y, w);
    [sv addSubview:secHeader];
    y += 32;

    UIView *layoutCard = WPMakeCard(y, w);
    CGFloat lcy = 0;

    NSString *colsKey = @"AttachLayout_Columns";
    NSString *rowsKey = @"AttachLayout_Rows";
    NSString *colsVal = [d stringForKey:colsKey] ?: @"";
    NSString *rowsVal = [d stringForKey:rowsKey] ?: @"";

    // 每行列数
    {
        UIButton *row = WPAddEditableRowWithArrow(layoutCard, lcy, w, @"每行列数", colsVal, handler);
        objc_setAssociatedObject(row, "editNSKey", colsKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDefault", @"", OBJC_ASSOCIATION_COPY_NONATOMIC);
        lcy += kRowH;
    }
    // 显示行数
    {
        WPAddSep(layoutCard, lcy, w);
        lcy = round((lcy + 1.0 / scale) * scale) / scale;
        UIButton *row = WPAddEditableRowWithArrow(layoutCard, lcy, w, @"显示行数", rowsVal, handler);
        objc_setAssociatedObject(row, "editNSKey", rowsKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDefault", @"", OBJC_ASSOCIATION_COPY_NONATOMIC);
        lcy += kRowH;
    }

    CGRect lcf = layoutCard.frame; lcf.size.height = lcy; layoutCard.frame = lcf;
    [sv addSubview:layoutCard];
    y += lcy + 8;

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