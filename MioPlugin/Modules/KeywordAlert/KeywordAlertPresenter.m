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

#pragma mark - 后台系统通知

+ (void)postSystemNotificationWithTitle:(NSString *)title
                                   body:(NSString *)body
                             identifier:(NSString *)identifier {
    UNUserNotificationCenter *center = [UNUserNotificationCenter currentNotificationCenter];
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
