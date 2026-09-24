//
//  PrivacyHook.m
//  MioPlugin
//
//  微信加密 + 后台模糊 + 指定页面上锁 + 后台保活 运行时。
//
//  WCR 反编译依据（WCR反编译/ 目录）：
//  - handleWillResignActive：encryptionEnabled → 记录 lastBackgroundTime + showBackgroundPrivacyCover
//  - showBackgroundPrivacyCover：全屏 UIWindow（windowScene 优先）+ 黑背景 + level=statusBar+1001
//  - unlockApp：验证通过 → hasUnlockedSuccessfully=YES、lastBackgroundTime=now、释放锁窗
//  - encryptionTimeout 默认 0xF=15 秒（切回免重输宽限）
//  - WCRefinePageLockGuard::markUnlockedForKey_：lastUnlockByKey[time] 保护窗免重复验证
//  - WCRefineBackgroundKeepAlive::ensureAudioPlaying：setCategory Playback+mixWithOthers +
//    silentPlayer 静音播放器保活；backgroundKeepAliveInterval 心跳周期
//  Mio 差异：WCR 遮罩纯黑；Mio"后台模糊"独立开关，未开加密时毛玻璃按模糊度调浓度。
//

#import "PrivacyHook.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import <UserNotifications/UserNotifications.h>
#import "PrivacyConfig.h"
#import "../../Core/LogManager.h"

/// 解锁宽限（秒）：didBecomeActive 时距上次解锁 ≤ 宽限免重输（WCR encryptionTimeout 默认 15s）
static const NSTimeInterval kUnlockGraceSeconds = 15.0;

static IMP orig_Nav_push = NULL;           // UINavigationController::pushViewController:animated:

static UIWindow *g_coverWindow = nil;      // 遮罩窗（加密/模糊）
static NSDate *g_lastUnlockDate = nil;     // 加密解锁基准（宽限判定）
static BOOL g_verifying = NO;              // 弹窗防重入
static NSMutableDictionary *g_pageUnlockByKey = nil; // 页面锁保护窗：类名 → 解锁时刻
static BOOL g_installed = NO;

#pragma mark - ①② 遮罩窗（微信加密 / 后台模糊）

/// 模糊度（0-100，默认 80）→ 遮罩不透明度（0.45~1.0）
static CGFloat MioCoverAlpha(void) {
    NSInteger d = [PrivacyConfig shared].privacyBlurDegree;
    if (d <= 0) d = 80;
    if (d > 100) d = 100;
    return 0.45f + 0.55f * (d / 100.0f);
}

static void MioShowCover(void) {
    if (g_coverWindow) return;
    PrivacyConfig *cfg = [PrivacyConfig shared];

    UIWindow *window = nil;
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
        UIBlurEffect *blur = [UIBlurEffect effectWithStyle:UIBlurEffectStyleRegular];
        UIVisualEffectView *blurView = [[UIVisualEffectView alloc] initWithEffect:blur];
        blurView.frame = window.bounds;
        blurView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        blurView.alpha = MioCoverAlpha();
        [window addSubview:blurView];
    }

    window.rootViewController = [UIViewController new];
    window.hidden = NO;
    [window makeKeyAndVisible];
    g_coverWindow = window;
    WPLog(@"Privacy", @"[Cover] 遮罩已盖（encrypt=%d blur=%d degree=%ld）",
          cfg.privacyEncryptEnabled, cfg.privacyBlurEnabled, (long)cfg.privacyBlurDegree);
}

static void MioHideCover(void) {
    if (!g_coverWindow) return;
    UIWindow *w = g_coverWindow;
    g_coverWindow = nil;
    w.hidden = YES;
    w.rootViewController = nil;
    WPLog(@"Privacy", @"[Cover] 遮罩已摘");
}

/// 在指定宿主上弹 6 位密码验证；错误重弹。onPass 验证通过回调（主线程）
static void MioPresentVerifyAlert(UIViewController *host, NSString *title, void (^onPass)(void)) {
    if (!host) return;
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                  message:@"请输入 6 位密码"
                                                           preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.secureTextEntry = YES;
        tf.keyboardType = UIKeyboardTypeNumberPad;
        tf.placeholder = @"6位数字密码";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"解锁" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *pwd = [PrivacyConfig shared].privacyEncryptPassword ?: @"";
        if (pwd.length > 0 && [input isEqualToString:pwd]) {
            WPLog(@"Privacy", @"[Verify] 解锁成功（%@）", title);
            if (onPass) onPass();
        } else {
            WPLog(@"Privacy", @"[Verify] 密码错误（%@），重新验证", title);
            MioPresentVerifyAlert(host, title, onPass);
        }
    }]];
    [host presentViewController:alert animated:YES completion:nil];
}

