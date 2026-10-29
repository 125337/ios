@interface WCFinderMoreLiveFriendLikeRecommendReasonView : UIView
{
    UIView * _containerView; // +0x8
    UIView * _avatarContainerView; // +0x10
    NSMutableArray * _roundHeaderViews; // +0x18
    UILabel * _contentLabel; // +0x20
    UIImageView * _likeIconView; // +0x28
    NSArray * _likeList; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (void)updateWithLikeList:(id)arg1 dataItem:(id)arg2 maxWidth:(double)arg3;
- (id)displayLikeList;
- (void)updateLabelContext:(id)arg1 displayLikeList:(id)arg2 maxWidth:(double)arg3;
- (double)maxLabelWidthWithMaxWidth:(double)arg1;
- (void)updateWidth;
- (void)layoutSubviews;
- (id)avatorView:(id)arg1 headerViewSize:(CGSize)arg2;
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
- (id)likeList;
- (void)setLikeList:(id)arg1;
- (void).cxx_destruct;
@end
