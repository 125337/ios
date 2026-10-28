@interface TextStateNotifyMsgListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TextStateLikeCellContentViewDelegate, MMRefreshTableFooterDelegate, TextStateMgrExt>
{
    BOOL _isUnReadMode; // +0x70
    BOOL _hasMoreReadMessage; // +0x71
    double _cellHeight; // +0x78
    NSString * _nsCurStateID; // +0x80
    MMTableView * _tableView; // +0x88
    NSMutableArray * _arrInfo; // +0x90
    UILabel * _emptyLabel; // +0x98
    WCTimeLineFooterView * _footerView; // +0xa0
    WACommentListFooterTipView * _footer; // +0xa8
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (id)tableView;
- (id)emptyLabel;
- (void)initFooterView;
- (id)footer;
- (void)initData;
- (void)loadAllData;
- (void)initView;
- (void)reloadTableView;
- (void)loadMoreData;
- (void)onLoadMoreData:(id)arg1 loadCount:(unsigned int)arg2;
- (void)onTapClearNavigationItem;
- (void)clearNotifications;
- (void)markAllNewMessageRead;
- (void)openStateDetailPageWithId:(id)arg1 refCommendId:(unsigned long long)arg2 popupLikePage:(BOOL)arg3;
- (void)openStateDetailPageWith:(id)arg1 refCommendId:(unsigned long long)arg2 popupLikePage:(BOOL)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickReadMore;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickHeadImageWithInfo:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onReceiveCommentItem:(id)arg1;
- (void)registerYReportSdk;
- (BOOL)isUnReadMode;
- (void)setIsUnReadMode:(BOOL)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)nsCurStateID;
- (void)setNsCurStateID:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)arrInfo;
- (void)setArrInfo:(id)arg1;
- (void)setEmptyLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setFooter:(id)arg1;
- (BOOL)hasMoreReadMessage;
- (void)setHasMoreReadMessage:(BOOL)arg1;
- (void).cxx_destruct;
@end
