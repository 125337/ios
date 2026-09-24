//
//  PrivacyHook.m
//  MioPlugin
//
//  微信加密 + 后台模糊 + 指定页面上锁 + 后台保活 运行时。
//
//  WCR 反编译依据（WCR反编译/ 目录）：
//  - EncryptionLock::handleWillResignActive：encryptionEnabled → 记录 lastBackgroundTime + 黑遮罩
//  - EncryptionLock::handleWillEnterForeground：已解锁 && 距离开 < 保护时间(默认15s) → 免验证摘遮罩；
//    否则重置解锁态 → presentLockScreenIfNeeded（先自动生物识别，失败落密码键盘）
//  - EncryptionLock::setupLockWindow：clear 窗 + 深色毛玻璃(UIBlurEffectStyleDark)铺底，level=statusBar+1000
//  - EncryptionLock::showLockScreen：标题 + 6 空心圆点(白描边直径15) + 3x4 圆形数字键盘(直径=屏宽/5、
//    间距20、0 在第4行第2列) + FaceID/TouchID 圆钮(40x40 位于圆点上方40) + 底部提示(白字14)；
//    numberButtonTapped_：输满 6 位 100ms 后比对，对 → unlockApp，错 → 清空圆点
//  - WCRefineBackgroundBlur：handleMoveToBackground → scheduleApplyBlur(100ms) → applyBlurIfNeeded：
//    毛玻璃(UIBlurEffectStyleLight)直接贴应用 keyWindow 内层，alpha=模糊度/100，无独立遮罩窗
//    （黑色遮罩窗仅加密功能使用：showBackgroundPrivacyCover，level=statusBar+1001）
//  - unlockApp：验证通过 → hasUnlockedSuccessfully=YES、lastBackgroundTime=now、释放锁窗
//  - WCRefinePageLockGuard::markUnlockedForKey_：lastUnlockByKey[time] 保护窗免重复验证
//  - WCRefineBackgroundKeepAlive::ensureAudioPlaying：setCategory Playback+mixWithOthers +
//    silentPlayer 静音播放器保活；backgroundKeepAliveInterval 心跳周期
//  Mio 差异：保护时间/面部识别开关为 Mio 设置项；未复刻 WCR 的连续失败锁定与双击重置密码。
//

#import "PrivacyHook.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <LocalAuthentication/LocalAuthentication.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import <UserNotifications/UserNotifications.h>
#import "PrivacyConfig.h"
#import "../../Core/LogManager.h"

static IMP orig_Nav_push = NULL;           // UINavigationController::pushViewController:animated:

// 微信加密状态（WCR EncryptionLock 同名状态）
static UIWindow *g_coverWindow = nil;        // 黑色隐私遮罩（仅加密功能，resign 盖）
static UIWindow *g_lockWindow = nil;         // 锁屏窗（深色毛玻璃 + 数字键盘）
static NSDate *g_lastResignDate = nil;       // 宽限基准：离开/解锁时刻（WCR lastBackgroundTime）
static BOOL g_hasUnlocked = NO;              // WCR hasUnlockedSuccessfully
static BOOL g_biometricAuthenticating = NO;  // 系统 FaceID/TouchID 弹窗进行中
static BOOL g_biometricAttempted = NO;       // 本次锁定周期已自动试过生物识别
static NSMutableString *g_enteredCode = nil; // 键盘已输入的密码

// 后台模糊状态（WCR WCRefineBackgroundBlur：毛玻璃贴应用窗口，无独立遮罩窗）
static UIVisualEffectView *g_frostView = nil;

static NSMutableDictionary *g_pageUnlockByKey = nil; // 页面锁保护窗：类名 → 解锁时刻
static BOOL g_pageVerifying = NO;          // 页面锁验证中（拦截期间忽略重复进入请求）
static BOOL g_installed = NO;

static void MioNumberTapped(UIButton *btn);   // 锁屏键盘按钮回调（MioLockPadController 转发）
static void MioBiometricTapped(void);

/// 密码是否可用（6 位数字才允许锁，防止改密码时误设短密码导致永远解不开）
static BOOL MioEncryptPasswordValid(void) {
    return [PrivacyConfig shared].privacyEncryptPassword.length == 6;
}

#pragma mark - ① 微信加密（黑遮罩 + 锁屏键盘）

/// 前台 scene（windowScene 优先，WCR 同款）
static UIWindowScene *MioForegroundScene(void) {
    for (UIScene *s in [UIApplication sharedApplication].connectedScenes) {
        if (s.activationState == UISceneActivationStateForegroundActive ||
            s.activationState == UISceneActivationStateForegroundInactive) {
            if ([s isKindOfClass:[UIWindowScene class]]) return (UIWindowScene *)s;
        }
    }
    return nil;
}

