#import "WPCommonUI.h"
#import <QuartzCore/QuartzCore.h>
#import "../../Core/LogManager.h"

/// UISwitch block 回调桥接（MRC 安全）
@interface _WPBlockSwitchTarget : NSObject
@property (nonatomic, copy) void(^action)(BOOL isOn);
@end
@implementation _WPBlockSwitchTarget
- (void)fire:(UISwitch *)sender {
    if (self.action) self.action(sender.on);
}
@end

const CGFloat kPad = 16.0;
const CGFloat kRadius = 10.0;
const CGFloat kRowH = 44.0;

Class WPGetBaseClass(void) {
    Class cls = objc_getClass("MMUIViewController");
    if (cls) return cls;
    return objc_getClass("UIViewController");
}

UIScrollView *WPMakeSV(UIViewController *vc) {
    UIScrollView *sv = [[UIScrollView alloc] initWithFrame:vc.view.bounds];
    sv.backgroundColor = WPBgColor();
    sv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    sv.alwaysBounceVertical = YES;
    if (@available(iOS 11.0, *)) {
        sv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAutomatic;
    }
    return sv;
}

UIView *WPMakeCard(CGFloat top, CGFloat w) {
    UIView *c = [[UIView alloc] initWithFrame:CGRectMake(kPad, top, w - kPad * 2, 0)];
    c.backgroundColor = WPCardBg();
    c.layer.cornerRadius = kRadius;
    if (@available(iOS 13.0, *)) c.layer.cornerCurve = kCACornerCurveContinuous;
    c.clipsToBounds = YES;
    return c;
}

UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w) {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 4, top, w - kPad * 2 - 8, 20)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = WPT2();
    return l;
}

