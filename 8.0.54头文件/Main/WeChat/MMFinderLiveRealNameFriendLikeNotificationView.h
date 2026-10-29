@interface MMFinderLiveRealNameFriendLikeNotificationView : UIView
{
    UIView * _containerView; // +0x8
    UIView * _avatarContainerView; // +0x10
    NSMutableArray * _roundHeaderViews; // +0x18
    UILabel * _contentLabel; // +0x20
    UIImageView * _likeIconView; // +0x28
    MMLiveGradientLayerView * _bgGradientView; // +0x30
    MMFinderLiveRealNameFriendLikeNotificationMsg * _notification; // +0x38
}
+ (id)displayContent:(id)arg1;
+ (CGSize)sizeWithNotification:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWithNotification:(id)arg1;
- (void)layoutSubviews;
- (id)avatorView:(id)arg1 headerViewSize:(CGSize)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)roundHeaderViews;
- (void)setRoundHeaderViews:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)bgGradientView;
- (void)setBgGradientView:(id)arg1;
- (id)notification;
- (void)setNotification:(id)arg1;
- (void).cxx_destruct;
@end

