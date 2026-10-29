@interface MMFinderLiveHomePageBottomPlayerView : UIView <WCFinderHeadImageViewDelegate>
{
    id <MMFinderLiveHomePageBottomPlayerViewDelegagte> _delegate; // +0x8
    MMFinderLiveHomePageBottomPlayerViewModel * _viewModel; // +0x10
    UIView * _liveView; // +0x18
    UIView * _indicatorView; // +0x20
    UIView * _liveViewContainerView; // +0x28
    UIView * _playerControlView; // +0x30
    UIView * _containerView; // +0x38
    UIView * _backgroundBlurView; // +0x40
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x48
    UIView * _bottomPlayerView; // +0x50
    CAShapeLayer * _shapeLayer; // +0x58
    WCFinderHeadImageView * _anchorHeadImageView; // +0x60
    MMWebImageView * _authIconView; // +0x68
    MMUIButton * _playButton; // +0x70
    RichTextView * _liveTitleLabel; // +0x78
    MMUILabel * _liveAnchorNameLabel; // +0x80
    WCFinderHeadImageView * _avatarView; // +0x88
    UIImageView * _topColorView; // +0x90
    UIView * _backgroundView; // +0x98
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateBottomPlayerContainerViewFrame;
- (void)layoutSubviews;
- (void)updateAnimationFrame:(CGRect)arg1;
- (void)layoutAnchorTitle;
- (void)updateBottomPlayerBackgroundView:(id)arg1;
- (void)refreshPlayButtonStatus:(unsigned long long)arg1;
- (void)updateAuthInfo:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)adjustBottomPlayerContainer;
- (void)onViewDidApear;
- (void)onViewDidDisapear;
- (BOOL)attachLiveView:(id)arg1;
- (BOOL)isLiveViewAttached:(id)arg1;
- (void)attachIndicatorView:(id)arg1;
- (void)onDismissView;
- (id)playerBottomBarBackgroundColor:(id)arg1;
- (void)onClickPlayButton:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (id)containerView;
- (id)bottomPlayerView;
- (id)backgroundBlurView;
- (id)playerControlView;
- (id)liveTitleLabel;
- (id)liveAnchorNameLabel;
- (id)liveViewContainerView;
- (id)anchorHeadImageView;
- (id)authIconView;
- (id)playButton;
- (id)topColorView;
- (id)avatarView;
- (id)backgroundView;
- (void)setFrame:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (void)setLiveViewContainerView:(id)arg1;
- (void)setPlayerControlView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setBottomPlayerView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setAnchorHeadImageView:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setLiveTitleLabel:(id)arg1;
- (void)setLiveAnchorNameLabel:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setTopColorView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

