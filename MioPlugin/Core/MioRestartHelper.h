#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MioRestartHelper : NSObject

/// 显示"设置已保存，重启生效"弹窗
+ (void)showRestartAlertFromVC:(UIViewController *)vc;

/// 立即重启微信
+ (void)restartWeChat;

@end