/// 应用 keyWindow（后台模糊毛玻璃的宿主）
static UIWindow *MioKeyWindow(void) {
    for (UIScene *s in [UIApplication sharedApplication].connectedScenes) {
        if (s.activationState != UISceneActivationStateForegroundActive &&
            s.activationState != UISceneActivationStateForegroundInactive) continue;
        if (![s isKindOfClass:[UIWindowScene class]]) continue;
        UIWindowScene *ws = (UIWindowScene *)s;
        for (UIWindow *w in ws.windows) if (w.isKeyWindow) return w;
        for (UIWindow *w in ws.windows) if (!w.hidden && w.alpha > 0.01f) return w;
    }
    return nil;
}

/// 加密黑遮罩（WCR showBackgroundPrivacyCover：黑底独立窗；后台模糊不走此路径）
static void MioShowCover(void) {
    if (g_coverWindow) return;
    UIWindow *window = nil;
    UIWindowScene *scene = MioForegroundScene();
    if (scene) window = [[UIWindow alloc] initWithWindowScene:scene];
    if (!window) {
        window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    }
    window.backgroundColor = [UIColor blackColor];
    window.windowLevel = UIWindowLevelStatusBar + 1001.0; // WCR: statusBar + 1001
    window.rootViewController = [UIViewController new];
    window.hidden = NO;
    [window makeKeyAndVisible];
    g_coverWindow = window;
    WPLog(@"Privacy", @"[Encrypt] 黑遮罩已盖");
}

static void MioHideCover(void) {
    if (!g_coverWindow) return;
    UIWindow *w = g_coverWindow;
    g_coverWindow = nil;
    w.hidden = YES;
    w.rootViewController = nil;
    WPLog(@"Privacy", @"[Encrypt] 黑遮罩已摘");
}

/// 锁屏宿主 VC：数字键/生物识别钮的 target（桥接到文件内 C 函数）
@interface MioLockPadController : UIViewController
@end
@implementation MioLockPadController
- (void)mioNumberTapped:(UIButton *)sender { MioNumberTapped(sender); }
- (void)mioBiometricTapped:(UIButton *)sender { MioBiometricTapped(); }
@end

/// 锁屏窗（WCR setupLockWindow：clear 窗 + 深色毛玻璃铺底，level=statusBar+1000）
static void MioSetupLockWindow(void) {
    if (g_lockWindow) return;
    UIWindow *window = nil;
    UIWindowScene *scene = MioForegroundScene();
    if (scene) window = [[UIWindow alloc] initWithWindowScene:scene];
    if (!window) {
        window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    }
    window.backgroundColor = [UIColor clearColor];
    window.windowLevel = UIWindowLevelStatusBar + 1002.0; // WCR: statusBar + 1000（取高一号保证盖过黑遮罩）

    MioLockPadController *pad = [MioLockPadController new];
    pad.view.backgroundColor = [UIColor clearColor];
    UIVisualEffectView *blur = [[UIVisualEffectView alloc]
        initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleDark]];
    blur.frame = window.bounds;
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [pad.view addSubview:blur];

    window.rootViewController = pad;
    window.hidden = NO;
    [window makeKeyAndVisible];
    g_lockWindow = window;
}

static void MioTeardownLockWindow(void) {
    if (!g_lockWindow) return;
    UIWindow *w = g_lockWindow;
    g_lockWindow = nil;
    w.hidden = YES;
    w.rootViewController = nil; // 顺带释放键盘 UI 与输入状态载体
    g_enteredCode = nil;
    WPLog(@"Privacy", @"[Encrypt] 锁屏窗已释放");
}

/// 解锁（WCR unlockApp：hasUnlockedSuccessfully=YES、lastBackgroundTime=now、释放锁窗）
static void MioUnlockApp(void) {
    g_hasUnlocked = YES;
    g_lastResignDate = [NSDate date];
    g_biometricAttempted = NO;
    MioTeardownLockWindow();
}

