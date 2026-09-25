#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MioTweakGroupSelectsDelegate <NSObject>
- (void)onGroupSelectReturn:(NSArray<NSString *> *)groupIds;
@optional
- (void)onGroupSelectCancel;
@end

// 仿 WCR WCRefineChatRoomPicker：直接 present 微信原生 MultiSelectChatRoomHalfScreenViewController
// （半屏多选群聊页），导航栏/外观全部由微信自己的 VC 管理。
// 旧实现（自建壳 VC 嵌 ContactSelectView）会导致微信导航栏主题渲染异常（黑顶栏），已废弃。
// 用法：initWithSelectedGroups:title: 创建后调 presentFromViewController:，结果经 delegate 回调。
@interface MioTweakGroupSelectsController : NSObject
- (instancetype)initWithSelectedGroups:(NSArray<NSString *> *)selectedGroups title:(NSString *)title;
@property (nonatomic, assign) id<MioTweakGroupSelectsDelegate> delegate;
- (void)presentFromViewController:(UIViewController *)hostViewController;
@end

NS_ASSUME_NONNULL_END
