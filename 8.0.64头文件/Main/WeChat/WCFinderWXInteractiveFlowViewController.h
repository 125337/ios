@interface WCFinderWXInteractiveFlowViewController : MMUIViewController <WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderWXInteractiveFlowViewModelDelegate, WCFinderInteractiveHeaderViewDelegate, _TtP6WeChat36FinderFavoriteCollectionListDelegate_>
{
    WCFinderFeedFlowView * _feedFlowView; // +0x70
    NSMutableSet * _exposedTags; // +0x78
    unsigned long long _enterTime; // +0x80
    unsigned long long _favoritePageEnterTime; // +0x88
    WCFinderWXInteractiveFlowViewModel * _flowViewModel; // +0x90
    WCFinderInteractiveHeaderView * _headerView; // +0x98
    long long _initSelectType; // +0xa0
    _TtC6WeChat28FinderFavoriteCollectionList * _favoriteCollectionList; // +0xa8
    unsigned long long _lastDisplayPageId; // +0xb0
    NSString * _lastDisplayPageName; // +0xb8
    long long _lastDataType; // +0xc0
}
+ (id)createLimitModeTeenageMenuItem:(id)arg1 action:(SEL)arg2;
- (id)initWithSelectTabType:(long long)arg1;
- (id)init;
- (id)flowViewModel;
- (void)viewDidLoad;
- (void)updateRightBarButtonItems;
- (void)setupHeaderTap;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)useBlackStatusbar;
- (BOOL)showNavigationBarSepLine;
- (void)_showDeleteConfirmActionSheetWithItemIndexPath:(id)arg1;
- (void)_removeItemAtIndexPath:(id)arg1;
- (void)setupSubViews;
- (void)reload;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
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
- (void)_reportFavoritePageOutWithDataType:(long long)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onDataFetchedForFinderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 contentVM:(id)arg3;
- (void)onFlowViewModelFetchSuc;
- (void)onFlowViewModelLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onFlowViewModelDeleteDataItemTid:(id)arg1;
- (void)onFlowViewModelFetchFail;
- (void)onFlowViewModelFetchBegin;
- (void)onFlowViewModelTabChanged;
- (void)onFlowViewModelTabLocalLoaded;
- (void)onSearchClicked;
- (void)onLimitedClicked;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)headerView:(id)arg1 selectedTab:(id)arg2 dataType:(long long)arg3;
- (void)favoriteCollectionList:(id)arg1 didDeleteItem:(id)arg2;
- (void)favoriteCollectionList:(id)arg1 generatingEvent:(long long)arg2;
- (void)setFeedFlowView:(id)arg1;
- (id)exposedTags;
- (void)setExposedTags:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)favoritePageEnterTime;
- (void)setFavoritePageEnterTime:(unsigned long long)arg1;
- (void)setFlowViewModel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (long long)initSelectType;
- (void)setInitSelectType:(long long)arg1;
- (id)favoriteCollectionList;
- (void)setFavoriteCollectionList:(id)arg1;
- (unsigned long long)lastDisplayPageId;
- (void)setLastDisplayPageId:(unsigned long long)arg1;
- (id)lastDisplayPageName;
- (void)setLastDisplayPageName:(id)arg1;
- (long long)lastDataType;
- (void)setLastDataType:(long long)arg1;
- (void).cxx_destruct;
@end
