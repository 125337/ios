#import "MioNavMonitor.h"
#import <substrate.h>
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

// ===== Hook 函数声明 =====
static void (*orig_mio_viewDidLoad)(id, SEL);
static void (*orig_mio_viewWillAppear)(id, SEL, BOOL);
static void (*orig_mio_viewDidAppear)(id, SEL, BOOL);
static void (*orig_mio_viewWillDisappear)(id, SEL, BOOL);
static void (*orig_mio_viewDidDisappear)(id, SEL, BOOL);
static void (*orig_mio_viewWillLayoutSubviews)(id, SEL);
static void (*orig_mio_viewDidLayoutSubviews)(id, SEL);

static void (*orig_mio_pushViewController)(id, SEL, id, BOOL);
static void (*orig_mio_popViewControllerAnimated)(id, SEL, BOOL);
static void (*orig_mio_popToViewController)(id, SEL, id, BOOL);
static void (*orig_mio_popToRootViewControllerAnimated)(id, SEL, BOOL);

static void (*orig_mio_presentViewController)(id, SEL, id, BOOL, id);
static void (*orig_mio_dismissViewControllerAnimated)(id, SEL, BOOL, id);

// ===== Hook 实现 =====
#define NAV_LOG(tag, vc) \
    do { \
        if ([[MioNavMonitor sharedInstance] isMonitoring]) { \
            NSString *name = [[MioNavMonitor sharedInstance] displayNameForVC:vc]; \
            [[MioNavMonitor sharedInstance] logEvent:tag vcName:name]; \
        } \
    } while(0)

static void mio_viewDidLoad(id self, SEL _cmd) {
    orig_mio_viewDidLoad(self, _cmd);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"[Load]", self);
}

static void mio_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    orig_mio_viewWillAppear(self, _cmd, animated);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"[Appear]", self);
}

static void mio_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    orig_mio_viewDidAppear(self, _cmd, animated);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"(appear)", self);
}

static void mio_viewWillDisappear(id self, SEL _cmd, BOOL animated) {
    orig_mio_viewWillDisappear(self, _cmd, animated);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"[Disappear]", self);
}

static void mio_viewDidDisappear(id self, SEL _cmd, BOOL animated) {
    orig_mio_viewDidDisappear(self, _cmd, animated);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"(disappear)", self);
}

static void mio_viewWillLayoutSubviews(id self, SEL _cmd) {
    orig_mio_viewWillLayoutSubviews(self, _cmd);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"(willLayout)", self);
}

static void mio_viewDidLayoutSubviews(id self, SEL _cmd) {
    orig_mio_viewDidLayoutSubviews(self, _cmd);
    if ([[MioNavMonitor sharedInstance] shouldIgnoreVC:self]) return;
    NAV_LOG(@"(didLayout)", self);
}

static void mio_pushViewController(id self, SEL _cmd, id vc, BOOL animated) {
    orig_mio_pushViewController(self, _cmd, vc, animated);
    if (![[MioNavMonitor sharedInstance] isMonitoring]) return;
    NSString *name = [[MioNavMonitor sharedInstance] displayNameForVC:vc];
    [[MioNavMonitor sharedInstance] logEvent:@"[PUSH]" vcName:name];
}

static void mio_popViewControllerAnimated(id self, SEL _cmd, BOOL animated) {
    orig_mio_popViewControllerAnimated(self, _cmd, animated);
    if (![[MioNavMonitor sharedInstance] isMonitoring]) return;
    [[MioNavMonitor sharedInstance] logEvent:@"[POP]" vcName:@"—"];
}

static void mio_popToViewController(id self, SEL _cmd, id vc, BOOL animated) {
    orig_mio_popToViewController(self, _cmd, vc, animated);
    if (![[MioNavMonitor sharedInstance] isMonitoring]) return;
    NSString *name = [[MioNavMonitor sharedInstance] displayNameForVC:vc];
    [[MioNavMonitor sharedInstance] logEvent:@"[POP_TO]" vcName:name];
}

static void mio_popToRootViewControllerAnimated(id self, SEL _cmd, BOOL animated) {
    orig_mio_popToRootViewControllerAnimated(self, _cmd, animated);
    if (![[MioNavMonitor sharedInstance] isMonitoring]) return;
    [[MioNavMonitor sharedInstance] logEvent:@"[POP_ROOT]" vcName:@"Root"];
}

static void mio_presentViewController(id self, SEL _cmd, id vc, BOOL animated, id completion) {
    orig_mio_presentViewController(self, _cmd, vc, animated, completion);
    if (![[MioNavMonitor sharedInstance] isMonitoring]) return;
    NSString *name = [[MioNavMonitor sharedInstance] displayNameForVC:vc];
    [[MioNavMonitor sharedInstance] logEvent:@"[Present]" vcName:name];
}

