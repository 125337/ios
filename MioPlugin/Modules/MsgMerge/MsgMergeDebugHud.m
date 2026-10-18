//
//  MsgMergeDebugHud.m
//  MioPlugin
//
//  骑行钻入量调试悬浮窗实现（纯 UIKit，无依赖）
//

#import "MsgMergeDebugHud.h"
#import "MsgMergeConfig.h"
#import "ConfigManager.h"

static UIView *s_hud = nil;
static UIButton *s_sideButton = nil;
static UILabel *s_valueLabel = nil;
static BOOL s_editingRecv = YES;   // 当前编辑侧：YES=收方(R) NO=自发(S)

#pragma mark — 值读写 —

static CGFloat currentValue(void) {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    return s_editingRecv ? cfg.mmRideDiveRecv : cfg.mmRideDiveSend;
}

static NSString *keyOfCurrent(void) {
    return s_editingRecv ? @"mmRideDiveRecv" : @"mmRideDiveSend";
}

static void refreshLabel(void) {
    s_valueLabel.text = [NSString stringWithFormat:@"%.1f", currentValue()];
}

static void applyValue(CGFloat v) {
    v = MAX(-80.0, MIN(80.0, v));
    [ConfigManager setValue:@(v) forKey:keyOfCurrent()];
    [ConfigManager saveAll];
    refreshLabel();
    // 触发聊天页重排：applyOwnLayout 每轮 layout 读配置现值，重排即生效
    for (UIWindow *w in [UIApplication sharedApplication].windows) {
        for (UIView *sv in w.subviews) {
            if ([sv isKindOfClass:[UITableView class]]) [sv setNeedsLayout];
        }
    }
}

#pragma mark — 动作目标 —

@interface _HudTarget : NSObject
@end
@implementation _HudTarget
+ (instancetype)shared {
    static _HudTarget *t;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ t = [[_HudTarget alloc] init]; });
    return t;
}
- (void)onMinus { applyValue(currentValue() - 0.5); }
- (void)onPlus  { applyValue(currentValue() + 0.5); }
- (void)onSide {
    s_editingRecv = !s_editingRecv;
    [s_sideButton setTitle:(s_editingRecv ? @"R" : @"S") forState:UIControlStateNormal];
    refreshLabel();
}
- (void)onClose {
    [MsgMergeConfig shared].mmRideDebug = NO;
    [ConfigManager saveAll];
    [MsgMergeDebugHud syncVisible];
}
@end

#pragma mark — 悬浮窗构建 —

static UIButton *roundButton(NSString *title, SEL action, CGFloat w, UIColor *bg) {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    b.frame = CGRectMake(0, 0, w, 26);
    b.layer.cornerRadius = 6;
    b.backgroundColor = bg;
    [b setTitle:title forState:UIControlStateNormal];
    [b setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    b.titleLabel.font = [UIFont boldSystemFontOfSize:12];
    [b addTarget:[_HudTarget shared] action:action forControlEvents:UIControlEventTouchUpInside];
    return b;
}

static void showHud(void) {
    UIView *root = [[UIView alloc] initWithFrame:CGRectMake(60, 120, 222, 34)];
    root.backgroundColor = [UIColor colorWithWhite:0 alpha:0.72];
    root.layer.cornerRadius = 9;
    root.layer.borderWidth = 0.5;
    root.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.25].CGColor;

    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
        initWithTarget:root action:@selector(hudDrag:)];
    [root addGestureRecognizer:pan];

    s_sideButton = roundButton(@"R", @selector(onSide), 30,
        [UIColor colorWithRed:0.2 green:0.5 blue:0.9 alpha:0.85]);
    s_sideButton.frame = CGRectMake(6, 4, 30, 26);

    UIButton *minus = roundButton(@"−", @selector(onMinus), 34,
        [UIColor colorWithWhite:1 alpha:0.18]);
    minus.frame = CGRectMake(42, 4, 34, 26);

    s_valueLabel = [[UILabel alloc] initWithFrame:CGRectMake(82, 4, 62, 26)];
    s_valueLabel.textColor = [UIColor whiteColor];
    s_valueLabel.font = [UIFont monospacedDigitSystemFontOfSize:14 weight:UIFontWeightBold];
    s_valueLabel.textAlignment = NSTextAlignmentCenter;

    UIButton *plus = roundButton(@"＋", @selector(onPlus), 34,
        [UIColor colorWithWhite:1 alpha:0.18]);
    plus.frame = CGRectMake(150, 4, 34, 26);

    UIButton *close = roundButton(@"×", @selector(onClose), 22,
        [UIColor colorWithRed:0.75 green:0.2 blue:0.2 alpha:0.8]);
    close.frame = CGRectMake(190, 4, 22, 26);

    [root addSubview:s_sideButton];
    [root addSubview:minus];
    [root addSubview:s_valueLabel];
    [root addSubview:plus];
    [root addSubview:close];
    refreshLabel();

    // 选主 window：微信多 window 环境 keyWindow 可能指向键盘等辅助 window，
    // 遍历取可见且最高的 window 才保证显示
    UIWindow *win = nil;
    for (UIWindow *w in [UIApplication sharedApplication].windows) {
        if (w.hidden || w.frame.size.height < 100) continue;
        if (!win || w.frame.size.height > win.frame.size.height) win = w;
    }
    if (!win) return;
    root.layer.zPosition = 9999;
    [win addSubview:root];
    s_hud = root;
}

#pragma mark — 拖动手势（category 实现，target 为 root 自身） —

@implementation UIView (MsgMergeDebugHudDrag)
- (void)hudDrag:(UIPanGestureRecognizer *)g {
    UIView *v = g.view;
    CGPoint t = [g translationInView:v.superview];
    CGRect f = v.frame;
    f.origin.x += t.x;
    f.origin.y += t.y;
    v.frame = f;
    [g setTranslation:CGPointZero inView:v.superview];
}
@end

#pragma mark — 公开接口 —

@implementation MsgMergeDebugHud

+ (void)syncVisible {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    BOOL on = cfg.mmRideDebug && cfg.mmAvatarRide;
    if (on && !s_hud) showHud();
    else if (!on && s_hud) { [s_hud removeFromSuperview]; s_hud = nil; }
}

@end