/// 密码键盘 UI（WCR showLockScreen 全参数复刻）
static void MioShowLockScreen(void) {
    if (!g_lockWindow.rootViewController) return;
    UIView *host = g_lockWindow.rootViewController.view;
    if (!host || [host viewWithTag:100]) return; // 已在展示

    g_enteredCode = [NSMutableString string];
    CGFloat W = host.bounds.size.width;
    CGFloat H = host.bounds.size.height;
    CGFloat b = W / 5.0f;                                    // 键钮直径 = 屏宽/5
    // 垂直布局（各元素独立不重叠，整块视觉居中）：
    // 标题25 + 间距25 + 圆点15 + 间距35 + 键盘(4b+60) + 间距30 + 提示20 = 4b+210
    CGFloat topY = (H - (b * 4.0f + 210.0f)) / 2.0f;         // 块顶（标题 y）
    CGFloat kbY = topY + 100.0f;                             // 键盘第一行顶

    // 标题
    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(0, topY, W, 25)];
    title.text = @"请输入密码";
    title.textColor = [UIColor whiteColor];
    title.textAlignment = NSTextAlignmentCenter;
    title.font = [UIFont systemFontOfSize:18.0f];
    [host addSubview:title];

    // 6 位空心圆点（容器 tag 100，圆点 tag 1-6）
    UIView *dots = [[UIView alloc] initWithFrame:CGRectMake(0, 0, b * 3.0f - 20.0f, 15.0f)];
    dots.center = CGPointMake(W / 2.0f, topY + 50.0f + 7.5f);
    dots.tag = 100;
    [host addSubview:dots];
    CGFloat gap = (dots.bounds.size.width - 6.0f * 15.0f) / 5.0f;
    for (NSInteger i = 0; i < 6; i++) {
        UIView *dot = [[UIView alloc] initWithFrame:CGRectMake(i * (15.0f + gap), 0, 15.0f, 15.0f)];
        dot.layer.cornerRadius = 7.5f;
        dot.layer.borderColor = [UIColor whiteColor].CGColor;
        dot.layer.borderWidth = 1.0f;
        dot.backgroundColor = [UIColor clearColor];
        dot.tag = i + 1;
        [dots addSubview:dot];
    }

    // FaceID/TouchID 圆钮（开关开启且设备支持时展示，位于圆点上方 40）
    PrivacyConfig *cfg = [PrivacyConfig shared];
    BOOL faceID = NO;
    if (cfg.privacyEncryptBiometricEnabled) {
        LAContext *ctx = [LAContext new];
        NSError *err = nil;
        if ([ctx canEvaluatePolicy:LAPolicyDeviceOwnerAuthenticationWithBiometrics error:&err] &&
            ctx.biometryType == LABiometryTypeFaceID) {
            faceID = YES;
        }
        UIButton *bio = [UIButton buttonWithType:UIButtonTypeCustom];
        bio.frame = CGRectMake(0, 0, 40.0f, 40.0f);
        bio.center = CGPointMake(W / 2.0f, topY - 40.0f);
        [bio setImage:[UIImage systemImageNamed:faceID ? @"faceid" : @"touchid"]
             forState:UIControlStateNormal];
        bio.tintColor = [UIColor whiteColor];
        bio.backgroundColor = [UIColor colorWithWhite:1.0f alpha:0.15f];
        bio.layer.cornerRadius = 20.0f;
        [bio addTarget:g_lockWindow.rootViewController action:@selector(mioBiometricTapped:)
              forControlEvents:UIControlEventTouchUpInside];
        [host addSubview:bio];
    }

    // 3x4 圆形数字键盘（1-9 + 0 在第 4 行第 2 列，iOS 锁屏布局，无删除键）
    // WCR showLockScreen.c:482：x 起点 = centerX - 键盘总宽(3b+40)/2，键盘块以屏宽居中
    CGFloat kbX = W / 2.0f - (b * 3.0f + 40.0f) / 2.0f;
    NSArray<NSString *> *titles = @[@"1", @"2", @"3", @"4", @"5", @"6", @"7", @"8", @"9"];
    for (NSInteger i = 0; i < 9; i++) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(kbX + (b + 20.0f) * (i % 3),
                               kbY + (b + 20.0f) * (i / 3), b, b);
        [btn setTitle:titles[i] forState:UIControlStateNormal];
        btn.titleLabel.font = [UIFont systemFontOfSize:b / 2.0f];
        [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        btn.backgroundColor = [UIColor colorWithWhite:1.0f alpha:0.15f];
        btn.layer.cornerRadius = b / 2.0f;
        btn.tag = i + 1;
        [btn addTarget:g_lockWindow.rootViewController action:@selector(mioNumberTapped:)
              forControlEvents:UIControlEventTouchUpInside];
        [host addSubview:btn];
    }
    UIButton *zero = [UIButton buttonWithType:UIButtonTypeCustom];
    zero.frame = CGRectMake(W / 2.0f - b / 2.0f, kbY + (b + 20.0f) * 3.0f, b, b);
    [zero setTitle:@"0" forState:UIControlStateNormal];
    zero.titleLabel.font = [UIFont systemFontOfSize:b / 2.0f];
    [zero setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    zero.backgroundColor = [UIColor colorWithWhite:1.0f alpha:0.15f];
    zero.layer.cornerRadius = b / 2.0f;
    zero.tag = 0;
    [zero addTarget:g_lockWindow.rootViewController action:@selector(mioNumberTapped:)
          forControlEvents:UIControlEventTouchUpInside];
    [host addSubview:zero];

    // 底部提示
    UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(0, kbY + (b * 4.0f + 60.0f) + 30.0f, W, 20)];
    hint.text = @"请输入6位数字密码解锁";
    hint.textColor = [UIColor colorWithWhite:0.7f alpha:1.0f];
    hint.textAlignment = NSTextAlignmentCenter;
    hint.font = [UIFont systemFontOfSize:14.0f];
    [host addSubview:hint];

    WPLog(@"Privacy", @"[Encrypt] 锁屏键盘已展示（bio=%d faceID=%d）",
          cfg.privacyEncryptBiometricEnabled, faceID);
}

