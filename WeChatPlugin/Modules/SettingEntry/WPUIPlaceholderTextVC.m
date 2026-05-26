#import "WPCommonUI.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

static NSString *const kPlaceholderTextEnabledKey = @"PlaceholderTextEnabled";

/// ========== 颜色选择器代理 ==========
/// 与消息时间设置中的颜色选择器一致，使用 UIColorPickerViewController (iOS 14+)
@interface _PlaceholderColorDelegate : NSObject <UIColorPickerViewControllerDelegate>
@end
@implementation _PlaceholderColorDelegate
- (void)colorPickerViewController:(UIColorPickerViewController *)vc
                   didSelectColor:(UIColor *)color
                    continuously:(BOOL)continuously {
    if (continuously) return;
    UIButton *btn = objc_getAssociatedObject(vc, "colorButton");
    NSString *key = objc_getAssociatedObject(vc, "colorKey");
    if (btn && color) btn.backgroundColor = color;
    if (!key) return;
    NSString *hex = [[PluginConfig shared] hexFromColor:color];
    if (!hex) hex = @"#808080";
    [[NSUserDefaults standardUserDefaults] setObject:hex forKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
}
@end

/// 全局保留代理实例
static _PlaceholderColorDelegate *_colorDelegate = nil;

/// ========== buildUI ==========
static void WPUIPlaceholderTextBuildUI(id self, SEL _cmd);

#pragma mark - ========== viewDidLoad ==========

static void WPUIPlaceholderTextViewDidLoad(id self, SEL _cmd) {
    Class uiVC = objc_getClass("UIViewController");
    Method m = class_getInstanceMethod(uiVC, _cmd);
    if (m) ((void (*)(id, SEL))method_getImplementation(m))(self, _cmd);

    UIViewController *vc = (UIViewController *)self;
    vc.title = @"文本占位";

    // 全局保留代理实例
    if (!_colorDelegate) _colorDelegate = [[_PlaceholderColorDelegate alloc] init];

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

    UILabel *swLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, scy, w - kPad * 2 - 70, kRowH)];
    swLabel.text = @"显示占位文本";
    swLabel.font = [UIFont systemFontOfSize:15];
    swLabel.textColor = WPT1();
    [switchCard addSubview:swLabel];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = enabled;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(w - kPad * 3 - 51, scy + 6.5, 51, 31);
    [sw addTarget:(id)self action:@selector(onPlaceholderSwitch:) forControlEvents:UIControlEventValueChanged];
    [switchCard addSubview:sw];
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
        UILabel *boldLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, ccy, w - kPad * 2 - 70, kRowH)];
        boldLabel.text = @"使用粗体文字";
        boldLabel.font = [UIFont systemFontOfSize:15];
        boldLabel.textColor = WPT1();
        [contentCard addSubview:boldLabel];

        UISwitch *boldSw = [[UISwitch alloc] init];
        boldSw.on = boldOn;
        boldSw.onTintColor = WPSwOn();
        boldSw.frame = CGRectMake(w - kPad * 3 - 51, ccy + 6.5, 51, 31);
        [boldSw addTarget:(id)self action:@selector(onBoldFontSwitch:) forControlEvents:UIControlEventValueChanged];
        [contentCard addSubview:boldSw];
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

        if (@available(iOS 14.0, *)) {
            UIButton *colorBtn = [UIButton buttonWithType:UIButtonTypeCustom];
            colorBtn.frame = CGRectMake(w - kPad * 2 - 36, ccy + (kRowH - 30) / 2, 30, 30);
            colorBtn.layer.cornerRadius = 15;
            colorBtn.layer.borderWidth = 1.0;
            colorBtn.layer.borderColor = [UIColor colorWithRed:0.82 green:0.82 blue:0.84 alpha:1.0].CGColor;
            colorBtn.backgroundColor = currentColor;
            colorBtn.clipsToBounds = YES;
            objc_setAssociatedObject(colorBtn, "colorKey", @"PlaceholderText_ColorHex", OBJC_ASSOCIATION_COPY_NONATOMIC);
            [colorBtn addTarget:(id)self action:@selector(onPlaceholderColorTap:) forControlEvents:UIControlEventTouchUpInside];
            [contentCard addSubview:colorBtn];
        }
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


#pragma mark - ========== 开关响应 ==========

static void onPlaceholderSwitchIMP(id self, SEL _cmd, UISwitch *sender) {
    [[NSUserDefaults standardUserDefaults] setBool:sender.on forKey:kPlaceholderTextEnabledKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
    WPLog(@"UI", @"[Placeholder] Toggle=%d, rebuilding UI", sender.on);
    WPUIPlaceholderTextBuildUI(self, _cmd);
}

static void onBoldFontSwitchIMP(id self, SEL _cmd, UISwitch *sender) {
    [[NSUserDefaults standardUserDefaults] setBool:sender.on forKey:@"PlaceholderText_Bold"];
    [[NSUserDefaults standardUserDefaults] synchronize];
    WPLog(@"UI", @"[Placeholder] Bold=%d", sender.on);
}

/// 颜色按钮点击 → 打开 iOS 14 颜色选择器
static void onPlaceholderColorTapIMP(id self, SEL _cmd, UIButton *sender) {
    if (@available(iOS 14.0, *)) {
        UIViewController *vc = (UIViewController *)self;
        UIColorPickerViewController *picker = [[UIColorPickerViewController alloc] init];
        picker.selectedColor = sender.backgroundColor ?: [UIColor grayColor];
        picker.supportsAlpha = NO;
        objc_setAssociatedObject(picker, "colorButton", sender, OBJC_ASSOCIATION_ASSIGN);
        objc_setAssociatedObject(picker, "colorKey", objc_getAssociatedObject(sender, "colorKey"), OBJC_ASSOCIATION_COPY_NONATOMIC);
        picker.delegate = _colorDelegate;
        [vc presentViewController:picker animated:YES completion:nil];
    }
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
            class_addMethod(subClass, NSSelectorFromString(@"onPlaceholderSwitch:"), (IMP)onPlaceholderSwitchIMP, "v@:@");
            class_addMethod(subClass, NSSelectorFromString(@"onBoldFontSwitch:"), (IMP)onBoldFontSwitchIMP, "v@:@");
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