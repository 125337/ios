@interface WCFinderColumnCollectionViewCell : UICollectionViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderZoomAnimatorBehavior, WCFinderFeedContentVMExt, WCFinderColumnCollectionViewBaseCellProtocol>
{
    id <WCFinderColumnCollectionViewCellDelegate> _delegate; // +0x8
    WCFinderSimplePlayerView * _playerView; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    WCFinderRichTextView * _descView; // +0x20
    WCFinderHeadImageView * _headImageView; // +0x28
    WCFinderAuthInfoIconView * _authView; // +0x30
    WCFinderHeadContactInfoView * _contactInfoView; // +0x38
    WCFinderFriendLikeCustomInfoView * _friendLikeView; // +0x40
    WCFinderRichTextView * _recommendReasonTextView; // +0x48
    UIButton * _likeButton; // +0x50
}
+ (id)cellId;
+ (id)adjustContent:(id)arg1 withColorHexStr:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithContentVM:(id)arg1;
- (void)playVideoIfSupportWithSilencePlay:(BOOL)arg1;
- (void)stopVideoIfSupport;
- (void)pause;
- (BOOL)isPlaying;
- (void)setThumbImageHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)_updateToolBarAreaWithContentVM:(id)arg1;
- (void)onClickLikeButton:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (id)zoomAnimatorKey;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)authView;
- (void)setAuthView:(id)arg1;
- (id)contactInfoView;
- (void)setContactInfoView:(id)arg1;
- (id)friendLikeView;
- (void)setFriendLikeView:(id)arg1;
- (id)recommendReasonTextView;
- (void)setRecommendReasonTextView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (void).cxx_destruct;
@end
