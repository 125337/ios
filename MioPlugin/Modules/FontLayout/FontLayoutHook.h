#import <Foundation/Foundation.h>

@interface FontLayoutHook : NSObject
+ (void)install;
+ (void)installIfNeeded;   // 幂等：双开关全关时跳过安装（看门狗 CPU 优化），开关打开后补装
+ (void)applyLayoutRefreshNow;   // 立即生效：清 MMTextWidth + 借微信语言切换链路全局刷新（WCR 同款，无需重启）
@end
