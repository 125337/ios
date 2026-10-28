@interface MMLiveVerifyViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMLiveTaskMgrExt, AVCaptureVideoDataOutputSampleBufferDelegate, MMAcceptAgreementProtocolViewDelegate, MMWebViewDelegate>
{
    BOOL _needAutoRotateToPortrait; // +0x70
    BOOL _isAgreementChecked; // +0x71
    BOOL _navigationBarHiddenWhenDisappear; // +0x72
    BOOL _hasCalledCompletionBlock; // +0x73
    unsigned int _lastEventId; // +0x74
    long long _currDeviceOrientation; // +0x78
    id /* block */ _didAppearHandleCallback; // +0x80
    id <MMLiveVerifyViewControllerDelegate> _delegate; // +0x88
    id /* block */ _verifyCompletionBlock; // +0x90
    UIButton * _backButton; // +0x98
    UIImageView * _backgroundView; // +0xa0
    MMLiveView * _liveView; // +0xa8
    MMLiveVerifyAgreementCommonHeadView * _liveVerifyHeadView; // +0xb0
    MMLiveVerifyAgreementProtocolView * _liveVerifyProtocolView; // +0xb8
    UIButton * _liveVerifyButton; // +0xc0
    WCFinderAnimationLoadingView * _animatedLoadingView; // +0xc8
    UIView * _liveVerifyButtonLoadingView; // +0xd0
}
- (id)initWithLiveView:(id)arg1 delegate:(id)arg2 andVerifyCompletionBlock:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (long long)getCurrentOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)setupVideoBlurBackground;
- (void)intUI;
- (void)startVerifyButtonLoading;
- (void)stopVerifyButtonLoading;
- (void)onBackButtonClicked;
- (void)onVerifyButtonClicked;
- (void)onLiveVerifyWithEventId:(unsigned int)arg1 result:(id)arg2 isVerified:(BOOL)arg3 withVerifyUrl:(id)arg4;
- (void)animateToFadeOut;
- (void)showAlert:(id)arg1;
- (void)onProtocolLinkClicked:(id)arg1;
- (void)onProtocolSelectedClicked;
- (void)forceRotateToPortrait;
- (BOOL)needAutoRotateToPortrait;
- (void)setNeedAutoRotateToPortrait:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (BOOL)isAgreementChecked;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (BOOL)navigationBarHiddenWhenDisappear;
- (void)setNavigationBarHiddenWhenDisappear:(BOOL)arg1;
- (id /* block */)didAppearHandleCallback;
- (void)setDidAppearHandleCallback:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)verifyCompletionBlock;
- (void)setVerifyCompletionBlock:(id /* block */)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (unsigned int)lastEventId;
- (void)setLastEventId:(unsigned int)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)liveVerifyHeadView;
- (void)setLiveVerifyHeadView:(id)arg1;
- (id)liveVerifyProtocolView;
- (void)setLiveVerifyProtocolView:(id)arg1;
- (id)liveVerifyButton;
- (void)setLiveVerifyButton:(id)arg1;
- (id)animatedLoadingView;
- (void)setAnimatedLoadingView:(id)arg1;
- (id)liveVerifyButtonLoadingView;
- (void)setLiveVerifyButtonLoadingView:(id)arg1;
- (BOOL)hasCalledCompletionBlock;
- (void)setHasCalledCompletionBlock:(BOOL)arg1;
- (void).cxx_destruct;
@end
