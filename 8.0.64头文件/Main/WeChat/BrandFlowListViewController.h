@interface BrandFlowListViewController : MMUIViewController <MMWebViewPresetUIChildViewDelegate, MMWebViewDelegate, BrandFlowListDislikeSelectionHalfViewControllerDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewReportDelegate>
{
    BOOL _hasSendExposeEventAfterEnter; // +0x70
    BOOL _hasPreloadTemplateTypeCommonShare; // +0x71
    unsigned int _currentShowIndex; // +0x74
    int _needDeleteIndex; // +0x78
    id <BrandFlowListViewControllerDelegate> _delegate; // +0x80
    BrandFlowListReportHelperItem * _reportHelperItem; // +0x88
    WCFinderFeedListView * _feedListView; // +0x90
    NSMutableDictionary * _url2webviewVC; // +0x98
    unsigned long long _navbarScene; // +0xa0
    NSMutableArray * _arrCellData; // +0xa8
    BrandFlowListLogic * _flowListLogic; // +0xb0
    UIScreenEdgePanGestureRecognizer * _webviewScreenEdgePanGesture; // +0xb8
}
- (id)initWithOftenReadModels:(id)arg1 index:(unsigned int)arg2;
- (void)dealloc;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)tryPreloadNeededTemplateWithModels:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)requestRecommendDataWithScene:(unsigned long long)arg1;
- (void)initNavbar;
- (void)updateNavbarWithScene:(unsigned long long)arg1;
- (void)onOperate:(id)arg1;
- (void)onNavBarLeftBackButtonClicked;
- (void)onNavBarLeftCloseButtonClicked;
- (void)initView;
- (void)configureTableView;
- (BOOL)isShowArticle;
- (id)navigationBarBackgroundColor;
- (BOOL)m_bInteractivePopEnabled;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)forbidCreateNavHeader;
- (void)tryPreloadNextWebview;
- (id)createWebviewWithUrl:(id)arg1 itemShowType:(unsigned int)arg2 articleCellModel:(id)arg3;
- (void)sendExposeArticleEventWithIndex:(unsigned int)arg1 isExpose:(BOOL)arg2;
- (id)webviewVCWithIndex:(unsigned int)arg1;
- (void)tryReleaseFarAwayWebview;
- (unsigned long long)indexOfArticleUrl:(id)arg1;
- (id)articleUrlWithIndex:(long long)arg1;
- (BOOL)isNeedSupply;
- (void)replaceWithSupplyModel:(id)arg1;
- (void)deleteUnSupplyModels;
- (unsigned int)itemShowTypeWithIndex:(long long)arg1;
- (void)onWebViewControllerRecieveImmerseReadFullArticleEvent:(id)arg1;
- (void)disableInteractivePopForAllWebviewIfNeeded;
- (void)enableInteractivePopForAllWebviewIfNeeded;
- (void)onWebViewController:(id)arg1 setDisableWebInterativePop:(BOOL)arg2;
- (void)onWebViewControllerRecieveImmerseFoldFullArticleEvent:(id)arg1;
- (void)brandFlowListHandleScreenEdgePanGesture:(id)arg1;
- (id)parentNavigationItemWithWebview:(id)arg1;
- (BOOL)shouldShowDislikeMenuWithWebview:(id)arg1;
- (void)onClickDislikeMenuWithWebview:(id)arg1;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (id)currentShownWebviewVC;
- (BOOL)onWebViewCanPassHandleDeviceInfoWithAction:(id)arg1 Webview:(id)arg2;
- (id)onWebViewPassHandleDeviceInfoWithAction:(id)arg1 params:(id)arg2 Webview:(id)arg3;
- (void)relayoutWebContentWithFullScreen:(BOOL)arg1;
- (id)arrCellData;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)arg1;
- (void)commonHandleScrollEnd:(id)arg1;
- (void)changeToNewIndex:(unsigned int)arg1;
- (void)updateTopBarWithScene:(unsigned long long)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)report30752;
- (void)report30755ForAction:(unsigned long long)arg1 cellModel:(id)arg2 stayTime:(unsigned long long)arg3;
- (void)onBrandFlowListItemBeDisliked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportHelperItem;
- (void)setReportHelperItem:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)url2webviewVC;
- (void)setUrl2webviewVC:(id)arg1;
- (unsigned int)currentShowIndex;
- (void)setCurrentShowIndex:(unsigned int)arg1;
- (unsigned long long)navbarScene;
- (void)setNavbarScene:(unsigned long long)arg1;
- (void)setArrCellData:(id)arg1;
- (id)flowListLogic;
- (void)setFlowListLogic:(id)arg1;
- (BOOL)hasSendExposeEventAfterEnter;
- (void)setHasSendExposeEventAfterEnter:(BOOL)arg1;
- (BOOL)hasPreloadTemplateTypeCommonShare;
- (void)setHasPreloadTemplateTypeCommonShare:(BOOL)arg1;
- (id)webviewScreenEdgePanGesture;
- (void)setWebviewScreenEdgePanGesture:(id)arg1;
- (int)needDeleteIndex;
- (void)setNeedDeleteIndex:(int)arg1;
- (void).cxx_destruct;
@end
