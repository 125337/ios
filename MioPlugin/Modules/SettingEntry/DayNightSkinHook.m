//
//  DayNightSkinHook.m
//  MioPlugin
//
//  日月开关 hook（原项目 Tweak.xm 的 %hook UISwitch didMoveToSuperview 改写为
//  MSHookMessageEx + ConfigManager 版）。
//
//  原理：UISwitch 上屏（didMoveToSuperview）时，把原生开关隐藏（opacity=0），
//  叠加一个同 frame 的 DayNightSwitch；用户摸皮肤控件时把状态写回 UISwitch
//  并派发 UIControlEventValueChanged——微信既有的 on 变化监听全部照常工作。
//
//  hook 要点：UISwitch 自身没有实现 didMoveToSuperview（继承自 UIView），
//  直接 MSHookMessageEx 会 method_setImplementation 到 UIView 的 Method 上
//  波及全部视图——所以用 class_addMethod 把 hook IMP 覆盖到 UISwitch 类本身，
//  orig 保留 UIView 的实现指针直接调用（IMP 无 super 语义，效果等同 %orig）。
//
//  注意：程序化 setOn: 不会触发 didMoveToSuperview，皮肤状态不同步；
//  cell 复用/重新上屏时会同步一次。开关切换即时生效于新上屏的 UISwitch，
//  已在屏的 cell 重进页面后刷新（设置页重建即满足）。
//

#import "DayNightSkinHook.h"
#import "DayNightSwitch.h"
#import "../../Core/LogManager.h"
#import "../../Core/ConfigManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static IMP orig_switchDidMoveToSuperview = NULL;
static IMP orig_switchSetOn = NULL;
static IMP orig_switchSetOnAnimated = NULL;

/// 防重标记：已叠加皮肤的 UISwitch 上挂着皮肤控件引用
static char kDayNightSkinKey;

/// 程序化 setOn 后同步皮肤显示（cell 配置/复用都走这条路，且发生在上屏之后）
static void DayNightSkin_syncAfterSetOn(UISwitch *sw) {
    DayNightSwitch *skin = objc_getAssociatedObject(sw, &kDayNightSkinKey);
    // 皮肤 changeAction 写回 sw.on 时值已相同，这里不会触发（KVO 同值不通知），无回环
    if (skin && skin.on != sw.on) skin.on = sw.on;
}

static void DayNightSkinHook_installed(id self, SEL _cmd) {
    // 原实现（UIView 版）先走
    if (orig_switchDidMoveToSuperview) {
        ((void (*)(id, SEL))orig_switchDidMoveToSuperview)(self, _cmd);
    }

    UISwitch *sw = (UISwitch *)self;
    if (![sw isKindOfClass:[UISwitch class]]) return;

    DayNightSwitch *skin = objc_getAssociatedObject(sw, &kDayNightSkinKey);
    BOOL enabled = [[ConfigManager valueForKey:@"dayNightSkinEnabled"] boolValue];

    if (!enabled) {
        // 关闭：移除皮肤、恢复原生可见（shadowOpacity 原生默认就是 0）
        if (skin) {
            [skin removeFromSuperview];
            objc_setAssociatedObject(sw, &kDayNightSkinKey, nil, OBJC_ASSOCIATION_RETAIN);
            sw.layer.opacity = 1.0;
            sw.layer.shadowOpacity = 0.0;
        }
        return;
    }

    if (skin) {
        // 已换肤（cell 复用等重复上屏）：跟随开关搬到新宿主 + 同步状态，不再新建
        if (skin.on != sw.on) skin.on = sw.on;
    } else {
        skin = [[DayNightSwitch alloc] initWithFrame:CGRectZero];
        skin.on = sw.on;
        skin.changeAction = ^(BOOL on) {
            // 写回原生开关并派发值变化事件；setOn 同值不会重复派发，无回环风险
            sw.on = on;
            [sw sendActionsForControlEvents:UIControlEventValueChanged];
        };
        // 隐藏原生开关。注意不能把皮肤 addSubview 进 UISwitch——CALayer opacity
        // 对子树乘法继承，皮肤会跟着隐身（log 34 实锤），必须挂到父视图上
        sw.layer.opacity = 0.0;
        sw.layer.shadowOpacity = 0.0;
        objc_setAssociatedObject(sw, &kDayNightSkinKey, skin, OBJC_ASSOCIATION_RETAIN);
    }

    // 皮肤挂在开关的父视图（cell contentView）上，跟随开关布局/搬迁
    CGRect frameInSuper = [sw convertRect:sw.bounds toView:sw.superview];
    if (skin.superview != sw.superview) {
        [skin removeFromSuperview];
        [sw.superview addSubview:skin];
    }
    skin.frame = frameInSuper;
}