/// 输满 6 位后的比对（WCR numberButtonTapped_ 的 100ms 延迟块）
static void MioVerifyEnteredCode(void) {
    if (!g_lockWindow) return;
    NSString *input = [g_enteredCode copy];
    NSString *pwd = [PrivacyConfig shared].privacyEncryptPassword ?: @"";
    if (pwd.length == 6 && [input isEqualToString:pwd]) {
        WPLog(@"Privacy", @"[Encrypt] 密码解锁成功");
        MioUnlockApp();
    } else {
        WPLog(@"Privacy", @"[Encrypt] 密码错误，清空重输");
        [g_enteredCode setString:@""];
        UIView *dots = [g_lockWindow.rootViewController.view viewWithTag:100];
        for (NSInteger t = 1; t <= 6; t++) {
            [dots viewWithTag:t].backgroundColor = [UIColor clearColor];
        }
    }
}

static void MioNumberTapped(UIButton *btn) {
    if (!g_enteredCode || g_enteredCode.length >= 6) return;
    UIImpactFeedbackGenerator *haptic =
        [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
    [haptic impactOccurred]; // WCR playTapticFeedback

    [g_enteredCode appendFormat:@"%ld", (long)btn.tag];
    UIView *dot = [g_lockWindow.rootViewController.view viewWithTag:g_enteredCode.length];
    dot.backgroundColor = [UIColor whiteColor];
    if (g_enteredCode.length == 6) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)), // WCR 100ms
                       dispatch_get_main_queue(), ^{ MioVerifyEnteredCode(); });
    }
}

/// 生物识别自动尝试（WCR authenticateWithBiometrics：成功直接解锁，失败落键盘）
static void MioAuthenticateWithBiometrics(void) {
    if (g_biometricAuthenticating) return;
    g_biometricAuthenticating = YES;
    g_biometricAttempted = YES;

    LAContext *ctx = [LAContext new];
    ctx.localizedFallbackTitle = @"";
    NSError *err = nil;
    if (![ctx canEvaluatePolicy:LAPolicyDeviceOwnerAuthenticationWithBiometrics error:&err]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            g_biometricAuthenticating = NO;
            MioShowLockScreen();
        });
        return;
    }
    [ctx evaluatePolicy:LAPolicyDeviceOwnerAuthenticationWithBiometrics
        localizedReason:@"验证以解锁微信"
                  reply:^(BOOL ok, NSError *e) {
        dispatch_async(dispatch_get_main_queue(), ^{
            g_biometricAuthenticating = NO;
            if (ok) {
                WPLog(@"Privacy", @"[Encrypt] 生物识别解锁成功");
                MioUnlockApp();
            } else {
                WPLog(@"Privacy", @"[Encrypt] 生物识别失败，落密码键盘 (%@)", e.localizedDescription);
                MioShowLockScreen();
            }
        });
    }];
}

static void MioBiometricTapped(void) {
    UIImpactFeedbackGenerator *haptic =
        [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
    [haptic impactOccurred];
    g_biometricAttempted = NO; // WCR biometricButtonTapped_：重置标记后重试
    MioAuthenticateWithBiometrics();
}

/// 按需弹锁（WCR presentLockScreenIfNeeded：先自动生物识别，失败落键盘）
static void MioPresentLockScreenIfNeeded(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];
    if (!cfg.privacyEncryptEnabled || !MioEncryptPasswordValid()) return;
    if (g_hasUnlocked || g_biometricAuthenticating) return;

    MioSetupLockWindow();
    if (cfg.privacyEncryptBiometricEnabled && !g_biometricAttempted) {
        MioAuthenticateWithBiometrics();
    } else {
        MioShowLockScreen();
    }
}

