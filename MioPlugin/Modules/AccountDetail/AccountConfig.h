// 账户信息模块配置 - 证书到期提醒（参考 WCRefine「账户信息」逆向）

#import "../Core/ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface AccountConfig : NSObject <ConfigModule>

/// 证书到期提醒开关（打开账户信息页时检查）
@property (nonatomic, assign) BOOL certExpireAlertEnabled;

/// 提前提醒天数列表，@ 分隔，如 30@18@7@3 = 到期前 30/18/7/3 天各提示一次
@property (nonatomic, copy) NSString *certExpireAlertDays;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
