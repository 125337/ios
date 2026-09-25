#import "KeywordAlertPresenter.h"
#import "../../Core/LogManager.h"

@implementation KeywordAlertPresenter

#pragma mark - 前台横幅

static UIWindow *_bannerWindow = nil;

+ (void)showBannerWithTitle:(NSString *)title body:(NSString *)body {
    NSAssert([NSThread isMainThread], @"showBanner 必须在主线程调用");
    if (!title.length && !body.length) return;

    // 已有横幅在展示则先移除，只保留最新一条
    [_bannerWindow removeFromSuperview];
    _bannerWindow = nil;

    CGRect screen = [UIScreen mainScreen].bounds;
    UIWindow *window = [[UIWindow alloc] initWithFrame:CGRectMake(0, 0, screen.size.width, 90)];
    window.windowLevel = UIWindowLevelAlert + 100;
    window.backgroundColor = [UIColor clearColor];
    window.userInteractionEnabled = YES;

    UIView *card = [[UIView alloc] initWithFrame:CGRectMake(8, 2, screen.size.width - 16, 82)];
    card.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.82];
    card.layer.cornerRadius = 12;
    card.layer.masksToBounds = YES;
    card.autoresizingMask = UIViewAutoresizingFlexibleWidth;
    [window addSubview:card];

    CGFloat y = 12;
    if (title.length > 0) {
        UILabel *titleLbl = [[UILabel alloc] initWithFrame:CGRectMake(14, y, card.bounds.size.width - 28, 20)];
        titleLbl.text = title;
        titleLbl.font = [UIFont boldSystemFontOfSize:15];
        titleLbl.textColor = [UIColor whiteColor];
        titleLbl.lineBreakMode = NSLineBreakByTruncatingTail;
        titleLbl.autoresizingMask = UIViewAutoresizingFlexibleWidth;
        [card addSubview:titleLbl];
        y += 22;
    }
    UILabel *bodyLbl = [[UILabel alloc] initWithFrame:CGRectMake(14, y, card.bounds.size.width - 28, card.bounds.size.height - y - 10)];
    bodyLbl.text = body;
    bodyLbl.font = [UIFont systemFontOfSize:13];
    bodyLbl.textColor = [[UIColor whiteColor] colorWithAlphaComponent:0.85];
    bodyLbl.numberOfLines = 2;
    bodyLbl.lineBreakMode = NSLineBreakByTruncatingTail;
    bodyLbl.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [card addSubview:bodyLbl];

    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(dismissBanner)];
    [card addGestureRecognizer:tap];

    // 初始置顶偏移，滑入
    CGRect f = window.frame;
    f.origin.y = -f.size.height;
    window.frame = f;
    window.hidden = NO;
    _bannerWindow = window;

    WPLog(@"KeywordAlert", @"[BANNER] 横幅展示: title=%@ body=%@",
          title.length ? [title substringToIndex:MIN(title.length, 40)] : @"-",
          body.length ? [body substringToIndex:MIN(body.length, 60)] : @"-");

    [UIView animateWithDuration:0.3 animations:^{
        CGRect nf = window.frame;
        nf.origin.y = 0;
        window.frame = nf;
    }];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(4.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self dismissBanner];
    });
}

+ (void)dismissBanner {
    UIWindow *window = _bannerWindow;
    if (!window) return;
    _bannerWindow = nil;
    [UIView animateWithDuration:0.25 animations:^{
        CGRect f = window.frame;
        f.origin.y = -f.size.height;
        window.frame = f;
    } completion:^(BOOL finished) {
        [window removeFromSuperview];
    }];
}

#pragma mark - 系统通知

static id _kaOrigNotifyDelegate = nil;   // 微信原有通知 delegate（透传用）
static KARecordDelegate *_kaRecordDelegate = nil;

// iOS 默认：App 在前台时收到通知不展示（不弹横幅）。接管 delegate 后，本插件通知
// 前台静默进通知中心（自绘横幅负责前台可见性），微信原有 delegate 行为透传不受影响。
@interface KARecordDelegate : NSObject <UNUserNotificationCenterDelegate>
@end

@implementation KARecordDelegate
- (void)userNotificationCenter:(UNUserNotificationCenter *)center
       willPresentNotification:(UNNotification *)notification
         withCompletionHandler:(void (^)(UNNotificationPresentationOptions))completionHandler {
    NSString *ident = notification.request.identifier;
    if ([ident hasPrefix:@"mio.keywordAlert."]) {
        WPLog(@"KeywordAlert", @"[NOTIFY] 前台: 通知静默进通知中心 id=%@", ident);
        completionHandler(UNNotificationPresentationOptionList);
        return;
    }
    // 非本插件通知：透传微信原 delegate
    if (_kaOrigNotifyDelegate &&
        [_kaOrigNotifyDelegate respondsToSelector:@selector(userNotificationCenter:willPresentNotification:withCompletionHandler:)]) {
        [(id<UNUserNotificationCenterDelegate>)_kaOrigNotifyDelegate
            userNotificationCenter:center
            willPresentNotification:notification
            withCompletionHandler:completionHandler];
    } else {
        completionHandler(UNNotificationPresentationOptionNone);
    }
}
@end

+ (void)postSystemNotificationWithTitle:(NSString *)title
                                   body:(NSString *)body
                             identifier:(NSString *)identifier {
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        // 保存并替换 delegate（weak 属性，需自行强持有），同时打一次授权诊断日志
        _kaOrigNotifyDelegate = center.delegate;
        _kaRecordDelegate = [KARecordDelegate new];
        center.delegate = _kaRecordDelegate;
        WPLog(@"KeywordAlert", @"[NOTIFY] delegate 已接管 (原delegate=%@)",
              _kaOrigNotifyDelegate ? NSStringFromClass([_kaOrigNotifyDelegate class]) : @"无");
        [center getNotificationSettingsWithCompletionHandler:^(UNNotificationSettings *settings) {
            WPLog(@"KeywordAlert", @"[NOTIFY] 授权状态=%ld 通知中心显示=%ld 锁屏显示=%ld",
                  (long)settings.authorizationStatus,
                  (long)settings.notificationCenterSetting,
                  (long)settings.lockScreenSetting);
        }];
    });
    [center requestAuthorizationWithOptions:(UNAuthorizationOptionAlert | UNAuthorizationOptionSound)
                          completionHandler:^(BOOL granted, NSError *err) {
        if (!granted) {
            WPLog(@"KeywordAlert", @"[NOTIFY] 通知权限未授予，跳过 (err=%@)", err);
            return;
        }
        UNMutableNotificationContent *content = [UNMutableNotificationContent new];
        content.title = title;
        content.body = body;
        UNNotificationRequest *request = [UNNotificationRequest requestWithIdentifier:identifier
                                                                              content:content
                                                                              trigger:nil];
        [center addNotificationRequest:request withCompletionHandler:^(NSError *error) {
            if (error) {
                WPLog(@"KeywordAlert", @"[NOTIFY] 通知投递失败: %@ id=%@", error, identifier);
            } else {
                WPLog(@"KeywordAlert", @"[NOTIFY] 系统通知已投递 id=%@", identifier);
            }
        }];
    }];
}

@end
