//
//  DayNightSkinHook.m
//  MioPlugin
//
//  WCR 全局 UISwitch 换肤机制照抄（WCRefine2.1-2.dylib 反编译实证，安装点 @0x6f30a8）：
//    MSHookMessageEx(UISwitch, layoutSubviews,  hook@0x6f3110, orig@0x242d740)
//    MSHookMessageEx(UISwitch, setOn:animated:, hook@0x6f3398, orig@0x242d748)
//  layoutSubviews 全局唯一覆盖点：微信原生页/我们页面/WCR 页面的开关一律生效；
//  每次布局都检查，cell 复用/动画导致的位移失效窗口自动修复（旧 didMoveToSuperview
//  一次性挂载的隐身/失联问题根源在此，WCR 用 layoutSubviews 天然规避）。
//  setOn:animated: 之外再补 setOn: —— 程序化 setter 两条路径都同步皮肤（WCR 只挂了
//  animated 版，我们加挂非 animated 版兜底，杜绝 log 33 那种"程序化 setOn 皮肤不跟"）。
//

#import "DayNightSkinHook.h"
#import "DayNightSwitch.h"
#import "DayNightSkinConfig.h"
#import "../../Core/LogManager.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

// 皮肤 ↔ 原生开关的关联键（每个 UISwitch 至多一块皮肤）
static const void *kDNSSkinKey = &kDNSSkinKey;

static IMP orig_layoutSubviews = NULL;
static IMP orig_setOnAnimated = NULL;
static IMP orig_setOn = NULL;

#pragma mark - 皮肤挂载 / 摘除

