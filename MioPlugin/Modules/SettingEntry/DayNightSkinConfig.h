// 日月开关模块配置 - UISwitch 换肤总开关（界面定制-开关UI 卡片）

#import "../../Core/ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface DayNightSkinConfig : NSObject <ConfigModule>

/// 换肤总开关：开=微信内 UISwitch 换成日月切换样式
@property (nonatomic, assign) BOOL dayNightSkinEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END

/// 总开关翻转通知（setDayNightSkinEnabled: 发出，userInfo["on"]=@(BOOL)）。
/// DayNightSkinHook 监听它做当场清理/补挂（WCR 关闭当场清皮肤的同款语义），
/// 配置层不 import hook 层，用通知解耦。
extern NSString *const MioDayNightSkinEnabledChanged;
