@interface WCPayTransferPhoneHistoryPage : WCPayBaseViewController <MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMRefreshTableFooterView * _footerView; // +0x98
    id <WCPayTransferPhoneHistoryPageDelegate> _m_delegate; // +0xa0
    MMTableView * _m_tableView; // +0xa8
    WCPayCss * _css; // +0xb0
    TransferPhoneGetHisRcvrsResp * _hisRcvrsResp; // +0xb8
    UILabel * _loadingLabel; // +0xc0
    MMUIActivityIndicatorView * _indicatorView; // +0xc8
    unsigned long long _loadingState; // +0xd0
    UIView * _headerView; // +0xd8
}
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateHeaderView;
- (void)updateFooterView;
- (void)updateLoadingLabel;
- (void)updateIndicator;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)hisRcvrsResp;
- (void)setHisRcvrsResp:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (unsigned long long)loadingState;
- (void)setLoadingState:(unsigned long long)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
