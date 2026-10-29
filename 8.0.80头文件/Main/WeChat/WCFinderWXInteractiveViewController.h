@interface WCFinderWXInteractiveViewController : MMUIViewController <WCFinderArbitraryPageViewDataDelegate, WCFinderArbitraryPageViewDataSource, WCFinderWXInteractivePageDelegate>
{
    WCFinderWXInteractiveViewModel * _viewModel; // +0x70
    WCFinderArbitraryPageView * _pageView; // +0x78
    WCFinderContact * _contact; // +0x80
}
- (id)initWithUserPrepare:(id)arg1;
- (void)viewDidLoad;
- (void)setupMenuItems;
- (id)makeSearchBtn;
- (id)makeMoreBtn;
- (id)arbitraryTabView:(id)arg1 pageTabNameForIdentifier:(id)arg2 index:(long long)arg3;
- (id)arbitraryTabView:(id)arg1 pageViewController:(id)arg2 index:(long long)arg3;
- (void)onClickSearch;
- (void)onClickMore;
- (void)onLimitClick;
- (void)onWXInteractiveTabChanges:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
