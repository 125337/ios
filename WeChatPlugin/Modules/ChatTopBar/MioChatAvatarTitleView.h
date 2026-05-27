#import <UIKit/UIKit.h>

@class BaseMsgContentViewController;

@interface MioChatAvatarTitleView : UIView

@property (nonatomic, weak) BaseMsgContentViewController *chatController;
@property (nonatomic, retain) UIImageView *leftAvatarView;
@property (nonatomic, retain) UIImageView *rightAvatarView;
@property (nonatomic, retain) UIImageView *separatorView;
@property (nonatomic, retain) UILabel     *separatorTextLabel;
@property (nonatomic, retain) UILabel     *titleLabel;

- (void)updateAvatars;
- (void)applyPositionOffset;

@end