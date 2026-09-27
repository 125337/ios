#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MioRestartHelper : NSObject

/// 显示"设置已保存，重启生效"弹窗（确认后走优雅重启：dismiss→截图收缩动画→自动拉起微信）
+ (void)showRestartAlertFromVC:(UIViewController *)vc;

/// 优雅重启（WCR elegantRestartV2 同款）：dismiss 页面 → 截图收缩+模糊变暗动画 → 重启
+ (void)elegantRestartFromVC:(UIViewController *)presenter;

/// 立即重启微信（suspend → 1s → LSApplicationWorkspace 拉起 → exit(0)）
+ (void)restartWeChat;

@end