#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 完成回调：userNames = 已选 wxid（尽量按选择顺序）
typedef void (^MioSessionSelectCompletion)(NSArray<NSString *> *userNames);

// 仿 WCR presentSessionSelectPickerFromViewController（Misc_part13.c L42457-42642，WCR 内 15+ 处
// 调用的主力选人封装）：present 微信原生 SessionSelectController 全屏选联系人页（好友/群聊均可
// 多选，带搜索）。KVC 参数与 WCR 逐一对应；hook onMultiDone / updateMultiSelectRightBtn 拦截
// 完成按钮（m_delegate=nil 时原生按钮走 endMultiSelect 死路，WCR 同款换成"完成"直调 onMultiDone）。
// preselectedContacts 传入已选 wxid，打开时回显勾选（KVC 注入 m_selectView.m_dicMultiSelect）。
// 用法：initWithTitle:preselectedContacts: 创建后调 presentFromViewController:completion:。
// 取消/侧滑返回不回调（与 WCR 一致）。
@interface MioSessionSelectsController : NSObject
+ (BOOL)isSupported;   // 当前微信是否存在 SessionSelectController
- (instancetype)initWithTitle:(NSString *)title
          preselectedContacts:(nullable NSArray<NSString *> *)preselectedContacts;
- (void)presentFromViewController:(UIViewController *)hostViewController
                       completion:(nullable MioSessionSelectCompletion)completion;
@end

NS_ASSUME_NONNULL_END