void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target,
                    void(^onChanged)(BOOL isOn)) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(cw - kPad * 3 - 51, cy + 6.5, 51, 31);

    if (onChanged) {
        _WPBlockSwitchTarget *bridge = [[_WPBlockSwitchTarget alloc] init];
        bridge.action = onChanged;
        objc_setAssociatedObject(sw, "wp_bridge", bridge, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [sw addTarget:bridge action:@selector(fire:) forControlEvents:UIControlEventValueChanged];
    } else {
        objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [sw addTarget:target action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    }
    [card addSubview:sw];
}

#pragma mark - 公共箭头

#pragma mark - 微信原生箭头捕获

// 运行时捕获微信 cell 的 accessory 箭头图，供所有行复用（与 WCR 借用微信 cell 框架同源的视觉）
#import <string.h>
#import <stdlib.h>

static UIImage *g_wcArrowImage = nil;
static IMP orig_UICTV_setAV = NULL;
static IMP orig_MMTV_setAV = NULL;
static IMP orig_UICTV_setAT = NULL;
static IMP orig_MMTV_setAT = NULL;
static IMP orig_MMTV_layoutSV = NULL;
static int g_atProbeLeft = 3;   // setAccessoryType 探测剩余次数（探完自动摘 hook，零常驻开销）
static int g_svDumpLeft = 10;   // 子视图树 dump 剩余次数（每 cell 类一次，探完自动摘 hook）

// 捕获条件：UIImage 且尺寸像箭头（窄长小图）；命中后记录日志（含尝试取资源名，便于后续直接 imageNamed）
static void wpTryCaptureArrowImage(UIView *av) {
    if (!av || g_wcArrowImage) return;
    if (![av isKindOfClass:[UIImageView class]]) {
        for (UIView *sv in av.subviews) {
            WPLog(@"CommonUI", @"[WCArrow] accessory 子视图: %@", NSStringFromClass([sv class]));
        }
        return;
    }
    UIImage *img = [(UIImageView *)av image];
    if (!img) return;
    CGFloat iw = img.size.width, ih = img.size.height;
    if (iw < 4 || iw > 16 || ih < 8 || ih > 24) {
        WPLog(@"CommonUI", @"[WCArrow] accessory 图片尺寸不像箭头 (%gx%g) 跳过", iw, ih);
        return;
    }
    g_wcArrowImage = img;
    NSString *nm = nil;
    @try { nm = [img valueForKey:@"_imageName"]; } @catch (NSException *e) {}
    WPLog(@"CommonUI", @"[WCArrow] 捕获微信箭头 %gx%g@%dx name=%@", iw, ih, (int)img.scale, nm);
}

static void hook_UICTV_setAV(id self, SEL _cmd, UIView *av) {
    wpTryCaptureArrowImage(av);
    if (orig_UICTV_setAV) ((void (*)(id, SEL, UIView *))orig_UICTV_setAV)(self, _cmd, av);
}

static void hook_MMTV_setAV(id self, SEL _cmd, UIView *av) {
    wpTryCaptureArrowImage(av);
    if (orig_MMTV_setAV) ((void (*)(id, SEL, UIView *))orig_MMTV_setAV)(self, _cmd, av);
}

// ── setAccessoryType: 探测：微信箭头若走系统 chevron（type=3）则确认（无图可借，矢量即同款）──
// 注意：实参是 enum（int，走 w 寄存器），hook 签名必须用 int，用 NSInteger 读高位可能是脏数据
static void wpProbeAccessoryType(id self, SEL _cmd, int type, IMP *origP) {
    if (type == 3 && g_atProbeLeft > 0) {   // UITableViewCellAccessoryDisclosureIndicator
        g_atProbeLeft--;
        WPLog(@"CommonUI", @"[WCArrow] setAccessoryType=Disclosure on %@", NSStringFromClass([self class]));
        if (g_atProbeLeft == 0) {
            Class mm = objc_getClass("MMTableViewCell");
            Class base = objc_getClass("UITableViewCell");
            if (*origP) {
                if (mm) { Method m = class_getInstanceMethod(mm, @selector(setAccessoryType:)); if (m) method_setImplementation(m, *origP); }
                if (base) { Method m = class_getInstanceMethod(base, @selector(setAccessoryType:)); if (m) method_setImplementation(m, *origP); }
                *origP = NULL;
                WPLog(@"CommonUI", @"[WCArrow] setAccessoryType 探测完成，hook 已摘除");
            }
        }
    }
}

static void hook_UICTV_setAT(id self, SEL _cmd, int type) {
    wpProbeAccessoryType(self, _cmd, type, &orig_UICTV_setAT);
    if (orig_UICTV_setAT) ((void (*)(id, SEL, int))orig_UICTV_setAT)(self, _cmd, type);
}

static void hook_MMTV_setAT(id self, SEL _cmd, int type) {
    wpProbeAccessoryType(self, _cmd, type, &orig_MMTV_setAT);
    if (orig_MMTV_setAT) ((void (*)(id, SEL, int))orig_MMTV_setAT)(self, _cmd, type);
}

// dump 类方法表里 arrow/accessory/indicator 相关方法（一次性诊断）
static void wpDumpArrowMethods(Class cls, const char *clsName) {
    if (!cls) return;
    unsigned int count = 0;
    Method *list = class_copyMethodList(cls, &count);
    for (unsigned int i = 0; i < count; i++) {
        const char *name = sel_getName(method_getName(list[i]));
        if (strstr(name, "ccessor") || strstr(name, "rrow") || strstr(name, "ndicator")) {
            WPLog(@"CommonUI", @"[WCArrow] %s 方法: %s", clsName, name);
        }
    }
    free(list);
}

// ── 子视图树 dump：微信箭头若由 MMTableViewCell 内部渲染（不走系统 accessory API），
//    只有这条路能看到箭头真身（UIImageView+图 / UILabel+字符 / 自绘类）──
// 触发条件：contentView 右侧 48pt 内存在 5~24pt 小视图（箭头几何特征），每实例只 dump 一次
static void wpDumpViewTree(UIView *v, int depth, NSString *path) {
    if (!v || depth > 4) return;
    NSString *info = @"";
    if ([v isKindOfClass:[UILabel class]]) {
        UILabel *l = (UILabel *)v;
        info = [NSString stringWithFormat:@" text='%@' font=%g", l.text ?: @"", l.font.pointSize];
    } else if ([v isKindOfClass:[UIImageView class]]) {
        UIImage *img = [(UIImageView *)v image];
        if (img) {
            NSString *nm = nil;
            @try { nm = [img valueForKey:@"_imageName"]; } @catch (NSException *e) {}
            info = [NSString stringWithFormat:@" img=%gx%g@%dx name=%@", img.size.width, img.size.height, (int)img.scale, nm ?: @"?"];
        } else {
            info = @" img=nil";
        }
    }
    WPLog(@"CommonUI", @"[WCArrow] tree%@ %@%@ frame=%@", path, NSStringFromClass([v class]), info, NSStringFromCGRect(v.frame));
    int i = 0;
    for (UIView *sv in v.subviews) {
        wpDumpViewTree(sv, depth + 1, [NSString stringWithFormat:@"%@.%d", path, i++]);
    }
}

static void hook_MMTV_layoutSV(id self, SEL _cmd) {
    if (orig_MMTV_layoutSV) ((void (*)(id, SEL))orig_MMTV_layoutSV)(self, _cmd);
    if (g_svDumpLeft <= 0) return;
    UITableViewCell *cell = (UITableViewCell *)self;
    UIView *cv = cell.contentView;
    CGFloat cw = cv.frame.size.width;
    if (cw < 200) return;
    BOOL hit = NO;
    for (UIView *sv in cv.subviews) {
        CGRect f = sv.frame;
        if (f.size.width >= 5 && f.size.width <= 24 && f.size.height >= 5 && f.size.height <= 26
            && f.origin.x > cw - 48 && f.origin.y >= 0) { hit = YES; break; }
    }
    if (!hit) return;
    if (objc_getAssociatedObject(self, "wp_svdump")) return;
    objc_setAssociatedObject(self, "wp_svdump", @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    g_svDumpLeft--;
    WPLog(@"CommonUI", @"[WCArrow] === cell dump %@ ===", NSStringFromClass([self class]));
    wpDumpViewTree(cv, 0, @"");
    if (g_svDumpLeft == 0) {
        Class mm = objc_getClass("MMTableViewCell");
        if (mm && orig_MMTV_layoutSV) {
            Method m = class_getInstanceMethod(mm, @selector(layoutSubviews));
            if (m) {
                method_setImplementation(m, orig_MMTV_layoutSV);
                orig_MMTV_layoutSV = NULL;
                WPLog(@"CommonUI", @"[WCArrow] 子视图树探测完成，hook 已摘除");
            }
        }
    }
}

void WPInstallWCArrowCapture(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class mm = objc_getClass("MMTableViewCell");
        if (mm) {
            Method m = class_getInstanceMethod(mm, @selector(setAccessoryView:));
            if (m) {
                orig_MMTV_setAV = method_setImplementation(m, (IMP)hook_MMTV_setAV);
                WPLog(@"CommonUI", @"[WCArrow] hook MMTableViewCell setAccessoryView: OK");
            }
        } else {
            WPLog(@"CommonUI", @"[WCArrow] MMTableViewCell 不存在");
        }
        // 基类兜底：微信 cell 子类若未重写 setAccessoryView:，会落到 UITableViewCell 基类
        Class base = objc_getClass("UITableViewCell");
        if (base) {
            Method m = class_getInstanceMethod(base, @selector(setAccessoryView:));
            if (m) {
                orig_UICTV_setAV = method_setImplementation(m, (IMP)hook_UICTV_setAV);
                WPLog(@"CommonUI", @"[WCArrow] hook UITableViewCell setAccessoryView: OK");
            }
        }

        // setAccessoryType: 探测（3 次后自动摘除）——确认微信箭头是否走系统 chevron
        if (mm) {
            Method m = class_getInstanceMethod(mm, @selector(setAccessoryType:));
            if (m) orig_MMTV_setAT = method_setImplementation(m, (IMP)hook_MMTV_setAT);
        }
        if (base) {
            Method m = class_getInstanceMethod(base, @selector(setAccessoryType:));
            if (m) orig_UICTV_setAT = method_setImplementation(m, (IMP)hook_UICTV_setAT);
        }

        // 一次性 dump：找微信 cell 体系里箭头相关的方法名
        wpDumpArrowMethods(mm, "MMTableViewCell");
        wpDumpArrowMethods(objc_getClass("WCTableViewNormalCellManager"), "WCTableViewNormalCellManager");

        // 子视图树 dump 探测：MMTableViewCell 内部若自绘箭头，只有这条路能看清真身
        // （ListCornerRadius 已实证 MMTableViewCell 重写了 layoutSubviews，hook 只影响它自己）
        if (mm) {
            Method m = class_getInstanceMethod(mm, @selector(layoutSubviews));
            if (m) {
                orig_MMTV_layoutSV = method_setImplementation(m, (IMP)hook_MMTV_layoutSV);
                WPLog(@"CommonUI", @"[WCArrow] hook MMTableViewCell layoutSubviews OK (子视图树探测)");
            }
        }
    });
}

