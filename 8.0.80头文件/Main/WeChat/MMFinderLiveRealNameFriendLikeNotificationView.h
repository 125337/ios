@interface MMFinderLiveRealNameFriendLikeNotificationView : UIView
{
    UILabel * _contentLabel; // +0x8
    UIView * _containerView; // +0x10
    UIView * _avatarContainerView; // +0x18
    NSMutableArray * _roundHeaderViews; // +0x20
    UIImageView * _likeIconView; // +0x28
    MMLiveGradientLayerView * _bgGradientView; // +0x30
    MMFinderLiveRealNameFriendLikeNotificationMsg * _notification; // +0x38
}
+ (id)displayContent:(id)arg1 maxWidth:(double)arg2;
+ (CGSize)sizeWithNotification:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWithNotification:(id)arg1 dataItem:(id)arg2;
- (double)maxLabelWidthWithMaxWidth:(double)arg1;
- (void)layoutSubviews;
- (id)avatorView:(id)arg1 headerViewSize:(CGSize)arg2;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)avatarContainerView;
- (void)setAvatarContainerView:(id)arg1;
- (id)roundHeaderViews;
- (void)setRoundHeaderViews:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)bgGradientView;
- (void)setBgGradientView:(id)arg1;
- (id)notification;
- (void)setNotification:(id)arg1;
- (void).cxx_destruct;
@end
