//
//  PrivacyHook.m
//  MioPlugin
//
//  微信加密 + 后台模糊 运行时。
//
//  WCR 反编译依据（WCR反编译/ 目录）：
//  - handleWillResignActive：encryptionEnabled 且非生物识别进行中 → 记录 lastBackgroundTime
//    + showBackgroundPrivacyCover（盖窗）
//  - showBackgroundPrivacyCover：全屏 UIWindow（windowScene 优先，无 scene 则 mainScreen frame）
//    + 黑色背景 + UIViewController.view + makeKeyAndVisible + level = UIWindowLevelStatusBar + 1001
//  - unlockApp：验证通过 → 失败计数清零、hasUnlockedSuccessfully=YES、lastBackgroundTime=now、释放锁窗
//  - toggleEncryption_/encryptionTimeout：超时默认 0xF = 15 秒（宽限窗口，短时间内切回免重输）
//  - Mio 差异点：WCR 遮罩为纯黑窗；Mio 的"后台模糊"是独立开关，未开加密时可叠加毛玻璃（模糊度映射 alpha）
//

#import "PrivacyHook.h"
#import <UIKit/UIKit.h>
#import "PrivacyConfig.h"
#import "../../Core/LogManager.h"

/// 解锁宽限（秒）：didBecomeActive 时距上次解锁 ≤ 宽限则免重输。对齐 WCR encryptionTimeout 默认 15s
static const NSTimeInterval kUnlockGraceSeconds = 15.0;

static UIWindow *g_coverWindow = nil;      // 遮罩窗（resign 盖、解锁摘）
static NSDate *g_lastUnlockDate = nil;     // 最近一次验证通过时刻（宽限基准，WCR lastBackgroundTime 同语义）
static BOOL g_verifying = NO;              // 密码弹窗防重入
static BOOL g_installed = NO;

#pragma mark - 遮罩窗

/// 模糊度（0-100，默认 80）→ 遮罩不透明度（0.45~1.0）
static CGFloat MioCoverAlpha(void) {
    NSInteger d = [PrivacyConfig shared].privacyBlurDegree;
    if (d <= 0) d = 80;
    if (d > 100) d = 100;
    return 0.45f + 0.55f * (d / 100.0f);
}

/// 盖遮罩：加密开 → 纯黑（WCR 同款）；仅模糊 → 黑底 + 毛玻璃按模糊度提透明度
static void MioShowCover(void) {
    if (g_coverWindow) return; // 已盖
    PrivacyConfig *cfg = [PrivacyConfig shared];

    UIWindow *window = nil;
    // iOS13+ 走 windowScene（WCR 同款分支），失败回退 frame
    UIScene *scene = nil;
    for (UIScene *s in [UIApplication sharedApplication].connectedScenes) {
        if (s.activationState == UISceneActivationStateForegroundActive ||
            s.activationState == UISceneActivationStateForegroundInactive) {
            scene = s;
            break;
        }
    }
    if ([scene isKindOfClass:[UIWindowScene class]]) {
        window = [[UIWindow alloc] initWithWindowScene:(UIWindowScene *)scene];
    }
    if (!window) {
        window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    }
    window.backgroundColor = [UIColor blackColor];
    window.windowLevel = UIWindowLevelStatusBar + 1001.0; // WCR: statusBar + 1001

    if (!cfg.privacyEncryptEnabled && cfg.privacyBlurEnabled) {
        // 仅后台模糊：黑底上叠毛玻璃，模糊度控制整体浓度
        UIBlurEffect *blur = [UIBlurEffect effectWithStyle:UIBlurEffectStyleRegular];
        UIVisualEffectView *blurView = [[UIVisualEffectView alloc] initWithEffect:blur];
        blurView.frame = window.bounds;
        blurView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        blurView.alpha = MioCoverAlpha();
        [window addSubview:blurView];
    }

    window.rootViewController = [UIViewController new]; // 提供呈现容器（密码弹窗挂这里）
    window.hidden = NO;
    [window makeKeyAndVisible];
    g_coverWindow = window;
    WPLog(@"Privacy", @"[Cover] 遮罩已盖（encrypt=%d blur=%d degree=%ld）",
          cfg.privacyEncryptEnabled, cfg.privacyBlurEnabled, (long)cfg.privacyBlurDegree);
}

