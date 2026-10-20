#import "MomentsDualHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <stdlib.h>
#import <string.h>
#import <dlfcn.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"
#import "MomentsDualPanel.h"
#import "MioDualFeedBridge.h"

// viewDidAppear 原实现（若被 WCR 等他方插件先接管则让位不挂，与 MomentsHook 同规）
static IMP gDualOrigViewDidAppear = NULL;

// 最近一次 viewDidAppear 的发现页 VC（weak：谁在前台谁是 host；VC 释放后自动置 nil，
// 不可强持否则泄漏+悬垂）
static __weak UIViewController *gDualCurrentHost = nil;

static char kDualButtonMarkerKey;   // 按钮幂等标记（关联对象，防 viewDidAppear 反复追加）

// IMP 归属判断：仅他方 dylib 让位。dladdr 查 IMP 所在镜像：
//   - 主程序二进制 / 系统 framework（路径不以 .dylib 结尾）→ 正常挂载
//   - 本插件 dylib（伪集赞已先给 viewDidAppear 挂了 block 包装，链式原实现就在
//     本镜像内）→ 必须继续挂，否则按钮永不安装
//   - 他方 dylib（WCR 等）→ 让位：抢回会把 orig 更新成对方替换实现，双方互指成
//     无限递归（WCR+Mio 同挂 MMGrowTextView 实证栈溢出，同 MomentsHook 同规）
static BOOL MioDualImpFromOtherPlugin(IMP imp) {
    if (!imp) return NO;
    Dl_info info, selfInfo;
    if (!dladdr((const void *)imp, &info) || !info.dli_fname) return NO;   // 匿名 trampoline（block 包装）→ 非他方
    size_t n = strlen(info.dli_fname);
    if (n < 6 || strcmp(info.dli_fname + n - 6, ".dylib") != 0) return NO;
    if (dladdr((const void *)&MioDualImpFromOtherPlugin, &selfInfo) &&
        selfInfo.dli_fbase == info.dli_fbase) return NO;   // 本插件自己的链
    return YES;
}

// 按钮动作接收器（UIBarButtonItem target 必须是对象，静态单例）
@interface MioDualButtonBox : NSObject
- (void)onToggle:(UIBarButtonItem *)sender;
@end
@implementation MioDualButtonBox
- (void)onToggle:(UIBarButtonItem *)sender {
    UIViewController *host = gDualCurrentHost;
    if (!host) return;
    MioDualPanelToggle(host);
    sender.title = MioDualPanelIsOpen(host) ? @"原生" : @"双列";
}
@end

static MioDualButtonBox *MioDualButtonBoxShared(void) {
    static MioDualButtonBox *box = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ box = [[MioDualButtonBox alloc] init]; });
    return box;
}

// 从导航栏移除我方按钮（总开关关闭时调用）
static void MioDualRemoveButton(UIViewController *host) {
    UINavigationItem *ni = host.navigationItem;
    if (!ni.rightBarButtonItems.count) return;
    NSMutableArray *keep = [NSMutableArray array];
    BOOL removed = NO;
    for (UIBarButtonItem *b in ni.rightBarButtonItems) {
        if ([objc_getAssociatedObject(b, &kDualButtonMarkerKey) isEqual:@YES]) { removed = YES; continue; }
        [keep addObject:b];
    }
    if (removed) ni.rightBarButtonItems = keep;
}

