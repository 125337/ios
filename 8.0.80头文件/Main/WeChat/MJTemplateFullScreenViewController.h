@interface MJTemplateFullScreenViewController : FullScreenViewController <FullScreenGestureDelegate, WCMomentsPlayerViewContainerDelegate, MJTemplateFullScreenControlViewDelegate, MJTemplateMoviePlayerExt, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, WCMomentsForwardVideoOpDelegate, MMAssetCompositeResultExt>
{
    BOOL m_isPresented; // +0x71
    id <MJTemplateFullScreenViewControllerDelegate> _delegate; // +0x78
    id <MJTemplateFullScreenViewControllerPostDelegate> _postDelegate; // +0x80
    MJTemplateFullScreenViewControllerParams * _params; // +0x88
    MJTemplateCompositeTask * _compositeTask; // +0x90
    WCMomentsPlayerViewContainer * _containerView; // +0x98
    UIImageView * _thumbImageView; // +0xa0
    MJTemplateFullScreenControlView * _controlView; // +0xa8
    WXFullScreenGestureRecognizer * _fullScreenGesture; // +0xb0
    WCMomentsScrollActionSheet * _actionSheet; // +0xb8
}
- (id)initWithCompositeTask:(id)arg1 params:(id)arg2;
- (void)viewDidLoad;
- (void)initContainerView;
- (void)addThumbImageView;
- (void)initControlView;
- (void)initFullScreenGesture;
- (void)viewDidTransitionToNewSize;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)changePresentedState:(BOOL)arg1;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (void)resetThumbImageViewFrame;
- (CGSize)originVideoSize;
- (CGRect)suitableThumbImageViewFrameForVideoSize:(CGSize)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)closeFullScreen;
- (void)playVideo;
- (void)stopVideo;
- (void)showActionSheet;
- (void)setupActionSheet;
- (void)setupActionSheetItem;
- (void)updateActionSheetIfNeeded;
- (void)closeActionSheet;
- (id)createRecentForwardView;
- (void)forwardToContact:(id)arg1;
- (void)favoriteVideo;
- (void)saveVideo;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteDisableItem:(id)arg2;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)onActionSheetEventEnd;
- (void)clickRFItemCallBack:(id)arg1;
- (id)forwardVideoOpGetPlayerView:(id)arg1;
- (void)onForwardOpDidSend:(id)arg1;
- (void)onForwardOpDidCancel:(id)arg1;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (id)thumbImageViewWithImageView:(id)arg1;
- (id)forwardUserInfo;
- (struct)templateFullScreenControlViewGetCurrentPlaybackTime:(id)arg1;
- (void)templateFullScreenControlViewDidClickShareButton:(id)arg1;
- (void)templateFullScreenControlViewDidBeginScrub:(id)arg1;
- (void)templateMoviePlayer:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)templateMoviePlayerWillStopPlaying:(id)arg1;
- (void)playerViewContainerDidZoom:(id)arg1;
- (void)updateGestureContainerFrame;
- (void)compositeTaskDidStop:(id)arg1 withResult:(id)arg2 compositeSession:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postDelegate;
- (void)setPostDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)compositeTask;
- (void)setCompositeTask:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)fullScreenGesture;
- (void)setFullScreenGesture:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
