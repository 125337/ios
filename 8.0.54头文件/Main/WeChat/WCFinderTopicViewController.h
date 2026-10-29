@interface WCFinderTopicViewController : MMUIViewController <WCFinderTopicViewModelDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderTopicListSectionHeaderViewDelegate, MMScrollActionSheetDelegate, WCFinderTopicPageViewManagerDelegate, WCFinderShareCustomTransitionProtocol, WCFinderPostMgrDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderTopicViewModel * _viewModel; // +0x68
    WCFinderAnimationLoadingView * _loadingView; // +0x70
    UIView * _navGradientView; // +0x78
    WCFinderTabPageView * _tabPageView; // +0x80
    NSMutableDictionary * _pageViewManagerDict; // +0x88
    NSString * _traceId; // +0x90
    unsigned long long _enterTime; // +0x98
    WCFinderPostMgr * _postMgr; // +0xa0
    WCFinderTopicRouteParams * _params; // +0xa8
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)postMgr;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)updateNavigationBarTitle;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)arg1;
- (id)getItemArrayConfig;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)gradientViewWithFrame:(CGRect)arg1;
- (void)adjustLayoutForHeaderImage;
- (void)changeScrollViewForNavBarInteraction:(id)arg1;
- (id)loadingView;
- (id)tabPageView;
- (id)pageViewManagerDict;
- (int)feedViewControllerScene;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)onFinderTopicHeaderViewNeedRefresh;
- (void)onFinderTopicTabListError;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (void)updateHeaderView:(id)arg1 selectedFilterType:(unsigned int)arg2;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)tabPageView:(id)arg1 filterNameArrayAtIndex:(unsigned long long)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (double)hoverOffsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (UIEdgeInsets)marginForTabContainerInFinderTabPageView:(id)arg1;
- (BOOL)checkContactSilent;
- (void)onClickPostVideoAction;
- (void)onClickPostPhotoAction;
- (void)onClickMusicCard:(id)arg1;
- (void)onFinderTopicDidReceiveFirstPageWithPrefetched:(BOOL)arg1;
- (void)onFinderTopicGetReviseFeedCount:(unsigned int)arg1 filterType:(unsigned int)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)reportTab:(id)arg1 withEventType:(long long)arg2;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 topicCount:(unsigned long long)arg4;
- (void)registerYReportSdk;
- (id)postMgrAttachTextContent:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)navGradientView;
- (void)setNavGradientView:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (void)setPageViewManagerDict:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void)setPostMgr:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