/// 应用级加密验证：错误重弹直到正确或取消（取消保持遮罩）
static void MioPresentAppLockAlert(void) {
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
            MioPresentAppLockAlert();
        }
    }]];
    [host presentViewController:alert animated:YES completion:nil];
}

static void MioHandleDidBecomeActive(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];
    if (!g_coverWindow) return;

    if (cfg.privacyEncryptEnabled && cfg.privacyEncryptPassword.length > 0) {
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
        dispatch_async(dispatch_get_main_queue(), ^{
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.2 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{
                MioPresentAppLockAlert();
            });
        });
        return;
    }
    MioHideCover(); // 未开加密（仅模糊）：直接摘
}

#pragma mark - ③ 指定页面上锁

/// 真机确认的页面类名 → 配置 key（用户 2026-09-24 真机抓取提供）
/// 注意：朋友圈页面（发现→朋友圈）/ 视频号页面（发现→视频号）两个子开关的类名
/// 尚未真机确认，暂不接运行时，等确认后补进此表
static NSDictionary<NSString *, NSString *> *MioPageLockMap(void) {
    static NSDictionary *m = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        m = @{
            @"WCPayMainViewControllerV2":             @"privacyLockMyPayEnabled",
            @"MyFavoritesViewController":             @"privacyLockMyFavoriteEnabled",
            @"WCTimeLineViewController":              @"privacyLockMyMomentEnabled",
            @"WCFinderFullFeedFollowViewController":  @"privacyLockMyChannelsEnabled",
            @"WCPluginsViewController":               @"privacyLockMyPluginEnabled",
            @"NewSettingViewController":              @"privacyLockMySettingEnabled",
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
    return [[PrivacyConfig shared] valueForKey:key] ? key : nil;
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

static void MioPresentPageLockAlert(UIViewController *host, NSString *clsName) {
    WPLog(@"Privacy", @"[PageLock] 拦截锁定页: %@", clsName);
    MioPresentVerifyAlert(host, @"页面上锁", ^{
        // WCR markUnlockedForKey_：解锁成功记录时刻，保护窗内免重复验证
        g_pageUnlockByKey[clsName] = @([NSDate date].timeIntervalSince1970);
    });
}

// UINavigationController::pushViewController:animated: hook（低频导航路径，零热路径风险）
static void hook_Nav_push(id self, SEL _cmd, UIViewController *vc, BOOL animated) {
    if (vc && [PrivacyConfig shared].privacyEncryptPassword.length > 0) {
        NSString *key = MioPageLockKeyForVC(vc);
        if (key) {
            NSString *clsName = NSStringFromClass(vc.class);
            if (!MioPageInUnlockWindow(clsName)) {
                ((void (*)(id, SEL, UIViewController *, BOOL))orig_Nav_push)(self, _cmd, vc, animated);
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.25 * NSEC_PER_SEC)),
                               dispatch_get_main_queue(), ^{
                    UIViewController *top = ((UIViewController * (*)(id, SEL))objc_msgSend)(self, @selector(topViewController));
                    if (top && [NSStringFromClass(top.class) isEqualToString:clsName]) {
                        MioPresentPageLockAlert(top, clsName);
                    }
                });
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
static UIBackgroundTaskIdentifier g_kaTask = UIBackgroundTaskInvalid;
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

    // 遮罩：加密 或 模糊 任一开启即盖
    if (!g_coverWindow && (cfg.privacyEncryptEnabled || cfg.privacyBlurEnabled)) {
        MioShowCover();
    }
}

static void MioOnDidEnterBackground(void) {
    // 无额外动作：保活与遮罩已在 resign 盖好；预留给后台清理
}

static void MioOnDidBecomeActive(void) {
    PrivacyConfig *cfg = [PrivacyConfig shared];

    // 回前台：停保活
    if (cfg.privacyKeepAliveEnabled) MioStopKeepAlive();

    MioHandleDidBecomeActive();
}

#pragma mark - 安装

@implementation PrivacyHook

+ (void)install {
    if (g_installed) return;
    g_installed = YES;

    g_pageUnlockByKey = [NSMutableDictionary dictionary];

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
    return (g_coverWindow != nil);
}

@end
