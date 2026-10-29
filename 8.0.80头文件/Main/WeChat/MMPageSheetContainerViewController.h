@interface MMPageSheetContainerViewController : MMUIViewController <WCFinderHalfScreenProtocol, MMPageSheetProviderViewDelegate, UIViewControllerTransitioningDelegate, MMPageSheetAdapterDelegate, MMPageSheetContainer>
{
    BOOL _isPageSheetDismissed; // +0x70
    BOOL _isPageSheetPresented; // +0x71
    BOOL _hasCallShowPageSheet; // +0x72
    BOOL _showPageSheetAnimated; // +0x73
    id <MMPageSheetContainerViewControllerDelegate> _delegate; // +0x78
    MMPageSheetProviderView * _providerView; // +0x80
    id <MMPageSheetProvider><MMPageSheetContainerDelegate> _currPageProvider; // +0x88
    UIViewController * _orientationViewController; // +0x90
    unsigned long long _supportOrientation; // +0x98
    id /* block */ _showPageSheetComplete; // +0xa0
    MMPageSheetAdapter * _pageSheet; // +0xa8
}
- (id)getHalfContainerView;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)initWithPageSheet:(id)arg1;
- (void)dealloc;
- (id)pageSheetAdapter;
- (id)hostViewController;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldWrapViewWithSafeArea;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetContainerDidDismiss:(id)arg1;
- (void)pageSheetPresentAnimateWillBegin:(id)arg1;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)setupWithProvider:(id)arg1;
- (void)showPageSheetAnimated:(BOOL)arg1 parentView:(id)arg2 parentViewController:(id)arg3 complete:(id /* block */)arg4;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateContentHeightWithAnimated:(BOOL)arg1;
- (void)pushPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)popPageSheetWithAnimated:(BOOL)arg1;
- (void)popPageSheetTo:(id)arg1 animated:(BOOL)arg2;
- (void)adjustContainerYOffset:(double)arg1 animated:(BOOL)arg2;
- (id)pageSheetContainerView;
- (void)onPageSheetDismiss:(id)arg1 complete:(id /* block */)arg2;
- (id)getContainerViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPageSheetDismissed;
- (void)setIsPageSheetDismissed:(BOOL)arg1;
- (id)providerView;
- (void)setProviderView:(id)arg1;
- (id)currPageProvider;
- (void)setCurrPageProvider:(id)arg1;
- (id)orientationViewController;
- (void)setOrientationViewController:(id)arg1;
- (unsigned long long)supportOrientation;
- (void)setSupportOrientation:(unsigned long long)arg1;
- (BOOL)isPageSheetPresented;
- (void)setIsPageSheetPresented:(BOOL)arg1;
- (BOOL)hasCallShowPageSheet;
- (void)setHasCallShowPageSheet:(BOOL)arg1;
- (BOOL)showPageSheetAnimated;
- (void)setShowPageSheetAnimated:(BOOL)arg1;
- (id /* block */)showPageSheetComplete;
- (void)setShowPageSheetComplete:(id /* block */)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (void).cxx_destruct;
@end
