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
- (id)loadContentView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)layoutUI;
- (void)initFlowViewAdapter;
- (id)loadingView;
- (id)titleLabel;
- (id)descLabel;
- (id)feedFlowView;
- (void)finderRecommendCollectionHeaderChanged:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)feedListViewControllerWillAppear:(id)arg1;
- (id)getHalfContainerView;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
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
