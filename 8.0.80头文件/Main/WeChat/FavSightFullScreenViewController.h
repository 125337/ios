@interface FavSightFullScreenViewController : FullScreenViewController <FavForwardLogicDelegate, WCNetworkMediaPlayerDelegate, FullScreenGestureDelegate, WCPlayerConfigDelegate, MMScrollActionSheetDelegate>
{
    FavSightInfo * m_sightInfo; // +0x78
    FavSightView * m_sightView; // +0x80
    UIButton * m_playAttachVideoButton; // +0x88
    WXFullScreenGestureRecognizer * m_gestureReconizer; // +0x90
    CGRect m_originalRect; // +0x98
    MMUIWindow * m_fullScreenWindow; // +0xb8
    id <FavSightFullScreenViewControllerDelegate> m_delegate; // +0xc0
    MMScrollActionSheet * _scrollActionSheet; // +0xc8
}
- (id)initWithSightInfo:(id)arg1 withOriginalRect:(CGRect)arg2;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)internalInitWithSightInfo:(id)arg1;
- (CGSize)sightVideoSize;
- (void)viewDidLayoutSubviews;
- (void)setPlayAttachVideoButtonFrame;
- (id)getFavForawrdViewController;
- (BOOL)shouldAutorotate;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (void)forwardSight:(id)arg1 contact:(id)arg2;
- (void)saveSight:(id)arg1;
- (void)onClickPlayAttachVideoBtn;
- (id)createWCNetworkMediaPlayer;
- (void)onClickDetailButton;
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenLongPressEnd;
- (void)exitFullScreen:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onTapCloseButton:(id)arg1;
- (void)onToolViewAutoClose;
- (void)onTapSightIconView;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
