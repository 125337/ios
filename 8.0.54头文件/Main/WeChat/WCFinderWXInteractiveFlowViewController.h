@interface WCFinderWXInteractiveFlowViewController : MMUIViewController <WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderWXInteractiveFlowViewModelDelegate, WCFinderWXInteractiveHeaderViewDelegate>
{
    WCFinderFeedFlowView * _feedFlowView; // +0x68
    NSMutableSet * _exposedTags; // +0x70
    unsigned long long _enterTime; // +0x78
    WCFinderWXInteractiveFlowViewModel * _flowViewModel; // +0x80
    WCFinderWXInteractiveHeaderView * _headerView; // +0x88
    long long _initSelectType; // +0x90
}
- (id)initWithSelectTabType:(long long)arg1;
- (id)init;
- (id)flowViewModel;
- (void)viewDidLoad;
- (void)updateRightBarButtonItems;
- (void)setUpFeedFlowView;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)setupSubViews;
- (void)reload;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)removeContentVM:(id)arg1 indexPath:(id)arg2;
- (void)favListViewModelDeleteDataItemTid:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)reloadDataWrap;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)WCFinderFavFeedListVMfetchDataSucceesful;
- (void)WCFinderFavFeedListVMfetchDataFailed;
- (id)feedFlowView;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)registerYReportSdk;
- (BOOL)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onFlowViewModelFetchSuc;
- (void)onFlowViewModelLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFlowViewModelDeleteDataItemTid:(id)arg1;
- (void)onFlowViewModelFetchFail;
- (void)onFlowViewModelFetchBegin;
- (void)onFlowViewModelTabChanged;
- (void)onFlowViewModelTabLocalLoaded;
- (void)onClickHeaderType:(long long)arg1;
- (void)onSearchClicked;
- (void)onLimitedClicked;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)setFeedFlowView:(id)arg1;
- (id)exposedTags;
- (void)setExposedTags:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void)setFlowViewModel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (long long)initSelectType;
- (void)setInitSelectType:(long long)arg1;
- (void).cxx_destruct;
@end