static void mio_dismissViewControllerAnimated(id self, SEL _cmd, BOOL animated, id completion) {
    orig_mio_dismissViewControllerAnimated(self, _cmd, animated, completion);
    if (![[MioNavMonitor sharedInstance] isMonitoring]) return;
    [[MioNavMonitor sharedInstance] logEvent:@"[Dismiss]" vcName:@"—"];
}

#undef NAV_LOG

// ===== 私有属性 =====
@interface MioNavMonitor ()

@property (nonatomic, strong) NSMutableArray<NSString *> *navLogs;
@property (nonatomic, assign) BOOL isMonitoringActive;
@property (nonatomic, assign) BOOL hooksInstalled;
@property (nonatomic, strong) NSDictionary<NSString *, NSString *> *vcNameMap;

@end

@implementation MioNavMonitor

+ (instancetype)sharedInstance {
    static MioNavMonitor *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MioNavMonitor alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _navLogs = [NSMutableArray array];
        _vcNameMap = [self defaultVCNameMap];
    }
    return self;
}

#pragma mark - Start / Stop

- (void)startMonitoring {
    if (self.isMonitoringActive) return;
    self.isMonitoringActive = YES;

    if (!self.hooksInstalled) {
        [self installAllHooks];
        self.hooksInstalled = YES;
    }

    WPLog(@"DevTools", @"[MioNavMonitor] ✓ 监控已启动");
}

- (void)stopMonitoring {
    self.isMonitoringActive = NO;
    WPLog(@"DevTools", @"[MioNavMonitor] ✗ 监控已停止");
}

- (BOOL)isMonitoring {
    return self.isMonitoringActive;
}

#pragma mark - Hook Installation

- (void)installAllHooks {
    Class vcClass = [UIViewController class];

    MSHookMessageEx(vcClass, @selector(viewDidLoad),
                    (IMP)mio_viewDidLoad, (IMP *)&orig_mio_viewDidLoad);
    MSHookMessageEx(vcClass, @selector(viewWillAppear:),
                    (IMP)mio_viewWillAppear, (IMP *)&orig_mio_viewWillAppear);
    MSHookMessageEx(vcClass, @selector(viewDidAppear:),
                    (IMP)mio_viewDidAppear, (IMP *)&orig_mio_viewDidAppear);
    MSHookMessageEx(vcClass, @selector(viewWillDisappear:),
                    (IMP)mio_viewWillDisappear, (IMP *)&orig_mio_viewWillDisappear);
    MSHookMessageEx(vcClass, @selector(viewDidDisappear:),
                    (IMP)mio_viewDidDisappear, (IMP *)&orig_mio_viewDidDisappear);
    MSHookMessageEx(vcClass, @selector(viewWillLayoutSubviews),
                    (IMP)mio_viewWillLayoutSubviews, (IMP *)&orig_mio_viewWillLayoutSubviews);
    MSHookMessageEx(vcClass, @selector(viewDidLayoutSubviews),
                    (IMP)mio_viewDidLayoutSubviews, (IMP *)&orig_mio_viewDidLayoutSubviews);

    Class navClass = [UINavigationController class];

    MSHookMessageEx(navClass, @selector(pushViewController:animated:),
                    (IMP)mio_pushViewController, (IMP *)&orig_mio_pushViewController);
    MSHookMessageEx(navClass, @selector(popViewControllerAnimated:),
                    (IMP)mio_popViewControllerAnimated, (IMP *)&orig_mio_popViewControllerAnimated);
    MSHookMessageEx(navClass, @selector(popToViewController:animated:),
                    (IMP)mio_popToViewController, (IMP *)&orig_mio_popToViewController);
    MSHookMessageEx(navClass, @selector(popToRootViewControllerAnimated:),
                    (IMP)mio_popToRootViewControllerAnimated, (IMP *)&orig_mio_popToRootViewControllerAnimated);

    MSHookMessageEx(vcClass, @selector(presentViewController:animated:completion:),
                    (IMP)mio_presentViewController, (IMP *)&orig_mio_presentViewController);
    MSHookMessageEx(vcClass, @selector(dismissViewControllerAnimated:completion:),
                    (IMP)mio_dismissViewControllerAnimated, (IMP *)&orig_mio_dismissAnimatedViewController);

    WPLog(@"DevTools", @"[MioNavMonitor] ✓ 13个Hook已安装");
}

#pragma mark - VC Filtering

