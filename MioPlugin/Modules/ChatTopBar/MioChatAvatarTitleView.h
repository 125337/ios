#import <UIKit/UIKit.h>

@class BaseMsgContentViewController;
@class MioChatAvatarTitleView;

@protocol MioChatAvatarTitleViewDelegate <NSObject>
- (void)avatarTitleView:(MioChatAvatarTitleView *)view
   didTapAvatarWithContact:(id)contact
                avatarImage:(UIImage *)avatar
                sourceView:(UIView *)sourceView
                      wxid:(NSString *)wxid;
@end

@interface MioChatAvatarTitleView : UIView

@property (nonatomic, weak) id<MioChatAvatarTitleViewDelegate> delegate;
@property (nonatomic, weak) BaseMsgContentViewController *chatController;
@property (nonatomic, strong) UIImageView *leftAvatarView;
@property (nonatomic, strong) UIImageView *rightAvatarView;
@property (nonatomic, strong) UIImageView *separatorView;
@property (nonatomic, strong) UILabel     *separatorTextLabel;
@property (nonatomic, strong) UILabel     *titleLabel;

- (void)updateAvatars;

@end