/// 回前台（WCR handleWillEnterForeground 语义：已解锁 && 距离开 < 保护时间 → 免验证只摘遮罩；
/// 否则重置解锁态弹锁。冷启动从未解锁 → 首次进微信即验证。基准是"离开时刻"，
/// 解锁后再用一段时间切后台会重新计时，普通短暂切后台不会误弹）
static void MioHandleDidBecomeActive(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];

    if (!cfg.privacyEncryptEnabled || !MioEncryptPasswordValid()) {
        MioHideCover(); // 未开加密（仅模糊）：直接摘黑遮罩
        return;
    }
    if (g_biometricAuthenticating) return; // 系统识别弹窗进行中（WCR 同款守卫）

    NSInteger prot = cfg.privacyEncryptProtectionTime;
    if (prot < 5) prot = 5;    // 最低 5 秒：保证宽限兜底，避免每次回前台都弹锁
    if (prot > 60) prot = 60;
    BOOL withinGrace = NO;
    if (g_hasUnlocked && g_lastResignDate) {
        NSTimeInterval away = -[g_lastResignDate timeIntervalSinceNow];
        withinGrace = (away < (NSTimeInterval)prot); // WCR: away < timeoutInterval
    }
    WPLog(@"Privacy", @"[Encrypt] 回前台判定：unlocked=%d away=%.1fs prot=%ld → %@",
          g_hasUnlocked,
          g_lastResignDate ? -[g_lastResignDate timeIntervalSinceNow] : -1.0,
          (long)prot, withinGrace ? @"免验证" : @"需验证");
    if (withinGrace) {
        MioHideCover();
        WPLog(@"Privacy", @"[Encrypt] 保护时间(%ld s)内回前台，免验证", (long)prot);
        return;
    }
    // 超时/冷启动：重置解锁态弹锁（锁窗盖在黑遮罩上，随后摘遮罩）
    BOOL wasUnlocked = g_hasUnlocked;
    g_hasUnlocked = NO;
    if (wasUnlocked) g_biometricAttempted = NO; // WCR：曾解锁才重置生物识别尝试标记
    MioPresentLockScreenIfNeeded();
    MioHideCover();
}

#pragma mark - ② 后台模糊（WCR WCRefineBackgroundBlur：毛玻璃贴应用窗口，无遮罩窗）

/// 模糊度（0-100，默认 80）→ 毛玻璃透明度（WCR backgroundBlurIntensity 同款直映射）
static CGFloat MioFrostAlpha(void) {
    NSInteger d = [PrivacyConfig shared].privacyBlurDegree;
    if (d <= 0) d = 80;
    if (d > 100) d = 100;
    return d / 100.0f;
}

static void MioApplyFrost(void) {
    if (![PrivacyConfig shared].privacyBlurEnabled) return;
    UIWindow *w = MioKeyWindow();
    if (!w) return;

    if (!g_frostView) {
        g_frostView = [[UIVisualEffectView alloc]
            initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleLight]];
        g_frostView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    }
    g_frostView.frame = w.bounds;
    if (g_frostView.superview != w) {
        [g_frostView removeFromSuperview];
        g_frostView.alpha = 0.0f;
        [w addSubview:g_frostView];
    }
    [w bringSubviewToFront:g_frostView];
    g_frostView.clipsToBounds = YES;
    [UIView animateWithDuration:0.25f delay:0.0f
                        options:UIViewAnimationOptionBeginFromCurrentState
                     animations:^{ g_frostView.alpha = MioFrostAlpha(); }
                     completion:nil];
    WPLog(@"Privacy", @"[Blur] 毛玻璃已盖（degree=%ld）", (long)[PrivacyConfig shared].privacyBlurDegree);
}

static void MioRemoveFrost(void) {
    if (!g_frostView) return;
    UIVisualEffectView *v = g_frostView;
    g_frostView = nil;
    [UIView animateWithDuration:0.25f delay:0.0f
                        options:UIViewAnimationOptionBeginFromCurrentState
                     animations:^{ v.alpha = 0.0f; }
                     completion:^(BOOL finished) { [v removeFromSuperview]; }];
    WPLog(@"Privacy", @"[Blur] 毛玻璃已摘");
}

#pragma mark - ③ 指定页面上锁

/// 真机确认的页面类名 → 配置 key（用户 2026-09-24 真机抓取提供，二轮更正后的 8 项全量映射）
static NSDictionary<NSString *, NSString *> *MioPageLockMap(void) {
    static NSDictionary *m = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        m = @{
            @"WCPayMainViewControllerV2":                  @"privacyLockMyPayEnabled",
            @"MyFavoritesViewController":                  @"privacyLockMyFavoriteEnabled",
            @"WCStoryAlbumViewController":                 @"privacyLockMyMomentEnabled",   // 我朋友圈页（个人相册）
            @"WCTimeLineViewController":                   @"privacyLockMomentEnabled",     // 朋友圈页面（发现→朋友圈 feed）
            @"WCFinderStreamProfileHeaderViewController":  @"privacyLockMyChannelsEnabled", // 我视频号页（个人主页）
            @"WCFinderFullFeedFollowViewController":       @"privacyLockChannelsEnabled",   // 视频号页面（发现→视频号 feed）
            @"WCPluginsViewController":                    @"privacyLockMyPluginEnabled",
            @"NewSettingViewController":                   @"privacyLockMySettingEnabled",
        };
    });
    return m;
}

