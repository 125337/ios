@interface WASplashADViewController : MMUIViewController <WAWebViewMutiFuncMenuViewDelegate, WAWebViewMutiFuncMenuViewDataSource, WACapsuleViewDelegate, WACapsuleMenuDataSource, WAAppTaskSystemCoverViewDataSource, WAWebViewControllerMenuActionCustomDelegate>
{
    BOOL _didAppear; // +0x70
    unsigned long long _scene; // +0x78
    id <WASplashADViewControllerDelegate> _delegate; // +0x80
    WASplashAdRootView * _adRootView; // +0x88
    WACapsuleView * _capsuleView; // +0x90
    WAWebViewMutiFuncMenuView * _funcMenuView; // +0x98
}
- (void)dealloc;
- (id)initWithScene:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (CGRect)capsuleFrame;
- (double)getCapsuleMenuWidth;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)useCustomNavibar;
- (BOOL)hidesStatusBar;
- (void)addNotifications;
- (void)removeNotifications;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)onClickButtonClicked:(id)arg1;
- (id)adRootView;
- (id)funcMenuView;
- (id)capsuleView;
- (id)backgroundColor;
- (void)onWebViewMenuReturn;
- (void)capsuleViewOnClickMore:(id)arg1;
- (void)capsuleViewOnClickExit:(id)arg1;
- (unsigned long long)leftButtonTypeForMultiFuncMenuView:(id)arg1;
- (BOOL)webViewControllerMenuMustNotShare:(id)arg1;
- (BOOL)webViewControllerMenuMustNotShareTimeline:(id)arg1;
- (BOOL)webViewControllerMenuMustShowGoHomeInWeApp:(id)arg1;
- (BOOL)webViewControllerMenuMustNotShowADMenuItem:(id)arg1;
- (BOOL)webViewControllerMenuMustNotHandleMenuShowOrDismiss:(id)arg1;
- (BOOL)capsuleMenuHidden;
- (CGRect)capsuleMenuOriginalFrame;
- (CGRect)capsuleMenuFrame;
- (CGRect)calculateCapsuleMenuFrame:(double)arg1;
- (long long)capsuleMenuStyleMode;
- (BOOL)systemCoverViewHidden;
- (BOOL)didAppear;
- (void)setDidAppear:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAdRootView:(id)arg1;
- (void)setCapsuleView:(id)arg1;
- (void)setFuncMenuView:(id)arg1;
- (void).cxx_destruct;
@end
