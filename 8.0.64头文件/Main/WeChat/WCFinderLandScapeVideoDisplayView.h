@interface WCFinderLandScapeVideoDisplayView : MMUIView <WCFinderHeadInfoViewDelegate, WCFinderFullToolbarViewDelegate, WCFinderLandScapeVideoInteractivePlayerViewDelegate, WCFinderFriendLikeToolbarViewDelegate, WCFinderPanelHotCommentViewDelegate, WCFinderLandScapeCollectionDisplayViewDelegate>
{
    BOOL _isPreOrientationLandScape; // +0x8
    id <WCFinderHeadInfoViewDelegate><WCFinderFullToolbarViewDelegate><WCFinderLandScapeVideoDisplayViewDelegate> _delegate; // +0x10
    UIView * _statusBarBackgroundView; // +0x18
    WCFinderLandScapeVideoInteractivePlayerView * _interactivePlayerView; // +0x20
    RichTextView * _descLabel; // +0x28
    RichTextView * _feedTitleLabel; // +0x30
    WCFinderPanelHotCommentView * _hotCommentView; // +0x38
    UIView * _descInteractiveView; // +0x40
    UIView * _containerView; // +0x48
    WCFinderHeadInfoEasyView * _headInfoView; // +0x50
    WCFinderFullToolbarView * _toolBarView; // +0x58
    WCFinderFriendLikeToolbarView * _friendLikeToolBarView; // +0x60
    WCFinderLandScapeCollectionDisplayView * _collectionView; // +0x68
    UIView * _collectionTopSeperator; // +0x70
    UIView * _collectionViewContainer; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    WCFinderLandScapePlayerParam * _param; // +0x88
    WCFinderLandScapeVideoDisplayViewInitParams * _setupParams; // +0x90
}
+ (BOOL)shouldShowFriendLikeToolbarViewWithContentVM:(id)arg1;
+ (double)heightWithContentVM:(id)arg1 param:(id)arg2 width:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)reloadToolBar;
- (void)changeToolBarHiddenState;
- (void)changeToolBarHiddenState:(BOOL)arg1;
- (BOOL)isFriendLikeToolBarHidden;
- (id)getInteractiveView;
- (void)restoreInteractiveView:(id)arg1;
- (id)getPlayerViewAndClear;
- (void)restorePlayerView:(id)arg1;
- (id)getFinderPlayerView:(BOOL)arg1;
- (void)playVideo;
- (void)playVideoWithStartTime:(double)arg1 isSilencePlay:(BOOL)arg2;
- (void)stopVideo;
- (BOOL)isPlayingVideo;
- (id)getPlayerView;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)setup;
- (void)setupViews;
- (void)setupViewLandScapeState;
- (void)landScapeStatWillChange:(BOOL)arg1;
- (id)getPlayerViewSnapshot;
- (void)setPlayerInteractiveEnable:(BOOL)arg1;
- (void)stopSpeedPlay;
- (double)foldMinBottom;
- (void)moveHeaderToolWithY:(double)arg1;
- (void)_moveReleatedViewWithY:(double)arg1;
- (BOOL)canMoveHeaderToolToTop;
- (void)moveHeaderToolToTop;
- (BOOL)canMoveHeaderToolToBottom;
- (void)moveHeaderToolToBottom;
- (BOOL)pointIsOnPlayerArea:(CGPoint)arg1;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (void)updateHotCommentUIWithContentVM:(id)arg1;
- (void)updateLikeToolStateWithContentVM:(id)arg1;
- (void)updateBulletState;
- (void)adjustLayoutInLandScapeState;
- (void)adjustPlayerViewLayoutInPortialState;
- (void)adjustLayoutInPoratialState;
- (void)adjustLayoutInPoratialState:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (double)getCurrentPlayVideoTime;
- (double)getCurrentPlayVideoPercent;
- (void)onCollectionDisplayViewReadyToShowStateChanged:(BOOL)arg1;
- (void)onCollectionDisplayViewDidSelectContentVM:(id)arg1;
- (void)onFinderLandScapeInteractiveViewAntiAddictCheckLogic;
- (void)onFinderLandScapeInteractiveViewClickRotateBtn;
- (void)onFinderLandScapeInteractiveViewClickPauseBtn:(BOOL)arg1;
- (void)onFinderLandScapeInteractiveViewClickReturnBtn;
- (void)onFinderLandScapeInteractiveViewClickBulletBtn;
- (void)onFinderLandScapeInteractiveViewClickBulletSwitchBtn:(BOOL)arg1;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeInteractiveViewStartPan;
- (void)onFinderLandScapeInteractiveViewEndPan;
- (void)onFinderLandScapeInteractiveViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickPlayNextVideoWithDataItem:(id)arg1;
- (BOOL)shouldHiddenHeadInfoViewFollowBtn;
- (void)onFinderLandScapeInteractiveViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderLandScapeInteractiveViewContentMediaDidEndPlay;
- (void)onClickDescLabel;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onClickPanelHotComment:(id)arg1;
- (id)delegate;
- (id)statusBarBackgroundView;
- (void)setStatusBarBackgroundView:(id)arg1;
- (id)interactivePlayerView;
- (void)setInteractivePlayerView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)feedTitleLabel;
- (void)setFeedTitleLabel:(id)arg1;
- (id)hotCommentView;
- (void)setHotCommentView:(id)arg1;
- (id)descInteractiveView;
- (void)setDescInteractiveView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headInfoView;
- (void)setHeadInfoView:(id)arg1;
- (id)toolBarView;
- (void)setToolBarView:(id)arg1;
- (id)friendLikeToolBarView;
- (void)setFriendLikeToolBarView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionTopSeperator;
- (void)setCollectionTopSeperator:(id)arg1;
- (id)collectionViewContainer;
- (void)setCollectionViewContainer:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)setupParams;
- (void)setSetupParams:(id)arg1;
- (BOOL)isPreOrientationLandScape;
- (void)setIsPreOrientationLandScape:(BOOL)arg1;
- (void).cxx_destruct;
@end