UIImage *WPWCArrowImage(void) {
    return g_wcArrowImage;
}

#pragma mark - 箭头绘制

void WPDrawDisclosureArrow(UIView *card, CGFloat cy, CGFloat containerW, CGFloat rightPadding) {
    CGFloat arrowCY = cy + kRowH / 2;

    // 优先：微信原生箭头图（运行时捕获）
    UIImage *wcImg = WPWCArrowImage();
    if (wcImg) {
        CGFloat iw = wcImg.size.width, ih = wcImg.size.height;
        UIImageView *iv = [[UIImageView alloc] initWithImage:wcImg];
        iv.frame = CGRectMake(containerW - rightPadding - iw, arrowCY - ih / 2, iw, ih);
        iv.userInteractionEnabled = NO;
        [card addSubview:iv];
        return;
    }

    // 回退：CAShapeLayer 矢量绘制
    CGFloat arrowW = 7, arrowH = 11;
    CGFloat arrowX = containerW - rightPadding - arrowW - 3;
    CAShapeLayer *arrow = [CAShapeLayer layer];
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(1, 0)];
    [path addLineToPoint:CGPointMake(arrowW, arrowH / 2)];
    [path addLineToPoint:CGPointMake(1, arrowH)];
    arrow.path = path.CGPath;
    arrow.strokeColor = [UIColor colorWithRed:0.78 green:0.78 blue:0.80 alpha:1.0].CGColor;
    arrow.fillColor = [UIColor clearColor].CGColor;
    arrow.lineWidth = 2.0;
    arrow.lineCap = kCALineCapRound;
    arrow.lineJoin = kCALineJoinRound;
    arrow.frame = CGRectMake(arrowX, arrowCY - arrowH / 2, arrowW + 2, arrowH);
    [card.layer addSublayer:arrow];
}

