//
//  PrivacyHook.h
//  MioPlugin
//
//  隐私保护运行时（WCR 反编译复刻）：
//  ① 微信加密：启动/切回前台需验证 6 位密码（宽限 15 秒，对齐 WCR encryptionTimeout 默认值）
//  ② 后台模糊：失去焦点时盖全屏遮罩窗（WCR showBackgroundPrivacyCover 同款：全屏 UIWindow +
//     windowLevel = statusBar + 1001；加密开启纯黑，仅模糊时叠加毛玻璃）
//  ③ 指定页面上锁：hook UINavigationController::pushViewController:animated:，按真机确认的
//     页面类名匹配；解锁后按 privacyPageLockUnlockTime 秒保护窗免重复验证（WCR PageLockGuard
//     markUnlockedForKey_ 同语义）
//  ④ 后台保活：进后台启动静音音频会话保活（WCR WCRefineBackgroundKeepAlive/ensureAudioPlaying
//     同源机制：setCategory Playback+mixWithOthers + 静音播放器循环 + 周期心跳续后台任务）；
//     掉线通知 = 保活中断时发本地通知
//
//  实现：加密/模糊/保活走 NSNotificationCenter 通知；页面锁仅一个低频导航 hook，零热路径干预。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PrivacyHook : NSObject

+ (void)install;

/// 当前是否处于锁定/遮罩状态（预留查询）
+ (BOOL)isLockScreenPresented;

@end

NS_ASSUME_NONNULL_END
