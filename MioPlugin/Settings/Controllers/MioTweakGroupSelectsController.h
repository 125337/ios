#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MioTweakGroupSelectsDelegate <NSObject>
- (void)onGroupSelectReturn:(NSArray<NSString *> *)groupIds;
@optional
- (void)onGroupSelectCancel;
@end

@interface MioTweakGroupSelectsController : UIViewController
- (instancetype)initWithSelectedGroups:(NSArray<NSString *> *)selectedGroups title:(NSString *)title;
@property (nonatomic, assign) id<MioTweakGroupSelectsDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
