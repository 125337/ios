@interface WCCardChooseViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, MMRefreshTableFooterDelegate, WCCardChooseItemViewDelegate, IWCShareCardPkgExt, ILinkEventExt>
{
    WCCardAvailableSeed * _availableSeed; // +0x70
    BOOL _isLoading; // +0x78
    NSMutableArray * _cardList; // +0x80
    NSMutableArray * _shareCardList; // +0x88
    MMTableView * _tableView; // +0x90
    WCCardChooseEmptyView * _emptyView; // +0x98
    UIScrollView * _loadingView; // +0xa0
    UIButton * _confirmBtn; // +0xa8
    UIView * _bottomContentView; // +0xb0
    UILabel * _bottomTipsLabel; // +0xb8
    UrlLabel * _bottomUrlLabel; // +0xc0
    map<long, WCCardChooseViewSectionType, std::less<long>, std::allocator<std::pair<const long, WCCardChooseViewSectionType>>> _sectionIndexToType; // +0xc8
    WCTimeLineFooterView * _tableFooterView; // +0xe0
    MMUIView * _tableDefaultFooterView; // +0xe8
    NSData * _controlBuff; // +0xf0
    NSMutableArray * _chooseInfoLists; // +0xf8
    id <WCCardChooseViewControllerDelegate> _delegate; // +0x100
}
- (id)initWithCardAvailableSeed:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)initTableView;
- (void)initLoadingView;
- (void)initEmptyView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)onWCCardChooseInfo:(id)arg1;
- (BOOL)bIsSupportMultiSelect;
- (void)loadCellSubView:(id)arg1 chooseInfo:(id)arg2;
- (void)onLeftButtonOP;
- (void)onConfirmBtnPress:(id)arg1;
- (void)onGetAvailableCardInfo:(id)arg1 isEnd:(BOOL)arg2 buff:(id)arg3 ErrCode:(int)arg4;
- (void)onMarkShareCardError;
- (void)showTableView;
- (void)showLoadingView;
- (void)showEmptyView;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
