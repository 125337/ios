#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 隐私保护模块配置（modulePrefix: Privacy_）
@interface PrivacyConfig : NSObject <ConfigModule>

/// 微信加密（启动需验证密码）
@property (nonatomic, assign) BOOL privacyEncryptEnabled;
/// 微信加密密码（6位）
@property (nonatomic, copy) NSString *privacyEncryptPassword;
/// 后台模糊
@property (nonatomic, assign) BOOL privacyBlurEnabled;
/// 模糊度（默认80，数值越高模糊效果越高）
@property (nonatomic, assign) NSInteger privacyBlurDegree;
/// 后台保活
@property (nonatomic, assign) BOOL privacyKeepAliveEnabled;
/// 保活周期（10-30秒，默认25）
@property (nonatomic, assign) NSInteger privacyKeepAliveInterval;
/// 掉线通知
@property (nonatomic, assign) BOOL privacyOfflineNotifyEnabled;
/// 解锁时间保护（0-600秒，默认15）
@property (nonatomic, assign) NSInteger privacyPageLockUnlockTime;

// ── 指定页面上锁（8 项） ──
@property (nonatomic, assign) BOOL privacyLockMyPayEnabled;       // 我支付页面上锁
@property (nonatomic, assign) BOOL privacyLockMyFavoriteEnabled;  // 我收藏页面上锁
@property (nonatomic, assign) BOOL privacyLockMyMomentEnabled;    // 我朋友圈页上锁
@property (nonatomic, assign) BOOL privacyLockMyChannelsEnabled;  // 我视频号页上锁
@property (nonatomic, assign) BOOL privacyLockMyPluginEnabled;    // 我插件页面上锁
@property (nonatomic, assign) BOOL privacyLockMySettingEnabled;   // 我设置页面上锁
@property (nonatomic, assign) BOOL privacyLockMomentEnabled;      // 朋友圈页面上锁
@property (nonatomic, assign) BOOL privacyLockChannelsEnabled;    // 视频号页面上锁

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
