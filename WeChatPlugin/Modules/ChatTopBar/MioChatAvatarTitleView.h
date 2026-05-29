#import <UIKit/UIKit.h>

@class BaseMsgContentViewController;

@interface MioChatAvatarTitleView : UIView

@property (nonatomic, assign) BaseMsgContentViewController *chatController;
@property (nonatomic, strong) UIImageView *leftAvatarView;
@property (nonatomic, strong) UIImageView *rightAvatarView;
@property (nonatomic, strong) UIImageView *separatorView;
@property (nonatomic, strong) UILabel     *separatorTextLabel;
@property (nonatomic, strong) UILabel     *titleLabel;

- (void)updateAvatars;
- (void)applyPositionOffset;

@end