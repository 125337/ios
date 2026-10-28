@interface WCFinderHistoryViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHistoryViewModelDelegate, WCFinderHistorySwitchExtension, WCFinderInteractiveHeaderDelegate>
{
    WCFinderHistoryViewModel * _viewModel; // +0x70
    WCFinderInteractiveHeader * _header; // +0x78
    WCFinderHistoryPageBase * _pageView; // +0x80
}
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)showNavigationBarSepLine;
- (void)setupHeader;
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
- (void).cxx_destruct;
@end
