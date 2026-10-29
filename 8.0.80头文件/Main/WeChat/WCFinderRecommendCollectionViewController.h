@interface WCFinderRecommendCollectionViewController : WCFinderCustomPanelSheet <WCFinderRecommendCollectionViewModelDelegate, WCFinderFeedFlowViewAdapterDeleagte, WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenProtocol>
{
    int _customCommentScene; // +0x70
    WCFinderFeedFlowViewAdapter * _flowViewAdapter; // +0x78
    WCFinderRecommendCollectionViewModel * _viewModel; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    UILabel * _titleLabel; // +0x90
    UILabel * _descLabel; // +0x98
    WCFinderFeedFlowView * _feedFlowView; // +0xa0
    unsigned long long _enterTime; // +0xa8
}
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)layoutUI;
- (void)initFlowViewAdapter;
- (void)reportPageOut:(unsigned long long)arg1;
- (id)loadingView;
- (id)titleLabel;
- (id)descLabel;
- (id)feedFlowView;
- (void)finderRecommendCollectionHeaderChanged:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)feedListViewControllerWillAppear:(id)arg1;
- (id)feedFlowViewAdapter:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (id)feedFlowViewAdapterBypassReportDictToSingleStream:(id)arg1;
- (id)getHalfContainerView;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (id)flowViewAdapter;
- (void)setFlowViewAdapter:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (int)customCommentScene;
- (void)setCustomCommentScene:(int)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
