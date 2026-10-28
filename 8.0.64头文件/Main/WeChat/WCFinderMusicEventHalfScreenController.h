@interface WCFinderMusicEventHalfScreenController : WCFinderCustomPanelSheet <WCFinderMusicEventViewDelegate, WCFinderInvalidMusicTopicViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol>
{
    BOOL _showTransparentNaviBar; // +0x70
    WCFinderMusicEventView * _musicEventView; // +0x78
    WCFinderTopicRouteParams * _params; // +0x80
    NSString * _topicTitle; // +0x88
    NSString * _navigationBarTitle; // +0x90
    UIBarButtonItem * _moreRightButtonItem; // +0x98
}
- (id)initWithParams:(id)arg1;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBarTitle;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)currentViewController;
- (void)initMusicNaviItems;
- (void)onFinderMusicTopicHeaderViewRefresh;
- (double)topInsetOfFinderTabPageView;
- (void)onFinderMusicTopicSwitchTab:(id)arg1;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (id)getHalfContainerView;
- (void)onConfirmButtonClicked;
- (id)musicEventView;
- (void)setMusicEventView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:(id)arg1;
- (id)moreRightButtonItem;
- (void)setMoreRightButtonItem:(id)arg1;
- (BOOL)showTransparentNaviBar;
- (void)setShowTransparentNaviBar:(BOOL)arg1;
- (void).cxx_destruct;
@end
