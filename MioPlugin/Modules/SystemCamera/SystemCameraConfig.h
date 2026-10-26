#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 系统相机配置：聊天"拍摄"入口改呼出 iOS 系统相机（移植自开源 WXSystemCamera）
@interface SystemCameraConfig : NSObject <ConfigModule>

// 总开关：开 → 相机分支走系统相机；关 → 微信原装即时镜头
@property (nonatomic, assign) BOOL enableSystemCamera;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
