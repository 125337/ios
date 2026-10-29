@interface MultiTalkScreenSharingPresentationViewController : MultiTalkScreenSharingBaseViewController <MMDoodleViewControllerLayout, MMDoodleDelegate, MMDoodleDataSource, MultiTalkMgrExt, MMTipsViewControllerDelegate, UIGestureRecognizerDelegate>
{
    BOOL _barsHidden; // +0x70
    id <MultiTalkScreenSharingPresentationViewControllerDelegate> _delegate; // +0x78
    UIView * _topBar; // +0x80
    UIButton * _stopButton; // +0x88
    MMDoodleController * _doodleController; // +0x90
    MMDoodleToolbarItem * _microphoneItem; // +0x98
    MMDoodleToolbarItem * _speakerItem; // +0xa0
    MultiTalkCornerContainerView * _cornerContainerView; // +0xa8
    MultiTalkHDHeadView * _talkingUserHeadView; // +0xb0
    UIImageView * _talkingVoiceIconView; // +0xb8
    NSString * _talkingUsername; // +0xc0
    UITapGestureRecognizer * _tapGestureRecognizer; // +0xc8
    unsigned long long _doodleInterfaceOrientationMask; // +0xd0
}
- (id)init;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismiss;
- (void)loadTopBar;
- (void)showTopBarAnimated:(BOOL)arg1;
- (void)hideTopBarAnimated:(BOOL)arg1;
- (void)loadDoodleController;
- (void)loadMicrophoneToolbarItem;
- (void)refreshMicrophoneToolbarItem;
- (void)showToastWhenMicrophoneStatusChanged;
- (void)loadSpeakerToolbarItems;
- (void)refreshSpeakerToolbarItem;
- (void)showToastWhenSpeakerStatusChanged;
- (void)showToastWhenCameraStatusChanged;
- (void)loadCornerView;
- (void)delayHideCornerViewAnimated;
- (void)loadTalkingViews;
- (void)updateTalkingUsernames:(id)arg1;
- (void)refreshTalkingViews;
- (BOOL)isShowingTalkingViews;
- (void)showTalkingViews;
- (void)hideTalkingViewsAnimated;
- (void)refreshTalkingUserHeadViewWithUsername:(id)arg1;
- (void)addTapGestureRecognizer;
- (void)handleTapGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)startSharing;
- (void)stopSharing;
- (void)pauseSharing;
- (void)resumeSharing;
- (id)doodleToolsContainerView;
- (id)doodleContentView;
- (void)doodleController:(id)arg1 penItemDidClick:(id)arg2;
- (void)doodleControllerWillStartDoodling:(id)arg1;
- (void)doodleControllerDidStopDoodling:(id)arg1;
- (void)doodleController:(id)arg1 requestImageWithCompletionHandler:(id /* block */)arg2;
- (void)microphoneItemDidClick:(id)arg1;
- (void)speakerItemDidClick:(id)arg1;
- (void)stopSharingButtonDidClick:(id)arg1;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)OnCameraVideoStateChange:(BOOL)arg1 CameraOn:(BOOL)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (id)doodleController;
- (void)setDoodleController:(id)arg1;
- (id)microphoneItem;
- (void)setMicrophoneItem:(id)arg1;
- (id)speakerItem;
- (void)setSpeakerItem:(id)arg1;
- (id)cornerContainerView;
- (void)setCornerContainerView:(id)arg1;
- (id)talkingUserHeadView;
- (void)setTalkingUserHeadView:(id)arg1;
- (id)talkingVoiceIconView;
- (void)setTalkingVoiceIconView:(id)arg1;
- (id)talkingUsername;
- (void)setTalkingUsername:(id)arg1;
- (BOOL)barsHidden;
- (void)setBarsHidden:(BOOL)arg1;
- (id)tapGestureRecognizer;
- (void)setTapGestureRecognizer:(id)arg1;
- (unsigned long long)doodleInterfaceOrientationMask;
- (void)setDoodleInterfaceOrientationMask:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
