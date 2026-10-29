@interface WCPayGPOrderHistoryViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    BOOL _bIsLoadingMore; // +0x90
    BOOL _bIsDataLoadEnd; // +0x91
    id <WCPayGPOrderHistoryControllerDelegate> _delegate; // +0x98
    NSMutableArray * _orderHistory; // +0xa0
    NSString * _h5AARecordUrl; // +0xa8
    unsigned long long _curHistoryScene; // +0xb0
    MMTableView * _tableView; // +0xb8
    MMUILabel * _tipsLabel; // +0xc0
}
- (void)setDelegate:(id)arg1;
- (void)refreshViewControllerWithOrderHistoryListData:(id)arg1 bIsReloadFromTop:(BOOL)arg2 dataScene:(unsigned long long)arg3;
- (void)refreshViewControllerWhenOrderHistoryRespBack;
- (void)refreshViewControllerWhenOrderHistoryError;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupEmptyTipsView;
- (void)removeEmptyTipsView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (void)genTableFooterViewAfterLoadAllData;
- (void)orderHistoryVCCancel;
- (void)rightBarButtonClick;
- (void)h5RecordEnteranceBtnPress;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)delegate;
- (id)orderHistory;
- (void)setOrderHistory:(id)arg1;
- (id)h5AARecordUrl;
- (void)setH5AARecordUrl:(id)arg1;
- (unsigned long long)curHistoryScene;
- (void)setCurHistoryScene:(unsigned long long)arg1;
- (BOOL)bIsLoadingMore;
- (void)setBIsLoadingMore:(BOOL)arg1;
- (BOOL)bIsDataLoadEnd;
- (void)setBIsDataLoadEnd:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