/// 该 VC 是否命中"已开启的页面锁"→ 返回配置 key
static NSString *MioPageLockKeyForVC(UIViewController *vc) {
    if (!vc) return nil;
    NSString *clsName = NSStringFromClass(vc.class);
    NSString *key = MioPageLockMap()[clsName];
    if (!key) return nil;
    // valueForKey: 对 BOOL 属性返回 NSNumber（NO 也是非 nil 对象），必须取 boolValue
    return [[[PrivacyConfig shared] valueForKey:key] boolValue] ? key : nil;
}

/// 页面锁保护窗内？（WCR PageLockGuard isWithinProtectionWindowForKey_ 同语义）
static BOOL MioPageInUnlockWindow(NSString *clsName) {
    NSNumber *t = g_pageUnlockByKey[clsName];
    if (!t) return NO;
    PrivacyConfig *cfg = [PrivacyConfig shared];
    NSInteger protect = cfg.privacyPageLockUnlockTime;
    if (protect <= 0) return NO;
    return ([NSDate date].timeIntervalSince1970 - t.doubleValue) <= (double)protect;
}

/// 页面锁验证（WCR 语义：先验证再进入，不通过则不进入）。验证走设备生物识别
/// （WCR 页面锁走 LAContext，与微信加密的 6 位密码完全独立）；生物识别不可用时
/// 兜底设备锁屏密码。通过 → 记录保护窗并放行 push；不通过 → 停留当前页。
static void MioVerifyPageLockThenPush(UINavigationController *nav, SEL pushSel,
                                      UIViewController *vc, BOOL animated, NSString *clsName) {
    WPLog(@"Privacy", @"[PageLock] 拦截锁定页，先验证再进入: %@", clsName);
    LAContext *ctx = [LAContext new];
    ctx.localizedFallbackTitle = @"输入设备密码";
    NSError *err = nil;
    LAPolicy policy = LAPolicyDeviceOwnerAuthentication; // 兜底：设备锁屏密码
    if ([ctx canEvaluatePolicy:LAPolicyDeviceOwnerAuthenticationWithBiometrics error:&err]) {
        policy = LAPolicyDeviceOwnerAuthenticationWithBiometrics;
    }
    [ctx evaluatePolicy:policy
        localizedReason:@"验证以进入该页面"
                  reply:^(BOOL ok, NSError *e) {
        dispatch_async(dispatch_get_main_queue(), ^{
            g_pageVerifying = NO;
            if (ok) {
                // WCR markUnlockedForKey_：解锁成功记录时刻，保护窗内免重复验证
                g_pageUnlockByKey[clsName] = @([NSDate date].timeIntervalSince1970);
                WPLog(@"Privacy", @"[PageLock] 验证通过，进入: %@", clsName);
                ((void (*)(id, SEL, UIViewController *, BOOL))orig_Nav_push)(nav, pushSel, vc, animated);
            } else {
                WPLog(@"Privacy", @"[PageLock] 验证未通过，不进入: %@ (%@)", clsName, e.localizedDescription);
            }
        });
    }];
}

// UINavigationController::pushViewController:animated: hook（低频导航路径，零热路径风险）
// 页面锁与微信加密完全解耦：只看各子开关，验证走设备生物识别
static void hook_Nav_push(id self, SEL _cmd, UIViewController *vc, BOOL animated) {
    if (vc) {
        NSString *key = MioPageLockKeyForVC(vc); // 内部含子开关开启判定
        if (key) {
            NSString *clsName = NSStringFromClass(vc.class);
            if (!MioPageInUnlockWindow(clsName)) {
                if (g_pageVerifying) { // 验证中：忽略重复的锁定页进入请求
                    WPLog(@"Privacy", @"[PageLock] 验证中，忽略重复请求: %@", clsName);
                    return;
                }
                g_pageVerifying = YES;
                MioVerifyPageLockThenPush(self, _cmd, vc, animated, clsName);
                return;
            }
            WPLog(@"Privacy", @"[PageLock] 保护窗内放行: %@", clsName);
        }
    }
    ((void (*)(id, SEL, UIViewController *, BOOL))orig_Nav_push)(self, _cmd, vc, animated);
}

