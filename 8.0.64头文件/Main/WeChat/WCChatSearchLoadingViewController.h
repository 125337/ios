@interface WCChatSearchLoadingViewController : MMUIViewController <WCImageSearchEventDelegate, UIViewControllerTransitioningDelegate, WCStoryDismissInteractiveTransitionDelegate>
{
    BOOL _isLoading; // +0x70
    unsigned long long _status; // +0x78
    UIImageView * _loadingView; // +0x80
    UILabel * _tipLabel; // +0x88
    UIButton * _tapButton; // +0x90
    UIButton * _whiteTapButton; // +0x98
    WCImageSearchLogic * _searchLogic; // +0xa0
    WCStoryDismissInteractiveTransition * _dismissInteractiveTransition; // +0xa8
    WAAppDismissAnimateTransition * _dismissAnimateTransition; // +0xb0
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0xb8
}
- (void)addPopBackInteractivePopGesture;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)initWithSearchEntity:(id)arg1;
- (void)viewDidLoad;
- (void)addLoadingAnimation;
- (void)setNavigationBar;
- (void)initView;
- (void)onTapNavBackButton;
- (void)onTapButton;
- (void)changeStatusTo:(unsigned long long)arg1;
- (void)internalSetStatus:(unsigned long long)arg1;
- (double)referenceHeight;
- (id)tipLabel;
- (void)internalSetLoadingTip:(unsigned long long)arg1;
- (id)tapButton;
- (id)whiteTapButton;
- (id)loadingView;
- (void)onNetworkError;
- (void)onImageExpired;
- (void)onGetNoResult;
- (id)getViewController;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (void)setTapButton:(id)arg1;
- (void)setWhiteTapButton:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)searchLogic;
- (void)setSearchLogic:(id)arg1;
- (id)dismissInteractiveTransition;
- (void)setDismissInteractiveTransition:(id)arg1;
- (id)dismissAnimateTransition;
- (void)setDismissAnimateTransition:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (void).cxx_destruct;
@end
