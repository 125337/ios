#import "WPCommonUI.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/WPColorPicker.h"
#import "../../Core/LogManager.h"

static NSString *const kPlaceholderTextEnabledKey = @"PlaceholderTextEnabled";

/// ========== buildUI ==========
static void WPUIPlaceholderTextBuildUI(id self, SEL _cmd);

#pragma mark - ========== viewDidLoad ==========

static void WPUIPlaceholderTextViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"文本占位";

    WPUIPlaceholderTextBuildUI(self, _cmd);
}

#pragma mark - ========== buildUI ==========

static void WPUIPlaceholderTextBuildUI(id self, SEL _cmd) {
    UIViewController *vc = (UIViewController *)self;
    CGFloat w = vc.view.bounds.size.width;
    CGFloat scale = [UIScreen mainScreen].scale;
    id handler = [objc_getClass("WeChatPluginSwitchHandler") sharedInstance];
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    BOOL enabled = [d boolForKey:kPlaceholderTextEnabledKey];

    // 清除旧的 scrollView，重新创建
    UIView *oldSV = objc_getAssociatedObject(self, "buildUISV");
    [oldSV removeFromSuperview];

    UIScrollView *sv = WPMakeSV(vc);
    [vc.view addSubview:sv];
    objc_setAssociatedObject(self, "buildUISV", sv, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGFloat y = 8;

    // ========== 总开关 ==========
    [sv addSubview:WPMakeSectionHeader(@"占位文本设置", y, w)];
    y += 32;

    UIView *switchCard = WPMakeCard(y, w);
    CGFloat scy = 0;

    WPAddSwitchRow(switchCard, scy, w, @"显示占位文本", kPlaceholderTextEnabledKey, enabled, nil,
        ^(BOOL isOn) {
            [[NSUserDefaults standardUserDefaults] setBool:isOn forKey:kPlaceholderTextEnabledKey];
            [[NSUserDefaults standardUserDefaults] synchronize];
            WPUIPlaceholderTextBuildUI(self, NULL);
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
        WPLog(@"UI", @"[Sub] WPUIPlaceholderTextBuildUI done (enabled=0, switch only)");
        return;
    }

    // ========== 子功能：占位文本设置 ==========
    [sv addSubview:WPMakeSectionHeader(@"占位文本", y, w)];
    y += 32;

    UIView *contentCard = WPMakeCard(y, w);
    CGFloat ccy = 0;

    // 1. 占位文本
    {
        NSString *textVal = [d stringForKey:@"PlaceholderText_Text"] ?: @"";
        UIButton *row = WPAddEditableRowWithArrow(contentCard, ccy, w, @"占位文本", textVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"PlaceholderText_Text", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDefault", @"", OBJC_ASSOCIATION_COPY_NONATOMIC);
        ccy += kRowH;
    }

    // 2. 使用粗体文字 (子开关)
    {
        WPAddSep(contentCard, ccy, w);
        ccy = round((ccy + 1.0 / scale) * scale) / scale;

        BOOL boldOn = [d boolForKey:@"PlaceholderText_Bold"];
        WPAddSwitchRow(contentCard, ccy, w, @"使用粗体文字", @"PlaceholderText_Bold", boldOn, nil,
            ^(BOOL isOn) {
                [[NSUserDefaults standardUserDefaults] setBool:isOn forKey:@"PlaceholderText_Bold"];
                [[NSUserDefaults standardUserDefaults] synchronize];
            });
        ccy += kRowH;
    }

    // 3. 字体大小
    {
        WPAddSep(contentCard, ccy, w);
        ccy = round((ccy + 1.0 / scale) * scale) / scale;
        NSString *fontSizeVal = [d stringForKey:@"PlaceholderText_FontSize"] ?: @"";
        UIButton *row = WPAddEditableRowWithArrow(contentCard, ccy, w, @"字体大小", fontSizeVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"PlaceholderText_FontSize", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDefault", @"", OBJC_ASSOCIATION_COPY_NONATOMIC);
        ccy += kRowH;
    }

    // 4. 字体颜色 (颜色选择器，与消息时间一致)
    {
        WPAddSep(contentCard, ccy, w);
        ccy = round((ccy + 1.0 / scale) * scale) / scale;

        UILabel *colorLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, ccy, w - kPad * 2 - 56, kRowH)];
        colorLabel.text = @"字体颜色";
        colorLabel.font = [UIFont systemFontOfSize:15];
        colorLabel.textColor = WPT1();
        [contentCard addSubview:colorLabel];

        NSString *colorHex = [d stringForKey:@"PlaceholderText_ColorHex"] ?: @"#808080";
        UIColor *currentColor = [[PluginConfig shared] colorFromHex:colorHex] ?: [UIColor grayColor];

        UIButton *colorBtn = [WPColorPicker makeColorButtonWithColor:currentColor];
        colorBtn.frame = CGRectMake(w - kPad * 2 - 36, ccy + (kRowH - 30) / 2, 30, 30);
        [colorBtn addTarget:(id)self action:@selector(onPlaceholderColorTap:) forControlEvents:UIControlEventTouchUpInside];
        [contentCard addSubview:colorBtn];
        ccy += kRowH;
    }

    // 5. 文字透明度
    {
        WPAddSep(contentCard, ccy, w);
        ccy = round((ccy + 1.0 / scale) * scale) / scale;
        NSString *alphaVal = [d stringForKey:@"PlaceholderText_Alpha"] ?: @"";
        UIButton *row = WPAddEditableRowWithArrow(contentCard, ccy, w, @"文字透明度", alphaVal, handler);
        objc_setAssociatedObject(row, "editNSKey", @"PlaceholderText_Alpha", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(row, "editDefault", @"", OBJC_ASSOCIATION_COPY_NONATOMIC);
        ccy += kRowH;
    }

    CGRect ccf = contentCard.frame; ccf.size.height = ccy; contentCard.frame = ccf;
    [sv addSubview:contentCard];
    y += ccy + 8;

    // 提示文字
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
    footer.text = @"修改后将在下次启动时生效";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.textAlignment = NSTextAlignmentCenter;
    [sv addSubview:footer];
    y += 48;

    sv.contentSize = CGSizeMake(w, y);
    WPLog(@"UI", @"[Sub] WPUIPlaceholderTextBuildUI done (enabled=%d)", enabled);
}

/// 颜色按钮点击 → 使用统一颜色选择器
static void onPlaceholderColorTapIMP(id self, SEL _cmd, UIButton *sender) {
    UIViewController *vc = (UIViewController *)self;
    UIColor *currentColor = sender.backgroundColor ?: [UIColor grayColor];
    
    [WPColorPicker presentOnViewController:vc
                             currentColor:currentColor
                             sourceButton:sender
                               onSelected:^(UIColor *color, NSString *hex) {
        [[NSUserDefaults standardUserDefaults] setObject:hex forKey:@"PlaceholderText_ColorHex"];
        [[NSUserDefaults standardUserDefaults] synchronize];
    }];
}


#pragma mark - ========== Helper ==========

@interface WPUIPlaceholderTextVCHelper : NSObject
+ (UIViewController *)makeVC;
@end

@implementation WPUIPlaceholderTextVCHelper

+ (UIViewController *)makeVC {
    Class subClass = objc_getClass("WPUIPlaceholderTextVC");
    if (!subClass) {
        subClass = objc_allocateClassPair(WPGetBaseClass(), "WPUIPlaceholderTextVC", 0);
        if (subClass) {
            class_addMethod(subClass, NSSelectorFromString(@"viewDidLoad"), (IMP)WPUIPlaceholderTextViewDidLoad, "v@:");
            class_addMethod(subClass, NSSelectorFromString(@"onPlaceholderColorTap:"), (IMP)onPlaceholderColorTapIMP, "v@:@");
            objc_registerClassPair(subClass);
            WPLog(@"UI", @"[Sub] WPUIPlaceholderTextVC class created");
        } else {
            WPLog(@"UI", @"[Sub] WPUIPlaceholderTextVC class create FAILED");
        }
    }
    if (subClass) {
        return [[subClass alloc] init];
    }
    return nil;
}

@end