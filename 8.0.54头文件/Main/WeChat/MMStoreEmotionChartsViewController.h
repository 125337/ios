@interface MMStoreEmotionChartsViewController : MMUIViewController <EmoticonStoreMgrExt, UITableViewDataSource, UITableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate>
{
    MMTableView * _chartsTableView; // +0x68
    NSMutableArray * _chartsItemArray; // +0x70
    BOOL _isLoadedFromCache; // +0x78
    unsigned long long _sessionId; // +0x80
    EmoticonStoreFootView * _tailView; // +0x88
}
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupData;
- (void)setupViews;
- (void)setupTableView;
- (void)initTableFooterView;
- (void)reloadData;
- (void)reportEmoticonStoreExposure;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)OnStoreListChanged:(id)arg1 withRet:(unsigned long long)arg2 withReqType:(unsigned int)arg3 data:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnEmotionChartsCellTapButton:(id)arg1;
- (void).cxx_destruct;
@end

