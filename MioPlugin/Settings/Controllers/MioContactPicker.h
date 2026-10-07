#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 选人模式（三模式三微信原生类，UI 全部官方原装；原生类天生只显示该类型，不做数据源过滤）
typedef NS_ENUM(NSInteger, MioContactPickerMode) {
    MioContactPickerModeContacts = 0,   // 只选人：MultiSelectContactsViewController（发起群聊主选人器）
    MioContactPickerModeGroups   = 1,   // 只选群：MultiSelectChatRoomHalfScreenViewController（半屏）
    MioContactPickerModeAll      = 2,   // 都选：MultiSelectContactsViewController（同 Contacts 配方）
};

@protocol MioContactPickerDelegate <NSObject>
- (void)pickerDidFinish:(NSArray<NSString *> *)wxids;   // 完成（可空数组=清空，尽量按选择顺序）
@optional
- (void)pickerDidCancel;                                 // 未点完成就返回（取消/侧滑/下滑）
@end

// 统一选人入口。三个适配器各自封装各自的微信原生 VC，不共享 KVC 参数、不共享 hook 目标、
// 不共享 bridge 字段；只共享骨架：重入保护、取消回调、资源清理、主线程回调。
@interface MioContactPicker : NSObject
+ (void)presentPickerWithMode:(MioContactPickerMode)mode
                        title:(NSString *)title
                  preselected:(nullable NSArray<NSString *> *)preselected
                     delegate:(id<MioContactPickerDelegate>)delegate
                         from:(UIViewController *)from;
@end

NS_ASSUME_NONNULL_END
