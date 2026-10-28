@interface MMPageSheetContainerWindowController : MMWindowViewController <WCFinderHalfScreenProtocol, MMPageSheetProviderViewDelegate, MMPageSheetWindowDelegate, MMPageSheetContainer>
{
    BOOL _pageSheetDismissed; // +0x7c
    MMPageSheetProviderView * _providerView; // +0x80
    unsigned long long _supportOrientation; // +0x88
    id <MMPageSheetContainerDelegate> _containerDelegate; // +0x90
}
- (id)getHalfContainerView;
- (id)getCurTargetRatioValue;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)hideWithAnimated:(int)arg1;
- (BOOL)shouldHandleStatusBarAppearance;
- (BOOL)shouldTransferTouchEventInPoint:(CGPoint)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)supportAdjustOrientationMask;
- (void)notifySupportedOrientationMaskShouldAdjust;
- (void)resetSupportOrientation;
- (void)onPageSheetDismiss:(id)arg1 complete:(id /* block */)arg2;
- (id)getContainerViewController;
- (void)setupWithProvider:(id)arg1;
- (void)showPageSheetAnimated:(BOOL)arg1 parentView:(id)arg2 parentViewController:(id)arg3 complete:(id /* block */)arg4;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateContentHeightWithAnimated:(BOOL)arg1;
- (void)pushPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)popPageSheetWithAnimated:(BOOL)arg1;
- (void)adjustContainerYOffset:(double)arg1 animated:(BOOL)arg2;
- (void)popPageSheetTo:(id)arg1 animated:(BOOL)arg2;
- (id)pageSheetContainerView;
- (id)pageSheetHeightRatioValue;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)providerView;
- (void)setProviderView:(id)arg1;
- (unsigned long long)supportOrientation;
- (void)setSupportOrientation:(unsigned long long)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (BOOL)pageSheetDismissed;
- (void)setPageSheetDismissed:(BOOL)arg1;
- (void).cxx_destruct;
@end
