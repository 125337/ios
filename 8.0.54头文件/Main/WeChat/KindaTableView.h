@interface KindaTableView : KindaView <WCFinderRefreshTableFooterViewDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMKTableView>
{
    BOOL _enabledFooterViewRefresh; // +0xa8
    KindaUITableView * _tableView; // +0xb0
    NSMutableArray * _cells; // +0xb8
    MMRefreshTableFooterView * _footerView; // +0xc0
    UILabel * _loadingLabel; // +0xc8
    MMUIActivityIndicatorView * _indicatorView; // +0xd0
    unsigned long long _loadingState; // +0xd8
    MMVoidCallback * _footerRefreshCallback; // +0xe0
    MMVoidCallback * _onScrollCallBack; // +0xe8
    MMVoidCallback * _onScrollBeginBallback; // +0xf0
}
- (id)init;
- (void)makeCell:(id)arg1 cellManager:(id)arg2;
- (void)updateFooterView;
- (void)updateLoadingLabel;
- (void)updateIndicator;
- (void)setFooterViewNormalState;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setOnScrollCallBackImpl:(id)arg1;
- (void)setOnBeginScrollCallbackImpl:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)getView;
- (void)setCells:(id)arg1;
- (void)setEnableFooterRefreshView:(BOOL)arg1;
- (void)setFooterRefreshViewLoadMoreCallbackImpl:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)cells;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (unsigned long long)loadingState;
- (void)setLoadingState:(unsigned long long)arg1;
- (BOOL)enabledFooterViewRefresh;
- (void)setEnabledFooterViewRefresh:(BOOL)arg1;
- (id)footerRefreshCallback;
- (void)setFooterRefreshCallback:(id)arg1;
- (id)onScrollCallBack;
- (void)setOnScrollCallBack:(id)arg1;
- (id)onScrollBeginBallback;
- (void)setOnScrollBeginBallback:(id)arg1;
- (void).cxx_destruct;
@end

