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

/// 防重标记：已叠加皮肤的 UISwitch 上挂着皮肤控件引用
static char kDayNightSkinKey;

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
        // 已换肤（cell 复用等重复上屏）：同步一次状态即可，不再叠加
        skin.on = sw.on;
        return;
    }

    skin = [[DayNightSwitch alloc] initWithFrame:CGRectMake(0, 0, sw.frame.size.width, sw.frame.size.height)];
    skin.on = sw.on;
    skin.changeAction = ^(BOOL on) {
        // 写回原生开关并派发值变化事件；setOn 同值不会重复派发，无回环风险
        sw.on = on;
        [sw sendActionsForControlEvents:UIControlEventValueChanged];
    };

    sw.layer.opacity = 0.0;
    sw.layer.shadowOpacity = 0.0;
    [sw addSubview:skin];
    objc_setAssociatedObject(sw, &kDayNightSkinKey, skin, OBJC_ASSOCIATION_RETAIN);
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

    WPLog(@"DayNightSkin", @"[DayNightSkinHook] ✓ UISwitch::didMoveToSuperview（dayNightSkinEnabled 实时生效）");
}

@end
