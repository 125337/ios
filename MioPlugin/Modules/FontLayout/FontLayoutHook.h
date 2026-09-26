#import <Foundation/Foundation.h>

@interface FontLayoutHook : NSObject
+ (void)install;
+ (void)installIfNeeded;   // 幂等：双开关全关时跳过安装（看门狗 CPU 优化），开关打开后补装
@end
