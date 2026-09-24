//
//  PrivacyHook.h
//  MioPlugin
//
//  隐私保护运行时（WCR EncryptionLock 反编译复刻）：
//  ① 微信加密：启动/切回前台需验证 6 位密码（宽限 15 秒，对齐 WCR encryptionTimeout 默认值）
//  ② 后台模糊：失去焦点时盖全屏遮罩窗，防任务切换器泄密（WCR showBackgroundPrivacyCover 同款：
//     全屏 UIWindow + windowLevel = statusBar + 1001，加密开启时纯黑，仅模糊时叠加毛玻璃）
//
//  实现走 NSNotificationCenter（willResignActive/didBecomeActive），零 hook、零微信类名依赖。
//  指定页面上锁 / 后台保活 / 私密好友的运行时后续接入（UI 开关已在设置页）。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PrivacyHook : NSObject

+ (void)install;

/// 当前是否处于锁定验证状态（供其他模块查询，预留）
+ (BOOL)isLockScreenPresented;

@end

NS_ASSUME_NONNULL_END
