@interface WCFinderHistoryViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewAdapterDeleagte, WCFinderHistoryViewModelDelegate>
{
    WCFinderHistoryViewModel * _viewModel; // +0x68
    WCFinderFeedFlowViewAdapter * _flowViewAdapter; // +0x70
    WCFinderFeedFlowView * _feedFlowView; // +0x78
}
- (void)viewDidLoad;
- (BOOL)showNavigationBarSepLine;
- (void)setupFlowView;
- (WCFinderFeedFlowViewCellMenuComponment)_createMenuComp;
- (void)setupMenuItems;
- (id)makeSearchBtn;
- (id)makeMoreBtn;
- (void)onClickSearch;
- (void)onClickMore;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (int)feedViewControllerScene;
- (void)onHistoryRecardDayChanges;
- (void)onHistoryShowSearchIconChanged;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)flowViewAdapter;
- (void)setFlowViewAdapter:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (void).cxx_destruct;
@end