#pragma mark - ④ 后台保活

static NSTimer *g_kaTimer = nil;
static AVAudioPlayer *g_silentPlayer = nil;
static UIBackgroundTaskIdentifier g_kaTask; // install 时置为 UIBackgroundTaskInvalid
static NSInteger g_kaFailCount = 0;

/// 生成 0.5s 静音 wav（8kHz 8bit mono），落 Caches 复用
static NSString *MioSilentWavPath(void) {
    NSString *path = [NSTemporaryDirectory() stringByAppendingPathComponent:@"mio_silent.wav"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:path]) return path;

    NSUInteger sampleRate = 8000;
    NSUInteger dataLen = sampleRate / 2; // 0.5s
    NSMutableData *wav = [NSMutableData dataWithCapacity:44 + dataLen];
    uint8_t hdr[44] = {
        'R','I','F','F', 0,0,0,0, 'W','A','V','E','f','m','t',' ',
        16,0,0,0, 1,0, 1,0, (uint8_t)(sampleRate & 0xFF),(uint8_t)(sampleRate >> 8),0,0,
        (uint8_t)(sampleRate & 0xFF),(uint8_t)(sampleRate >> 8),0,0, 1,0, 8,0,
        'd','a','t','a', (uint8_t)(dataLen & 0xFF),(uint8_t)((dataLen >> 8) & 0xFF),0,0
    };
    uint32_t riffSize = (uint32_t)(36 + dataLen);
    hdr[4] = riffSize & 0xFF; hdr[5] = (riffSize >> 8) & 0xFF; hdr[6] = (riffSize >> 16) & 0xFF; hdr[7] = (riffSize >> 24) & 0xFF;
    [wav appendBytes:hdr length:44];
    uint8_t silence = 0x80;
    for (NSUInteger i = 0; i < dataLen; i++) [wav appendBytes:&silence length:1];
    [wav writeToFile:path atomically:YES];
    return path;
}

/// 掉线通知：保活中断时发本地通知（privacyOfflineNotifyEnabled 开启时）
static void MioNotifyKeepAliveBroken(void) {
    if (![PrivacyConfig shared].privacyOfflineNotifyEnabled) return;
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    [center requestAuthorizationWithOptions:(UNAuthorizationOptionAlert | UNAuthorizationOptionSound)
                          completionHandler:^(BOOL granted, NSError *err) {
        if (!granted) return;
        UNMutableNotificationContent *c = [UNMutableNotificationContent new];
        c.title = @"Mio 后台保活";
        c.body = @"后台保活已中断，微信可能掉线，请回前台检查";
        UNNotificationRequest *req = [UNNotificationRequest requestWithIdentifier:@"mio.keepalive.broken"
                                                                          content:c trigger:nil];
        [center addNotificationRequest:req withCompletionHandler:nil];
    }];
}

/// 心跳：校验播放器活性，异常自动重启；连续失败发掉线通知
static void MioKeepAliveHeartbeat(void) {
    if (!g_silentPlayer || !g_silentPlayer.isPlaying) {
        BOOL ok = [g_silentPlayer play];
        if (!ok) {
            g_kaFailCount++;
            WPLog(@"Privacy", @"[KeepAlive] 心跳恢复失败（%ld 次）", (long)g_kaFailCount);
            if (g_kaFailCount >= 3) {
                MioNotifyKeepAliveBroken();
                g_kaFailCount = 0;
            }
        } else {
            g_kaFailCount = 0;
        }
    } else {
        g_kaFailCount = 0;
    }
    // 续后台执行时间
    if (g_kaTask != UIBackgroundTaskInvalid) {
        [[UIApplication sharedApplication] endBackgroundTask:g_kaTask];
        g_kaTask = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:^{
            g_kaTask = UIBackgroundTaskInvalid;
        }];
    }
}

