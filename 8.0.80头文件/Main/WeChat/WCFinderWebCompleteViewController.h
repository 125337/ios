@interface WCFinderWebCompleteViewController : MMWebViewController <MMLiveCompleteViewControllerInterface>
{
    BOOL _needAutoRotateToPortrait; // +0x70
    BOOL _isEmbededInLiveFeed; // +0x71
    BOOL _didMountWebPage; // +0x72
    long long _currDeviceOrientation; // +0x78
    id <MMLiveCompleteViewControllerDelegate> _delegate; // +0x80
    NSArray * _components; // +0x88
    WCFinderLiveOverReporter * _overReporter; // +0x90
    NSString * _pageId; // +0x98
    MMNexusPageLoadContext * _pageContext; // +0xa0
}
- (id)initWithPageId:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldHideNavigationBar;
- (void)setComponents:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)isEnterDiagnoseForNavBarHandoff;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)navigateHelperClosePage;
- (void)evalJS:(id)arg1;
- (void)mountWebPage;
- (BOOL)needAutoRotateToPortrait;
- (void)setNeedAutoRotateToPortrait:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (BOOL)isEmbededInLiveFeed;
- (void)setIsEmbededInLiveFeed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)components;
- (id)overReporter;
- (void)setOverReporter:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (BOOL)didMountWebPage;
- (void)setDidMountWebPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
