#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WeChatTweakGroupSelectsDelegate <NSObject>
- (void)onGroupSelectReturn:(NSArray<NSString *> *)groupIds;
@optional
- (void)onGroupSelectCancel;
@end

@interface WeChatTweakGroupSelectsController : UIViewController
- (instancetype)initWithSelectedGroups:(NSArray<NSString *> *)selectedGroups title:(NSString *)title;
@property (nonatomic, weak) id<WeChatTweakGroupSelectsDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