// 程序化 setOn:（含 .on 属性赋值）——微信 cell 配置开关的主要通路
static void DayNightSkinHook_setOn(id self, SEL _cmd, BOOL on) {
    ((void (*)(id, SEL, BOOL))orig_switchSetOn)(self, _cmd, on);
    DayNightSkin_syncAfterSetOn((UISwitch *)self);
}

// setOn:animated: 若内部不走 setOn:，单独兜底同步
static void DayNightSkinHook_setOnAnimated(id self, SEL _cmd, BOOL on, BOOL animated) {
    ((void (*)(id, SEL, BOOL, BOOL))orig_switchSetOnAnimated)(self, _cmd, on, animated);
    DayNightSkin_syncAfterSetOn((UISwitch *)self);
}

@implementation DayNightSkinHook

+ (void)install {
    WPLog(@"DayNightSkin", @"[DayNightSkinHook] install start");

    Class cls = objc_getClass("UISwitch");
    SEL sel = NSSelectorFromString(@"didMoveToSuperview");
    if (!cls || !class_getInstanceMethod(cls, sel)) {
        WPLog(@"DayNightSkin", @"[DayNightSkinHook] ⚠️ UISwitch::didMoveToSuperview NOT found");
        return;
    }

    // UISwitch 无自有实现（继承 UIView）——addMethod 覆盖到本类，orig 记 UIView 的 IMP。
    // 若未来微信给 UISwitch 加了自有实现，addMethod 失败则退回 setImplementation
    orig_switchDidMoveToSuperview = class_getMethodImplementation(cls, sel);
    if (!class_addMethod(cls, sel, (IMP)DayNightSkinHook_installed, "v@:")) {
        Method m = class_getInstanceMethod(cls, sel);
        if (m) method_setImplementation(m, (IMP)DayNightSkinHook_installed);
    }

    // setOn:/setOn:animated: 是 UISwitch 自有方法，MSHookMessageEx 直接换 IMP。
    // 两条都挂：程序化赋值（cell 配置/复用）发生上屏之后，必须实时同步皮肤显示
    SEL setOnSel = NSSelectorFromString(@"setOn:");
    Method setOnM = class_getInstanceMethod(cls, setOnSel);
    if (setOnM) {
        orig_switchSetOn = method_getImplementation(setOnM);
        method_setImplementation(setOnM, (IMP)DayNightSkinHook_setOn);
    }
    SEL setOnAnimSel = NSSelectorFromString(@"setOn:animated:");
    Method setOnAnimM = class_getInstanceMethod(cls, setOnAnimSel);
    if (setOnAnimM) {
        orig_switchSetOnAnimated = method_getImplementation(setOnAnimM);
        method_setImplementation(setOnAnimM, (IMP)DayNightSkinHook_setOnAnimated);
    }

    WPLog(@"DayNightSkin", @"[DayNightSkinHook] ✓ UISwitch::didMoveToSuperview + setOn:/setOn:animated:（dayNightSkinEnabled 实时生效）");
}

@end