UIView *WPMakeSubItemArrowView(void) {
    UIImage *wcImg = WPWCArrowImage();
    UIView *holder = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 12, kRowH)];
    holder.userInteractionEnabled = NO;
    CGFloat arrowCY = kRowH / 2;

    if (wcImg) {
        CGFloat iw = wcImg.size.width, ih = wcImg.size.height;
        UIImageView *iv = [[UIImageView alloc] initWithImage:wcImg];
        iv.frame = CGRectMake(2, arrowCY - ih / 2, iw, ih);
        iv.userInteractionEnabled = NO;
        [holder addSubview:iv];
        return holder;
    }

    // 回退：小号矢量 chevron（5.5x9，1.5pt 线宽，比右侧大箭头更轻）
    CGFloat arrowW = 5.5, arrowH = 9;
    CAShapeLayer *arrow = [CAShapeLayer layer];
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(1, 0)];
    [path addLineToPoint:CGPointMake(arrowW, arrowH / 2)];
    [path addLineToPoint:CGPointMake(1, arrowH)];
    arrow.path = path.CGPath;
    arrow.strokeColor = [UIColor colorWithRed:0.78 green:0.78 blue:0.80 alpha:1.0].CGColor;
    arrow.fillColor = [UIColor clearColor].CGColor;
    arrow.lineWidth = 1.5;
    arrow.lineCap = kCALineCapRound;
    arrow.lineJoin = kCALineJoinRound;
    arrow.frame = CGRectMake(0, arrowCY - arrowH / 2, arrowW + 2, arrowH);
    [holder.layer addSublayer:arrow];
    return holder;
}

