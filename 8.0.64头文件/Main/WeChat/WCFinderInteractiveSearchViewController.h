@interface WCFinderInteractiveSearchViewController : WCSearchViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderInteractiveSearchViewModelDelegate, UITextFieldDelegate>
{
    id /* block */ _closeCallback; // +0x70
    WCFinderInteractiveSearchViewModel * _viewModel; // +0x78
    WCFinderFeedFlowView * _feedFlowView; // +0x80
    unsigned long long _searchKey; // +0x88
    long long _tabType; // +0x90
}
+ (void)displayOnViewController:(id)arg1 tabType:(long long)arg2 closeCallback:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (id)createFeedFlowView;
- (void)_dismiss;
- (void)onNavigationCancelItemClick;
- (double)searchBarHeight;
- (id)customSearchBar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTextFieldChanged:(id)arg1;
- (void)_delaySearch;
- (void)_doSerach:(long long)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onSearchVMSecitonChanged:(id)arg1;
- (void)onSearchVMSectionLoadingStateChanged:(id)arg1;
- (void)onSearchVMDeleteDataItemTid:(id)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (id /* block */)closeCallback;
- (void)setCloseCallback:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)searchKey;
- (void)setSearchKey:(unsigned long long)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (void).cxx_destruct;
@end
