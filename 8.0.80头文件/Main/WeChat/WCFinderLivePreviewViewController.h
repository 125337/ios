@interface WCFinderLivePreviewViewController : MMCPUIViewController <MMLiveViewDelegate, MMLiveAudienceAccountIntroViewDelegate, WCFinderTrumpetSelectViewControllerDelegate, MMLiveContainerLogicControllerDelegate>
{
    BOOL _showCloseButton; // +0x70
    BOOL _showFullScreenLoading; // +0x71
    BOOL _showSwitchAccountIntroction; // +0x72
    BOOL _isPresentingWithCustomTransition; // +0x73
    BOOL _isEmbededInLiveFeed; // +0x74
    BOOL _isEmbededInLiveFeedByReusing; // +0x75
    BOOL _suppressIdentitySwitch; // +0x76
    BOOL _isChoosingEnterLiveRole; // +0x77
    BOOL _hasAppeared; // +0x78
    BOOL _isPopedOrDismissed; // +0x79
    int _commentScene; // +0x7c
    MMLiveView * liveView; // +0x80
    id /* block */ _enterLiveWithContentVMCallback; // +0x88
    MMFinderLiveHeaderView * _finderLiveHeaderView; // +0x90
    MMFinderLiveView * _finderLiveView; // +0x98
    MMLiveAudienceAccountIntroView * _audienceAccountIntroView; // +0xa0
    MMFinderLiveContentVM * _contentVM; // +0xa8
    MMFinderLiveTask * _previewLiveTask; // +0xb0
    id /* block */ _closeCallback; // +0xb8
}
- (id)initWithFinderLiveContentVM:(id)arg1 commentScene:(int)arg2 closeCallback:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (BOOL)checkAndShowAudienceAccountIntroView;
- (void)initSubViews;
- (void)initHeaderView;
- (void)initLiveView;
- (BOOL)switchToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)fetchDetailDataItem;
- (id)previewLiveTask;
- (id)audienceAccountIntroView;
- (id)finderDataItem;
- (id)anchorContact;
- (BOOL)onMMLiveViewIsAudience;
- (id)onMMLiveViewGetAnchorIdentityId;
- (void)onFinderTrumpetSelectViewLiveIdentityWillChange:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (void)onFinderTrumpetSelectViewLiveIdentityDidChanged:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (void)onMMLiveAudienceAccountIntroViewChooseButtonClicked;
- (void)onMMLiveAudienceAccountIntroViewEnterLiveButtonClicked;
- (id)blurView;
- (id)liveTaskId;
- (id)displayContentView;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (BOOL)isForcePortraitForExtend;
- (void)setIsForcePortraitForExtend:(BOOL)arg1;
- (void)showView;
- (void)hideView;
- (id)currentLiveTask;
- (BOOL)shouldSupportInteractiveTransition;
- (BOOL)shouldInvokeInteractiveTransition;
- (void)onLiveMinimizeWindowDidShiftIntoListChanged:(BOOL)arg1;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (BOOL)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (BOOL)shouldSupportSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)rotateToOrientation:(long long)arg1;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (id)liveView;
- (id /* block */)enterLiveWithContentVMCallback;
- (void)setEnterLiveWithContentVMCallback:(id /* block */)arg1;
- (BOOL)showCloseButton;
- (void)setShowCloseButton:(BOOL)arg1;
- (BOOL)showFullScreenLoading;
- (void)setShowFullScreenLoading:(BOOL)arg1;
- (BOOL)showSwitchAccountIntroction;
- (void)setShowSwitchAccountIntroction:(BOOL)arg1;
- (BOOL)isPresentingWithCustomTransition;
- (void)setIsPresentingWithCustomTransition:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeed;
- (void)setIsEmbededInLiveFeed:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeedByReusing;
- (void)setIsEmbededInLiveFeedByReusing:(BOOL)arg1;
- (BOOL)suppressIdentitySwitch;
- (void)setSuppressIdentitySwitch:(BOOL)arg1;
- (id)finderLiveHeaderView;
- (void)setFinderLiveHeaderView:(id)arg1;
- (id)finderLiveView;
- (void)setFinderLiveView:(id)arg1;
- (void)setAudienceAccountIntroView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setPreviewLiveTask:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)isChoosingEnterLiveRole;
- (void)setIsChoosingEnterLiveRole:(BOOL)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (BOOL)isPopedOrDismissed;
- (void)setIsPopedOrDismissed:(BOOL)arg1;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
