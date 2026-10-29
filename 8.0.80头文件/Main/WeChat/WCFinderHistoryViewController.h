@interface WCFinderHistoryViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHistoryViewModelDelegate, WCFinderHistorySwitchExtension, WCFinderInteractiveHeaderDelegate, WCFinderWXInteractivePageVC>
{
    WCFinderHistoryViewModel * _viewModel; // +0x70
    WCFinderInteractiveHeader * _header; // +0x78
    WCFinderHistoryPageBase * _pageView; // +0x80
    WCFinderWXInteractivePage * _interactivePage; // +0x88
}
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)showNavigationBarSepLine;
- (void)setupHeader;
- (void)setInteractivePage:(id)arg1;
- (void)updateCurrentPage;
- (void)setupMenuItems;
- (id)makeSearchBtn;
- (id)makeMoreBtn;
- (void)onClickSearch;
- (void)onClickMore;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onInteractiveHeaderClickTab:(id)arg1;
- (void)onHistoryRecardDayChanges;
- (void)onHistoryShowSearchIconChanged;
- (void)onFinderHistoryDidClean;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)interactivePage;
- (void).cxx_destruct;
@end
