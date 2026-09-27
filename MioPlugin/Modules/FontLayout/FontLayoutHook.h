#import <Foundation/Foundation.h>

@interface FontLayoutHook : NSObject
+ (void)install;
/// 幂等补装入口（设置页开关变化时调用；启动期 [SKIP] 的在开关打开时即时安装）
+ (void)notifySwitchChanged;
/// 立即生效：清文本测量缓存 + 语言切换链路全局重绘（WCR/锤子 doChangeCSS 同款，无需重启微信）
+ (void)applyLayoutRefreshNow;
@end
