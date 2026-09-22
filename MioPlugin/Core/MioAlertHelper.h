#import <Foundation/Foundation.h>

/// 微信原生 WCUIAlertView 封装工具
/// 使用 [WCUIAlertView show] 直接将 alert 加到 window 视图层级，
/// 绕过 UIViewController.presentViewController 系统，
/// 避免被微信内部视图管理机制自动 dismiss。
@interface MioAlertHelper : NSObject

/// 文本输入弹窗（style:1，带输入框）
/// @param text 预填文本内容
/// @param target cancelAction 的目标对象（WCUIAlertView 需要非 nil target）
/// @param confirm 确认回调，返回用户输入的文本
+ (void)showInputAlertWithInitialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm;

/// 文本输入弹窗（style:1，带输入框，自定义描述文案）
/// @param text 预填文本内容
/// @param message 弹窗描述文案
/// @param target cancelAction 的目标对象（WCUIAlertView 需要非 nil target）
/// @param confirm 确认回调，返回用户输入的文本
+ (void)showInputAlertWithInitialText:(NSString *)text
                              message:(NSString *)message
                               target:(id)target
                            onConfirm:(void(^)(NSString *inputText))confirm;

/// 纯提示弹窗（无输入框，带"我知道了"按钮关闭）
/// @param message 提示内容
+ (void)showTipAlert:(NSString *)message;

/// 纯提示弹窗（无输入框，自定义按钮文字）
/// @param message 提示内容
/// @param buttonTitle 按钮文字
+ (void)showTipAlert:(NSString *)message buttonTitle:(NSString *)buttonTitle;

/// 确认弹窗（双按钮：取消 + 确认，带回调）
/// @param message 提示内容
/// @param confirmTitle 确认按钮文字，如 @"开始检测"
/// @param onConfirm 确认回调（主线程）
+ (void)showConfirmAlert:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
               onConfirm:(void(^)(void))onConfirm;

@end