// 挂皮肤（WCR st_setup 同款语义）：bounds 无效不挂；已挂则校帧 + 校状态
static void dns_setupSkin(UISwitch *sw) {
    CGRect b = sw.bounds;
    if (b.size.width <= 0.5 || b.size.height <= 0.5) return;  // WCR 同款：bounds 无效跳过

    DayNightSwitch *skin = objc_getAssociatedObject(sw, kDNSSkinKey);
    if (!skin) {
        skin = [[DayNightSwitch alloc] initWithFrame:b];
        skin.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        // 初值镜像原生状态（静默，不触发 changeAction）
        skin.suppressCallback = YES;
        skin.on = sw.isOn;
        skin.suppressCallback = NO;
        // 用户点皮肤 → 回写原生开关（走 setOn:animated: hook 同步 + 手动补发 valueChanged，
        // 程序化 setOn 不会自动发 UIControlEventValueChanged，微信的保存逻辑靠它）
        __weak UISwitch *wsw = sw;
        skin.changeAction = ^(BOOL value) {
            __strong UISwitch *ssw = wsw;
            if (!ssw) return;
            ((void (*)(id, SEL, BOOL, BOOL))objc_msgSend)(ssw, @selector(setOn:animated:), value, YES);
            [ssw sendActionsForControlEvents:UIControlEventValueChanged];
        };
        [sw addSubview:skin];
        objc_setAssociatedObject(sw, kDNSSkinKey, skin, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        WPLog(@"DayNightSkin", @"[DNSHook] 皮肤已挂载 %@", sw);
    } else {
        // WCR 同款：每次布局都校帧 + 校状态（复用 cell 换行、尺寸变化自动跟）
        if (!CGRectEqualToRect(skin.frame, b)) skin.frame = b;
        if (skin.on != sw.isOn) {
            skin.suppressCallback = YES;
            skin.on = sw.isOn;
            skin.suppressCallback = NO;
        }
    }
}

// 摘皮肤（WCR st_removeThemeSwitch 同款语义）
static void dns_removeSkin(UISwitch *sw) {
    DayNightSwitch *skin = objc_getAssociatedObject(sw, kDNSSkinKey);
    if (!skin) return;
    [skin removeFromSuperview];
    objc_setAssociatedObject(sw, kDNSSkinKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

// 配置读取（shared dispatch_once + ivar 读，热路径开销可忽略）
static BOOL dnsEnabled(void) {
    return [DayNightSkinConfig shared].dayNightSkinEnabled;
}

#pragma mark - Hook 函数

// layoutSubviews hook：先跑原版，再按开关挂/摘皮肤（WCR @0x6f3110 逻辑）
static void DNS_LayoutSubviews(id self, SEL _cmd) {
    if (orig_layoutSubviews) ((void (*)(id, SEL))orig_layoutSubviews)(self, _cmd);
    @try {
        if (![self isKindOfClass:[UISwitch class]]) return;
        UISwitch *sw = (UISwitch *)self;
        if (dnsEnabled()) {
            dns_setupSkin(sw);
        } else {
            dns_removeSkin(sw);
        }
    } @catch (NSException *e) {
        WPLog(@"DayNightSkin", @"[DNSHook] layoutSubviews 异常: %@ - %@", e.name, e.reason);
    }
}

// setOn:animated: hook（WCR @0x6f3398）：原版照跑，皮肤静默跟随
static void DNS_SetOnAnimated(id self, SEL _cmd, BOOL on, BOOL animated) {
    if (orig_setOnAnimated) ((void (*)(id, SEL, BOOL, BOOL))orig_setOnAnimated)(self, _cmd, on, animated);
    @try {
        if (![self isKindOfClass:[UISwitch class]]) return;
        DayNightSwitch *skin = objc_getAssociatedObject(self, kDNSSkinKey);
        if (!skin || skin.on == on) return;
        skin.suppressCallback = YES;   // WCR blockChangeActionAnimated: 同款防循环
        skin.on = on;
        skin.suppressCallback = NO;
    } @catch (NSException *e) {
        WPLog(@"DayNightSkin", @"[DNSHook] setOnAnimated 异常: %@", e.name);
    }
}

// setOn: hook（WCR 未挂、我们兜底）：非 animated 的程序化 setter 也同步
static void DNS_SetOn(id self, SEL _cmd, BOOL on) {
    if (orig_setOn) ((void (*)(id, SEL, BOOL))orig_setOn)(self, _cmd, on);
    @try {
        if (![self isKindOfClass:[UISwitch class]]) return;
        DayNightSwitch *skin = objc_getAssociatedObject(self, kDNSSkinKey);
        if (!skin || skin.on == on) return;
        skin.suppressCallback = YES;
        skin.on = on;
        skin.suppressCallback = NO;
    } @catch (NSException *e) {
        WPLog(@"DayNightSkin", @"[DNSHook] setOn 异常: %@", e.name);
    }
}

#pragma mark - 安装

// 安全替换：目标方法若是继承来的（如 layoutSubviews 来自 UIView），先拷贝到 UISwitch
// 自身再替换 —— 只影响 UISwitch，不动 UIView 全局（MSHookMessageEx 的同款语义）。
static BOOL dns_hookMethod(Class cls, SEL sel, IMP hookImp, IMP *outOrig) {
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return NO;
    IMP origImp = method_getImplementation(m);
    if (class_addMethod(cls, sel, hookImp, method_getTypeEncoding(m))) {
        // 拷贝成功 = 原实现是继承来的，原类未动
        if (outOrig) *outOrig = origImp;
        return YES;
    }
    // UISwitch 自己实现了该方法：直接原地替换
    Method mSelf = class_getInstanceMethod(cls, sel);
    if (!mSelf) return NO;
    if (outOrig) *outOrig = method_getImplementation(mSelf);
    method_setImplementation(mSelf, hookImp);
    return YES;
}

@implementation DayNightSkinHook

+ (void)install {
    WPLog(@"DayNightSkin", @"[DNSHook] install start（WCR 同款全局 UISwitch 换肤）");
    Class cls = [UISwitch class];

    if (dns_hookMethod(cls, @selector(layoutSubviews), (IMP)DNS_LayoutSubviews, &orig_layoutSubviews)) {
        WPLog(@"DayNightSkin", @"[DNSHook] ✓ layoutSubviews");
    } else {
        WPLog(@"DayNightSkin", @"[DNSHook] ⚠️ UISwitch::layoutSubviews hook 失败");
    }

    if (dns_hookMethod(cls, @selector(setOn:animated:), (IMP)DNS_SetOnAnimated, &orig_setOnAnimated)) {
        WPLog(@"DayNightSkin", @"[DNSHook] ✓ setOn:animated:");
    } else {
        WPLog(@"DayNightSkin", @"[DNSHook] ⚠️ UISwitch::setOn:animated: hook 失败");
    }

    if (dns_hookMethod(cls, @selector(setOn:), (IMP)DNS_SetOn, &orig_setOn)) {
        WPLog(@"DayNightSkin", @"[DNSHook] ✓ setOn:");
    }

    WPLog(@"DayNightSkin", @"[DNSHook] ✓ 全局换肤安装完成（dayNightSkinEnabled 实时生效）");
}

@end
