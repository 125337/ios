#import <Foundation/Foundation.h>

/// 微信原生 WCUIAlertView 封装工具
/// 使用 [WCUIAlertView show] 直接将 alert 加到 window 视图层级，
/// 绕过 UIViewController.presentViewController 系统，
/// 避免被微信内部视图管理机制自动 dismiss。
@interface WeChatAlertHelper : NSObject

/// 文本输入弹窗（style:1，带输入框）
/// @param title 弹窗标题
/// @param text 预填文本内容
/// @param target cancelAction 的目标对象（WCUIAlertView 需要非 nil target）
/// @param confirm 确认回调，返回用户输入的文本
+ (void)showInputAlert:(NSString *)title initialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm;

/// 纯提示弹窗（无输入框，带"我知道了"按钮关闭）
/// @param title 弹窗标题
/// @param message 提示内容
+ (void)showTipAlert:(NSString *)title message:(NSString *)message;

/// 纯提示弹窗（无输入框，自定义按钮文字）
/// @param title 弹窗标题
/// @param message 提示内容
/// @param buttonTitle 按钮文字
+ (void)showTipAlert:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle;

@end