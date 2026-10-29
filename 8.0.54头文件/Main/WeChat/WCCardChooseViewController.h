@interface WCCardChooseViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, MMRefreshTableFooterDelegate, WCCardChooseItemViewDelegate, IWCShareCardPkgExt, ILinkEventExt>
{
    WCCardAvailableSeed * _availableSeed; // +0x68
    BOOL _isLoading; // +0x70
    NSMutableArray * _cardList; // +0x78
    NSMutableArray * _shareCardList; // +0x80
    MMTableView * _tableView; // +0x88
    WCCardChooseEmptyView * _emptyView; // +0x90
    UIScrollView * _loadingView; // +0x98
    UIButton * _confirmBtn; // +0xa0
    UIView * _bottomContentView; // +0xa8
    UILabel * _bottomTipsLabel; // +0xb0
    UrlLabel * _bottomUrlLabel; // +0xb8
    map<long, WCCardChooseViewSectionType, std::less<long>, std::allocator<std::pair<const long, WCCardChooseViewSectionType>>> _sectionIndexToType; // +0xc0
    WCTimeLineFooterView * _tableFooterView; // +0xd8
    MMUIView * _tableDefaultFooterView; // +0xe0
    NSData * _controlBuff; // +0xe8
    NSMutableArray * _chooseInfoLists; // +0xf0
    id <WCCardChooseViewControllerDelegate> _delegate; // +0xf8
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