void WPDrawSubItemArrow(UIView *card, CGFloat cy, CGFloat x) {
    UIView *v = WPMakeSubItemArrowView();
    v.frame = CGRectMake(x, cy, v.frame.size.width, kRowH);
    [card addSubview:v];
}

void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 30, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    WPDrawDisclosureArrow(card, cy, cw, kPad * 3);

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "action", action, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onNavigate:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
}

void WPAddSep(UIView *card, CGFloat cy, CGFloat cw) {
    CGFloat cardW = cw - kPad * 2;
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelY = round(cy * scale) / scale;
    CGFloat onePixel = 1.0 / scale;
    UIView *sepView = [[UIView alloc] initWithFrame:CGRectMake(kPad, pixelY, cardW - kPad, onePixel)];
    sepView.backgroundColor = WPSepColor();
    [card addSubview:sepView];
}

void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) {
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

void WPAddTextFieldRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *placeholder) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 150, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UITextField *tf = [[UITextField alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 150, cy + 4, 140, kRowH - 8)];
    tf.placeholder = placeholder;
    tf.font = [UIFont systemFontOfSize:14];
    tf.textColor = WPT2();
    tf.textAlignment = NSTextAlignmentRight;
    tf.returnKeyType = UIReturnKeyDone;
    tf.autocorrectionType = UITextAutocorrectionTypeNo;
    [card addSubview:tf];
}

UIButton *WPAddEditableRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *value, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 150, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UILabel *vl = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 154, cy, 140, kRowH)];
    vl.text = value;
    vl.font = [UIFont systemFontOfSize:14];
    vl.textColor = WPT2();
    vl.textAlignment = NSTextAlignmentRight;
    [card addSubview:vl];

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "editTitle", title, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(btn, "editValueLabel", vl, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onEditRowTap:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
    return btn;
}

/// 带右箭头版本的 WPAddEditableRow（问题2：和导航条目样式一致）
UIButton *WPAddEditableRowWithArrow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *value, id target) {
    // 标题
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 168, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    // 值（箭头左侧）
    UILabel *vl = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 164, cy, 136, kRowH)];
    vl.text = value;
    vl.font = [UIFont systemFontOfSize:14];
    vl.textColor = WPT2();
    vl.textAlignment = NSTextAlignmentRight;
    [card addSubview:vl];

    WPDrawDisclosureArrow(card, cy, cw, kPad * 3);

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "editTitle", title, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(btn, "editValueLabel", vl, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onEditRowTap:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
    return btn;
}

#pragma mark - 安全 present

UIViewController *WPGetTopVCForPresentation(void) {
    // 1. 遍历所有 window scene 找 keyWindow
    UIWindow *keyWindow = nil;
    for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (![scene isKindOfClass:[UIWindowScene class]]) continue;
        for (UIWindow *w in scene.windows) {
            if (w.isKeyWindow) { keyWindow = w; break; }
        }
    }
    if (!keyWindow) {
        keyWindow = [[UIApplication sharedApplication].windows firstObject];
    }
    if (!keyWindow) return nil;

    // 2. 从 rootViewController 向下找 presentedViewController（复刻微信优化 getChatConfirmationTopViewController）
    UIViewController *top = keyWindow.rootViewController;
    while (top.presentedViewController) {
        top = top.presentedViewController;
    }
    // 3. 如果是 UINavigationController，取 topViewController
    if ([top isKindOfClass:[UINavigationController class]]) {
        top = [(UINavigationController *)top topViewController];
    }
    // 如果是 UITabBarController，取 selectedViewController
    if ([top isKindOfClass:[UITabBarController class]]) {
        top = [(UITabBarController *)top selectedViewController];
        if ([top isKindOfClass:[UINavigationController class]]) {
            top = [(UINavigationController *)top topViewController];
        }
    }
    return top;
}