- (BOOL)shouldIgnoreVC:(UIViewController *)vc {
    if (!vc) return YES;

    NSString *className = NSStringFromClass([vc class]);

    if ([className hasPrefix:@"_UI"]) return YES;

    if ([className hasPrefix:@"UI"] &&
        ![className isEqualToString:@"UIViewController"]) return YES;

    NSArray *ignoreList = @[
        @"MioLogViewerController",
        @"MioNavViewerController",
        @"MioDevToolsSettingController",
        @"UINavigationController",
    ];
    if ([ignoreList containsObject:className]) return YES;

    if ([className hasPrefix:@"MMUINavigationController"] ||
        [className isEqualToString:@"MMUINavigationController"]) return YES;

    return NO;
}

#pragma mark - VC Name Formatting

- (NSString *)displayNameForVC:(UIViewController *)vc {
    NSString *className = NSStringFromClass([vc class]);

    NSString *chineseName = self.vcNameMap[className];
    if (chineseName) {
        return [NSString stringWithFormat:@"%@ (%@)", className, chineseName];
    }

    if (vc.title && vc.title.length > 0) {
        return [NSString stringWithFormat:@"%@ [%@]", className, vc.title];
    }

    return className;
}

- (NSDictionary<NSString *, NSString *> *)defaultVCNameMap {
    return @{
        @"NewMainFrameViewController":           @"微信主页",
        @"BaseMsgContentViewController":         @"聊天详情页",
        @"ContactsViewController":              @"通讯录",
        @"FindFriendEntryViewController":        @"添加朋友",
        @"WCTimeLineViewController":             @"朋友圈",
        @"MoreViewController":                  @"我",
        @"NewSettingViewController":            @"设置",
        @"WCPayMainViewControllerV2":           @"服务",
        @"MyFavoritesViewController":           @"收藏",
    };
}

#pragma mark - Data Access

- (NSArray<NSString *> *)allLogs {
    @synchronized(self.navLogs) {
        return [self.navLogs copy];
    }
}

- (void)clearLogs {
    @synchronized(self.navLogs) {
        [self.navLogs removeAllObjects];
    }
}

- (NSString *)exportLogsAsString {
    @synchronized(self.navLogs) {
        return [self.navLogs componentsJoinedByString:@"\n"];
    }
}

- (void)logEvent:(NSString *)eventTag vcName:(NSString *)vcName {
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    fmt.dateFormat = @"HH:mm:ss.SSS";
    NSString *ts = [fmt stringFromDate:[NSDate date]];

    NSString *line = [NSString stringWithFormat:@"%@ %@ %@", ts, eventTag, vcName ?: @"?"];

    @synchronized(self.navLogs) {
        [self.navLogs addObject:line];

        static const NSUInteger kMaxNavLogs = 1000;
        while (self.navLogs.count > kMaxNavLogs) {
            [self.navLogs removeObjectAtIndex:0];
        }
    }
}

#pragma mark - VC Hierarchy

- (NSAttributedString *)currentViewControllerHierarchy {
    UIWindow *keyWindow = nil;
    for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (scene.activationState == UISceneActivationStateForegroundActive) {
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            keyWindow = windowScene.windows.firstObject;
            break;
        }
    }
    if (!keyWindow) keyWindow = [UIApplication sharedApplication].keyWindow;
    if (!keyWindow) return [[NSAttributedString alloc] initWithString:@"无法获取窗口"];

    NSMutableAttributedString *result = [[NSMutableAttributedString alloc] init];
    [self buildHierarchyFromVC:keyWindow.rootViewController
                         level:0
                       intoResult:result];
    return result;
}

- (void)buildHierarchyFromVC:(UIViewController *)vc
                      level:(int)level
                    intoResult:(NSMutableAttributedString *)result {
    if (!vc) return;

    NSString *indent = [@"" stringByPaddingToLength:level * 2
                                      withString:@" "
                                 startingAtIndex:0];
    NSString *name = [self displayNameForVC:vc];
    NSString *line = [NSString stringWithFormat:@"%@├─ %@\n", indent, name];

    NSDictionary *attrs = @{
        NSFontAttributeName: [UIFont monospacedSystemFontOfSize:12 weight:UIFontWeightRegular],
        NSForegroundColorAttributeName: [UIColor labelColor]
    };
    [result appendAttributedString:[[NSAttributedString alloc]
                                   initWithString:line attributes:attrs]];

    if ([vc isKindOfClass:[UINavigationController class]]) {
        UINavigationController *nav = (UINavigationController *)vc;
        for (UIViewController *child in nav.childViewControllers) {
            [self buildHierarchyFromVC:child level:level + 1 intoResult:result];
        }
    }

    if (vc.presentedViewController) {
        [self buildHierarchyFromVC:vc.presentedViewController level:level + 1 intoResult:result];
    }

    for (UIViewController *child in vc.childViewControllers) {
        [self buildHierarchyFromVC:child level:level + 1 intoResult:result];
    }
}

@end