static void MioStartKeepAlive(void) {
    if (g_kaTimer) return; // 已在保活
    @try {
        AVAudioSession *session = [AVAudioSession sharedInstance];
        [session setCategory:AVAudioSessionCategoryPlayback
                 withOptions:AVAudioSessionCategoryOptionMixWithOthers error:nil];
        [session setActive:YES error:nil];

        NSString *path = MioSilentWavPath();
        g_silentPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:[NSURL fileURLWithPath:path] error:nil];
        g_silentPlayer.numberOfLoops = -1;   // 无限循环
        g_silentPlayer.volume = 0.0f;        // 静音
        [g_silentPlayer play];

        g_kaTask = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:^{
            g_kaTask = UIBackgroundTaskInvalid;
        }];

        NSInteger interval = [PrivacyConfig shared].privacyKeepAliveInterval;
        if (interval < 10) interval = 10;
        if (interval > 30) interval = 30;    // UI 约定 10-30s，默认 25
        NSTimeInterval iv = interval;
        dispatch_async(dispatch_get_main_queue(), ^{
            g_kaTimer = [NSTimer timerWithTimeInterval:iv repeats:YES block:^(NSTimer *t) {
                MioKeepAliveHeartbeat();
            }];
            [[NSRunLoop mainRunLoop] addTimer:g_kaTimer forMode:NSRunLoopCommonModes];
        });
        WPLog(@"Privacy", @"[KeepAlive] 启动（周期 %ld s）", (long)interval);
    } @catch (NSException *e) {
        WPLog(@"Privacy", @"[KeepAlive] 启动异常: %@", e.reason);
        MioNotifyKeepAliveBroken();
    }
}

static void MioStopKeepAlive(void) {
    if (g_kaTimer) { [g_kaTimer invalidate]; g_kaTimer = nil; }
    if (g_silentPlayer) { [g_silentPlayer stop]; g_silentPlayer = nil; }
    if (g_kaTask != UIBackgroundTaskInvalid) {
        [[UIApplication sharedApplication] endBackgroundTask:g_kaTask];
        g_kaTask = UIBackgroundTaskInvalid;
    }
    WPLog(@"Privacy", @"[KeepAlive] 停止");
}

#pragma mark - 生命周期通知回调

static void MioOnWillResignActive(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];

    // 后台保活：进后台即启动（与加密/模糊互不影响）
    if (cfg.privacyKeepAliveEnabled) MioStartKeepAlive();

    // 后台模糊：毛玻璃贴应用窗口（WCR scheduleApplyBlur 延迟 100ms 同款，离开后再盖避免可见闪烁）
    if (cfg.privacyBlurEnabled) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{ MioApplyFrost(); });
    }

    // 加密：记录离开时刻（宽限基准）+ 盖黑遮罩（WCR handleWillResignActive；识别弹窗期间不盖）
    if (cfg.privacyEncryptEnabled && !g_biometricAuthenticating && MioEncryptPasswordValid()) {
        g_lastResignDate = [NSDate date];
        if (!g_coverWindow) MioShowCover();
    }
}

static void MioOnDidEnterBackground(void) {
    // 无额外动作：保活与毛玻璃已在 resign 盖好；预留给后台清理
}

static void MioOnDidBecomeActive(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];

    // 回前台：摘毛玻璃 + 停保活 + 加密宽限/弹锁判定
    MioRemoveFrost();
    if (cfg.privacyKeepAliveEnabled) MioStopKeepAlive();

    MioHandleDidBecomeActive();
}

#pragma mark - 安装

@implementation PrivacyHook

+ (void)install {
    if (g_installed) return;
    g_installed = YES;

    g_pageUnlockByKey = [NSMutableDictionary dictionary];
    g_kaTask = UIBackgroundTaskInvalid;

    // ③ 页面锁：UINavigationController::pushViewController:animated:（低频导航 hook）
    Class navCls = objc_getClass("UINavigationController");
    if (navCls) {
        SEL pushSel = @selector(pushViewController:animated:);
        Method m = class_getInstanceMethod(navCls, pushSel);
        if (m) {
            MSHookMessageEx(navCls, pushSel, (IMP)hook_Nav_push, (IMP *)&orig_Nav_push);
            WPLog(@"Privacy", @"[PageLock] UINavigationController::pushViewController:animated: hooked");
        } else {
            WPLog(@"Privacy", @"[PageLock] push 方法未找到，页面锁未生效");
        }
    }

    // ①②④ 生命周期：NSNotificationCenter 驱动，零 hook
    NSNotificationCenter *nc = [NSNotificationCenter defaultCenter];
    id o1 = [nc addObserverForName:UIApplicationWillResignActiveNotification
                            object:nil queue:nil
                        usingBlock:^(NSNotification *note) { MioOnWillResignActive(); }];
    id o2 = [nc addObserverForName:UIApplicationDidBecomeActiveNotification
                            object:nil queue:nil
                        usingBlock:^(NSNotification *note) { MioOnDidBecomeActive(); }];
    id o3 = [nc addObserverForName:UIApplicationDidEnterBackgroundNotification
                            object:nil queue:nil
                        usingBlock:^(NSNotification *note) { MioOnDidEnterBackground(); }];
    (void)o1; (void)o2; (void)o3;

    WPLog(@"Privacy", @"[PrivacyHook] install complete（加密+模糊+页面锁+保活）");
}

+ (BOOL)isLockScreenPresented {
    return (g_coverWindow != nil || g_lockWindow != nil);
}

@end
