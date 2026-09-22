#import <UIKit/UIKit.h>

/// 全项目统一弹窗层（微信原生 WCUIAlertView 封装）
/// 使用 [WCUIAlertView show] 直接将 alert 加到 window 视图层级，
/// 绕过 UIViewController.presentViewController 系统，
/// 避免被微信内部视图管理机制自动 dismiss。
/// 项目内禁止再直接创建 UIAlertController（本次统一后唯一入口）。
@interface MioAlertHelper : NSObject

/// 文本输入弹窗（style:1，带输入框，固定标题 Mio助手）
/// @param text 预填文本内容
/// @param target cancelAction 的目标对象（WCUIAlertView 需要非 nil target）
/// @param confirm 确认回调，返回用户输入的文本（空输入也回调，传空串）
+ (void)showInputAlertWithInitialText:(NSString *)text target:(id)target onConfirm:(void(^)(NSString *inputText))confirm;

/// 文本输入弹窗（固定标题 Mio助手，自定义描述文案）
+ (void)showInputAlertWithInitialText:(NSString *)text
                              message:(NSString *)message
                               target:(id)target
                            onConfirm:(void(^)(NSString *inputText))confirm;

/// 统一输入弹窗（完整定制：自定义标题/描述/预填/占位/键盘类型/密码打点）
/// @param title 弹窗标题
/// @param message 弹窗描述（可为空）
/// @param initialText 预填文本（可为空）
/// @param placeholder 输入框占位文案（可为空）
/// @param keyboardType 键盘类型（数字项用 UIKeyboardTypeNumbersAndPunctuation）
/// @param secure YES 时密码打点显示
/// @param target cancelAction 的目标对象
/// @param confirm 确认回调，空输入也回调（传空串，校验由调用方负责）
+ (void)showInputAlert:(NSString *)title
               message:(NSString *)message
           initialText:(NSString *)initialText
           placeholder:(NSString *)placeholder
              keyboard:(UIKeyboardType)keyboardType
                secure:(BOOL)secure
                target:(id)target
            onConfirm:(void(^)(NSString *inputText))confirm;

/// 菜单弹窗（替代 UIAlertControllerStyleActionSheet，按钮纵向排列，自动带「取消」）
/// @param message 菜单标题（可为空）
/// @param titles 按钮文字数组（最多 12 个）
/// @param onButton 点击回调，index 为按钮下标
+ (void)showMenuAlert:(NSString *)message
              buttons:(NSArray<NSString *> *)titles
             onButton:(void(^)(NSInteger index))onButton;

/// 纯提示弹窗（无输入框，带"我知道了"按钮关闭）
+ (void)showTipAlert:(NSString *)message;

/// 纯提示弹窗（无输入框，自定义按钮文字）
+ (void)showTipAlert:(NSString *)message buttonTitle:(NSString *)buttonTitle;

/// 确认弹窗（双按钮：取消 + 确认，带回调）
/// @param message 提示内容
/// @param confirmTitle 确认按钮文字，如 @"开始检测"
/// @param onConfirm 确认回调（主线程）
+ (void)showConfirmAlert:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
               onConfirm:(void(^)(void))onConfirm;

@end
