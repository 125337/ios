@interface PurchasedEmoticonViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, EmoticonBoughtListMgrExt, MMRefreshTableFooterDelegate, WCActionSheetDelegate>
{
    NSMutableArray * m_arrTableData; // +0x70
    MMTableView * m_tableView; // +0x78
    EmoticonStoreFootView * m_tailView; // +0x80
    double labelMaxWidth; // +0x88
    ModEmotionRecordCgi * _modRecordCgi; // +0x90
    UIView * _contentView; // +0x98
    UIView * _stateView; // +0xa0
}
- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)showStateView:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)onClickNavRightButton:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkIAPRet:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)onSwipeToDelPurchaseRecordAtIndex:(unsigned long long)arg1;
- (id)modRecordCgi;
- (void)OnRestoreEmoticonItemSuccess;
- (void)OnRestoreEmoticonItemFailed;
- (void)OnBoughtListChanged:(id)arg1 withRet:(unsigned long long)arg2;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)m_arrTableData;
- (void)setM_arrTableData:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_tailView;
- (void)setM_tailView:(id)arg1;
- (double)labelMaxWidth;
- (void)setLabelMaxWidth:(double)arg1;
- (void)setModRecordCgi:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)stateView;
- (void)setStateView:(id)arg1;
- (void).cxx_destruct;
@end
