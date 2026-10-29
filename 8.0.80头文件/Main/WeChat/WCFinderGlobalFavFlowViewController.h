@interface WCFinderGlobalFavFlowViewController : MMUIViewController <WCFinderGlobalFavFlowPageViewModelDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderGlobalFavListViewModelDelegate>
{
    BOOL _disableSearch; // +0x70
    double _topPadding; // +0x78
    WCFinderGlobalFavFlowViewModel * _viewModel; // +0x80
    WCFinderGlobalFavFlowPageViewModel * _pageViewModel; // +0x88
    WCFinderFeedFlowView * _feedFlowView; // +0x90
    WCSearchBar * _searchBar; // +0x98
    id /* block */ _dismissBlock; // +0xa0
    NSMutableSet * _exposedTags; // +0xa8
    WCFinderRichTextView * _richTextView; // +0xb0
    UIView * _customTitleView; // +0xb8
    UILabel * _subTitleView; // +0xc0
    unsigned long long _enterTime; // +0xc8
    WCFinderExtStatsReporter * _extStatReporter; // +0xd0
}
+ (id)keyPathsForValuesAffectingTotalCount;
+ (BOOL)automaticallyNotifiesObserversOfTotalCount;
- (id)init;
- (id)initWithDismissBlock:(id /* block */)arg1;
- (void)setPageViewModel:(id)arg1;
- (long long)totalCount;
- (void)setDisableSearch:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)setupNavigationBar;
- (id)getTitleViewText;
- (void)setupSubViews;
- (id)richTextView;
- (void)updateTitle;
- (void)updateCustomTitleViewLayout;
- (void)reload;
- (id)extStatReporter;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)removeContentVM:(id)arg1 indexPath:(id)arg2;
- (void)favListViewModelDeleteDataItemTid:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)reloadDataWrap;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)WCFinderFavFeedListVMfetchDataSucceesful;
- (void)WCFinderFavFeedListVMfetchDataFailed;
- (id)feedFlowView;
- (id)searchBar;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)registerYReportSdk;
- (BOOL)disableSearch;
- (double)topPadding;
- (void)setTopPadding:(double)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)pageViewModel;
- (void)setFeedFlowView:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)exposedTags;
- (void)setExposedTags:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)subTitleView;
- (void)setSubTitleView:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void)setExtStatReporter:(id)arg1;
- (void).cxx_destruct;
@end
