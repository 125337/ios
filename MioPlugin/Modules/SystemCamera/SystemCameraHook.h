#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 拍摄改系统相机 Hook（移植自开源项目 dongzhengru/WXSystemCamera）
@interface SystemCameraHook : NSObject
+ (void)install;
@end

NS_ASSUME_NONNULL_END
