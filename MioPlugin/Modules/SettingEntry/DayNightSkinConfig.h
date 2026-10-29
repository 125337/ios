// 日月开关模块配置 - UISwitch 换肤总开关（界面定制-开关UI 卡片）

#import "../../Core/ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface DayNightSkinConfig : NSObject <ConfigModule>

/// 换肤总开关：开=微信内 UISwitch 换成日月切换样式
@property (nonatomic, assign) BOOL dayNightSkinEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
