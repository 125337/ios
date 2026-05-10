#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Config/WPColors.h"
#import "../../Settings/Common/WPBorderLayer.h"

static const CGFloat kPad = 18.0;
static const CGFloat kRadius = 12.0;
static const CGFloat kRowH = 44.0;

#define WPBgColor() WPBackgroundColor()
#define WPCardBg() WPCardBackgroundColor()
#define WPT1() WPTextPrimaryColor()
#define WPT2() WPTextSecondaryColor()
#define WPT3() WPTextTertiaryColor()
#define WPAccent() WPAccentColor()
#define WPSwOn() WPSwitchOnColor()
#define WPSepColor() WPSeparatorColor()

__attribute__((unused))
static Class WPGetBaseClass(void) {
    Class cls = objc_getClass("MMUIViewController");
    if (cls) return cls;
    return objc_getClass("UIViewController");
}

__attribute__((unused))
static UIScrollView *WPMakeSV(UIViewController *vc) {
    UIScrollView *sv = [[UIScrollView alloc] initWithFrame:vc.view.bounds];
    sv.backgroundColor = WPBgColor();
    sv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    sv.alwaysBounceVertical = YES;
    if (@available(iOS 11.0, *)) {
        sv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAutomatic;
    }
    return sv;
}

__attribute__((unused))
static UIView *WPMakeCard(CGFloat top, CGFloat w) {
    UIView *c = [[UIView alloc] initWithFrame:CGRectMake(kPad, top, w - kPad * 2, 0)];
    c.backgroundColor = WPCardBg();
    c.layer.cornerRadius = kRadius;
    if (@available(iOS 13.0, *)) c.layer.cornerCurve = kCACornerCurveContinuous;
    c.clipsToBounds = YES;
    return c;
}

__attribute__((unused))
static UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w) {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 4, top, w - kPad * 2 - 8, 20)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = WPT2();
    return l;
}

__attribute__((unused))
static void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(cw - kPad * 2 - 51, cy + 6.5, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:target action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [card addSubview:sw];
}

__attribute__((unused))
static void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 30, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 20, cy, 16, kRowH)];
    arrow.text = @"\u203A";
    arrow.font = [UIFont systemFontOfSize:20];
    arrow.textColor = WPT3();
    [card addSubview:arrow];

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "action", action, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onNavigate:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
}

__attribute__((unused))
static void WPAddSep(UIView *card, CGFloat cy, CGFloat cw) {
    CGFloat cardW = cw - kPad * 2;
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelY = round(cy * scale) / scale;
    CGFloat onePixel = 1.0 / scale;
    UIView *sepView = [[UIView alloc] initWithFrame:CGRectMake(kPad, pixelY, cardW - kPad, onePixel)];
    sepView.backgroundColor = WPSepColor();
    [card addSubview:sepView];
}

__attribute__((unused))
static void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, 160, kRowH)];
    l.text = left;
    l.font = [UIFont systemFontOfSize:15 weight:UIFontWeightMedium];
    l.textColor = WPT1();
    [card addSubview:l];

    UILabel *r = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 160, cy, 144, kRowH)];
    r.text = right;
    r.font = [UIFont systemFontOfSize:13];
    r.textColor = WPT2();
    r.textAlignment = NSTextAlignmentRight;
    [card addSubview:r];
}
