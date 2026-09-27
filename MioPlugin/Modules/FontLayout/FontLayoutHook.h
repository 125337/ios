#import <Foundation/Foundation.h>

@interface FontLayoutHook : NSObject
+ (void)install;
/// 幂等补装入口（设置页开关变化时调用；启动期 [SKIP] 的在开关打开时即时安装）
+ (void)notifySwitchChanged;
@end
