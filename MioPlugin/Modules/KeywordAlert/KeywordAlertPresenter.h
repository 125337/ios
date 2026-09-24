#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

/// 关键词命中提醒展示：
/// - 前台：顶部横幅（UIWindow 卡片，点击消失，4s 自动收起）
/// - 后台：系统本地通知（UNUserNotificationCenter，授权按需申请）
@interface KeywordAlertPresenter : NSObject

/// 前台横幅（必须在主线程调用）
+ (void)showBannerWithTitle:(NSString *)title body:(NSString *)body;

/// 系统本地通知（后台时使用；identifier 用 msgId 防重）
+ (void)postSystemNotificationWithTitle:(NSString *)title
                                   body:(NSString *)body
                             identifier:(NSString *)identifier;

@end

NS_ASSUME_NONNULL_END
