@interface WAGameCircleProgressLoadingViewController : WACircleProgressLoadingViewController <MMWebImageViewDelegate, WACapsuleMenuDataSource, WAPopInteractiveTransitionDelegate, WAAppTaskSystemCoverViewDataSource>
{
    BOOL _hasCustomImgReady; // +0x68
    BOOL _hasSlashReady; // +0x69
    BOOL _isLandScape; // +0x6a
    UIImageView * _originalImageView; // +0x70
    MMUILabel * _gameProverbLabel; // +0x78
    UIImageView * _gameProverbLogo; // +0x80
    MMWebImageView * _ageAppropriateView; // +0x88
    WCTagsView * _tagsView; // +0x90
    long long _orientation; // +0x98
    NSString * _customProgressBarColor; // +0xa0
    unsigned long long _startDownloadCoverTimeInMs; // +0xa8
    MMWebImageView * _customloadingImg; // +0xb0
    NSString * _ageAppropriateUrl; // +0xb8
    WAGameRollProgressView * _gameloadingAnimationView; // +0xc0
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0xc8
    WAMenuPopInteractiveTransition * _dismissInteractiveTransition; // +0xd0
    MMUIButton * _requestFullScreenBtn; // +0xd8
}
- (id)init:(id)arg1 pkgConfig:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initSubViews;
- (void)initGameTagToken;
- (id)tagsView;
- (void)initGameProverb;
- (BOOL)needWeakNetTips;
- (void)initAgeAppropriate;
- (void)viewDidLayoutSubviews;
- (void)onReturn;
- (void)finishedSlash;
- (void)initCusinittomLoadingView:(id)arg1 pkgConfig:(id)arg2;
- (void)checkShowCustomLoadingBgView;
- (void)showCustomLoadingBgView;
- (BOOL)shouldUseSmallMenu;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onLoadImageOK:(id)arg1;
- (BOOL)capsuleMenuHidden;
- (CGRect)capsuleMenuOriginalFrame;
- (CGRect)capsuleMenuFrame;
- (BOOL)systemCoverViewHidden;
- (void)onAgeAppropriateClick;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)getGameProverbLogo;
- (id)originalImageView;
- (void)setOriginalImageView:(id)arg1;
- (id)gameProverbLabel;
- (void)setGameProverbLabel:(id)arg1;
- (id)gameProverbLogo;
- (void)setGameProverbLogo:(id)arg1;
- (id)ageAppropriateView;
- (void)setAgeAppropriateView:(id)arg1;
- (void)setTagsView:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)customProgressBarColor;
- (void)setCustomProgressBarColor:(id)arg1;
- (unsigned long long)startDownloadCoverTimeInMs;
- (void)setStartDownloadCoverTimeInMs:(unsigned long long)arg1;
- (id)customloadingImg;
- (void)setCustomloadingImg:(id)arg1;
- (BOOL)hasCustomImgReady;
- (void)setHasCustomImgReady:(BOOL)arg1;
- (BOOL)hasSlashReady;
- (void)setHasSlashReady:(BOOL)arg1;
- (BOOL)isLandScape;
- (void)setIsLandScape:(BOOL)arg1;
- (id)ageAppropriateUrl;
- (void)setAgeAppropriateUrl:(id)arg1;
- (id)gameloadingAnimationView;
- (void)setGameloadingAnimationView:(id)arg1;
- (id)popBackGesture;
- (void)setPopBackGesture:(id)arg1;
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (id)requestFullScreenBtn;
- (void)setRequestFullScreenBtn:(id)arg1;
- (void).cxx_destruct;
@end