// viewDidAppear 后追加「双列」按钮（微信每次 viewDidAppear 会重建导航项，故每次都补）
static void MioDualEnsureButton(UIViewController *host) {
    MomentsConfig *cfg = [MomentsConfig shared];
    if (!cfg.dualColumnEnabled) {
        if (MioDualPanelIsOpen(host)) MioDualPanelClose(host);
        MioDualRemoveButton(host);
        return;
    }
    UINavigationItem *ni = host.navigationItem;
    if (!ni) return;

    NSMutableArray *items = [NSMutableArray array];
    if (ni.rightBarButtonItems.count > 0) {
        [items addObjectsFromArray:ni.rightBarButtonItems];
    } else if (ni.rightBarButtonItem) {
        [items addObject:ni.rightBarButtonItem];
    }
    for (UIBarButtonItem *b in items) {
        if ([objc_getAssociatedObject(b, &kDualButtonMarkerKey) isEqual:@YES]) return;   // 已存在
    }
    UIBarButtonItem *btn = [[UIBarButtonItem alloc]
                            initWithTitle:(MioDualPanelIsOpen(host) ? @"原生" : @"双列")
                            style:UIBarButtonItemStylePlain
                            target:MioDualButtonBoxShared()
                            action:@selector(onToggle:)];
    objc_setAssociatedObject(btn, &kDualButtonMarkerKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [items addObject:btn];
    ni.rightBarButtonItems = items;
}

static void MioDualInstallEntryHooks(void) {
    // 入口在发现页（WCMoments 0.6.49 同位）：FindFriendEntryViewController.viewDidAppear:
    // 自有方法（class-dump 8.0.78 头文件实证），hook 不影响其他 tab 页
    Class ffVC = objc_getClass("FindFriendEntryViewController");
    if (!ffVC) {
        WPLog(@"Dual", @"[Dual] SKIP: FindFriendEntryViewController NOT found");
        return;
    }
    Method m = class_getInstanceMethod(ffVC, NSSelectorFromString(@"viewDidAppear:"));
    if (!m) return;
    IMP cur = method_getImplementation(m);
    if (MioDualImpFromOtherPlugin(cur)) {
        // 他方插件先接管（WCR 同款让位规则）：抢回会把 orig 更新成对方替换实现，互指成环
        WPLog(@"Dual", @"[Dual] yield viewDidAppear: (another dylib owns it)");
        return;
    }
    gDualOrigViewDidAppear = cur;
    __weak Class weakFFVC = ffVC;
    method_setImplementation(m, imp_implementationWithBlock(^(id self, BOOL animated) {
        ((void(*)(id, SEL, BOOL))gDualOrigViewDidAppear)(self, NSSelectorFromString(@"viewDidAppear:"), animated);
        if (weakFFVC && [self isKindOfClass:weakFFVC]) {   // 守卫误挂到子类/他类实例
            gDualCurrentHost = self;
            MioDualPanelReassertChrome(self);   // 面板开着时切 tab 回来，微信容器会重置导航栏 hidden 态
            MioDualEnsureButton(self);
        }
    }));
    WPLog(@"Dual", @"[Dual] viewDidAppear entry hook installed on FindFriendEntryViewController");
}

// P1 实时性：微信原生 timeline 变更回调（WCFacade.h:415 实证——WCFacade 是
// MMUserService 微信原生服务，非 WCMoments 私有）。每次朋友圈数据增/改/删都会走这里，
// 转发 MioDualFeedBridge notifyDataChanged（0.5s 尾沿防抖）→ 行级 diff 增量推送；
// 让位他方插件时 Bridge 开 10s 慢轮询兜底（B11）
static void MioDualInstallTimelineChangedHook(void) {
    Class fCls = objc_getClass("WCFacade");
    SEL sel = NSSelectorFromString(@"onTimelineDataChangedWithAdded:andChanged:andDeleted:");
    if (!fCls) {
        WPLog(@"Dual", @"[Dual] timeline-changed hook SKIP: WCFacade NOT found");
        [MioDualFeedBridge enablePollingFallback];   // 无 hook 通道，轮询保底
        return;
    }
    Method m = class_getInstanceMethod(fCls, sel);
    if (!m) {
        WPLog(@"Dual", @"[Dual] timeline-changed hook SKIP: selector NOT found");
        [MioDualFeedBridge enablePollingFallback];
        return;
    }
    IMP cur = method_getImplementation(m);
    if (MioDualImpFromOtherPlugin(cur)) {   // 他方插件先接管则让位（同 viewDidAppear 规则）
        WPLog(@"Dual", @"[Dual] yield onTimelineDataChanged: (another dylib owns it)");
        [MioDualFeedBridge enablePollingFallback];
        return;
    }
    __block void (*orig)(id, SEL, id, id, id) = (void (*)(id, SEL, id, id, id))cur;
    method_setImplementation(m, imp_implementationWithBlock(^(id self, id added, id changed, id deleted) {
        orig(self, sel, added, changed, deleted);
        WPLog(@"Dual", @"[Evt] onTimelineDataChanged fired");
        [MioDualFeedBridge notifyDataChanged];
    }));
    WPLog(@"Dual", @"[Dual] onTimelineDataChanged hook installed (P1 event-driven)");
}

@implementation MomentsDualHook

+ (void)install {
    MioDualInstallEntryHooks();
    MioDualInstallTimelineChangedHook();
}

@end