#pragma mark - 轻量 toast

void WPShowToast(NSString *message) {
    if (message.length == 0) return;
    UIWindow *window = nil;
    for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (![scene isKindOfClass:[UIWindowScene class]]) continue;
        for (UIWindow *w in scene.windows) {
            if (w.isKeyWindow) { window = w; break; }
        }
        if (window) break;
    }
    if (!window) window = [[UIApplication sharedApplication].windows firstObject];
    if (!window) return;

    UILabel *label = [[UILabel alloc] init];
    label.text = message;
    label.font = [UIFont systemFontOfSize:13];
    label.textColor = UIColor.whiteColor;
    label.textAlignment = NSTextAlignmentCenter;
    label.numberOfLines = 0;
    [label sizeToFit];

    UIView *toast = [[UIView alloc] initWithFrame:CGRectMake((window.bounds.size.width - label.frame.size.width - 24) / 2,
                                                             window.bounds.size.height * 0.45,
                                                             label.frame.size.width + 24,
                                                             label.frame.size.height + 16)];
    toast.backgroundColor = [UIColor colorWithWhite:0 alpha:0.78];
    toast.layer.cornerRadius = 8;
    toast.layer.masksToBounds = YES;
    label.frame = CGRectMake(12, 8, label.frame.size.width, label.frame.size.height);
    [toast addSubview:label];
    [window addSubview:toast];
    toast.alpha = 0;
    [UIView animateWithDuration:0.2 animations:^{ toast.alpha = 1; }];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [UIView animateWithDuration:0.25 animations:^{ toast.alpha = 0; }
                         completion:^(BOOL finished) { [toast removeFromSuperview]; }];
    });
}

#pragma mark - 导航栏外观统一

static char kNavSavedStandardKey;
static char kNavSavedScrollEdgeKey;

void WPApplyNavAppearance(UIViewController *vc) {
    UINavigationBar *navBar = vc.navigationController.navigationBar;
    if (!navBar) return;

    // 首次应用时保存原始外观（挂在共享 navBar 上，恢复后即清除）
    if (!objc_getAssociatedObject(navBar, &kNavSavedStandardKey)) {
        objc_setAssociatedObject(navBar, &kNavSavedStandardKey, navBar.standardAppearance, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(navBar, &kNavSavedScrollEdgeKey, navBar.scrollEdgeAppearance, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    UINavigationBarAppearance *app = [[UINavigationBarAppearance alloc] init];
    [app configureWithOpaqueBackground];
    app.backgroundColor = WPBgColor();
    app.shadowColor = [UIColor clearColor];
    app.shadowImage = [[UIImage alloc] init];
    navBar.standardAppearance = app;
    navBar.scrollEdgeAppearance = app;
}

void WPRestoreNavAppearance(UIViewController *vc) {
    UINavigationBar *navBar = vc.navigationController.navigationBar;
    if (!navBar) return;

    UINavigationBarAppearance *std = objc_getAssociatedObject(navBar, &kNavSavedStandardKey);
    UINavigationBarAppearance *edge = objc_getAssociatedObject(navBar, &kNavSavedScrollEdgeKey);
    if (std) navBar.standardAppearance = std;
    if (edge) navBar.scrollEdgeAppearance = edge;
    objc_setAssociatedObject(navBar, &kNavSavedStandardKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(navBar, &kNavSavedScrollEdgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}