/// 摘遮罩（WCR unlockApp 释放锁窗同款）
static void MioHideCover(void) {
    if (!g_coverWindow) return;
    UIWindow *w = g_coverWindow;
    g_coverWindow = nil;
    w.hidden = YES;
    w.rootViewController = nil;
    WPLog(@"Privacy", @"[Cover] 遮罩已摘");
}

#pragma mark - 密码验证

/// 在遮罩窗上弹 6 位密码验证；错误则重弹，直到正确或取消（取消 = 保持遮罩）
static void MioPresentVerifyAlert(void) {
    if (g_verifying || !g_coverWindow) return;
    UIViewController *host = g_coverWindow.rootViewController;
    if (!host) return;
    g_verifying = YES;

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"微信已加密"
                                                                  message:@"请输入 6 位密码解锁"
                                                           preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.secureTextEntry = YES;
        tf.keyboardType = UIKeyboardTypeNumberPad;
        tf.placeholder = @"6位数字密码";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"解锁" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        g_verifying = NO;
        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *pwd = [PrivacyConfig shared].privacyEncryptPassword ?: @"";
        if (pwd.length > 0 && [input isEqualToString:pwd]) {
            g_lastUnlockDate = [NSDate date]; // WCR unlockApp: lastBackgroundTime = now
            MioHideCover();
            WPLog(@"Privacy", @"[Encrypt] 解锁成功");
        } else {
            WPLog(@"Privacy", @"[Encrypt] 密码错误，重新验证");
            MioPresentVerifyAlert(); // 重弹
        }
    }]];
    [host presentViewController:alert animated:YES completion:nil];
}

/// 进入前台的验证决策（WCR handleApplicationWillEnterForeground/didBecomeActive 语义）
static void MioHandleDidBecomeActive(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];
    if (!g_coverWindow) return; // 没盖遮罩（两个开关都关）无需处理

    if (cfg.privacyEncryptEnabled && cfg.privacyEncryptPassword.length > 0) {
        // 宽限判定：距上次解锁 ≤ 15s 直接放行（从未解锁过不免验）
        BOOL withinGrace = NO;
        if (g_lastUnlockDate) {
            NSTimeInterval sinceUnlock = -[g_lastUnlockDate timeIntervalSinceNow];
            withinGrace = (sinceUnlock <= kUnlockGraceSeconds);
        }
        if (withinGrace) {
            g_lastUnlockDate = [NSDate date];
            MioHideCover();
            WPLog(@"Privacy", @"[Encrypt] 宽限期内免验证");
            return;
        }
        // 主队列稍等一拍，等遮罩窗布局稳定后再弹（冷启动场景）
        dispatch_async(dispatch_get_main_queue(), ^{
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.2 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{
                MioPresentVerifyAlert();
            });
        });
        return;
    }

    // 未开加密（仅后台模糊）：直接摘遮罩
    MioHideCover();
}

#pragma mark - 通知回调

static void MioOnWillResignActive(void) {
    // WCR handleWillResignActive：无遮罩且（加密开 或 模糊开）→ 盖窗
    PrivacyConfig *cfg = [PrivacyConfig shared];
    if (g_coverWindow) return;
    if (!cfg.privacyEncryptEnabled && !cfg.privacyBlurEnabled) return;
    MioShowCover();
}

static void MioOnDidBecomeActive(void) {
    MioHandleDidBecomeActive();
}

#pragma mark - 安装

@implementation PrivacyHook

+ (void)install {
    if (g_installed) return;
    g_installed = YES;

    NSNotificationCenter *nc = [NSNotificationCenter defaultCenter];
    id o1 = [nc addObserverForName:UIApplicationWillResignActiveNotification
                            object:nil queue:nil
                        usingBlock:^(NSNotification *note) { MioOnWillResignActive(); }];
    id o2 = [nc addObserverForName:UIApplicationDidBecomeActiveNotification
                            object:nil queue:nil
                        usingBlock:^(NSNotification *note) { MioOnDidBecomeActive(); }];
    // 观察者常驻，无需释放；消除未使用变量警告
    (void)o1; (void)o2;

    WPLog(@"Privacy", @"[PrivacyHook] install complete（加密+后台模糊，通知驱动零 hook）");
}

+ (BOOL)isLockScreenPresented {
    return (g_coverWindow != nil);
}

@end
