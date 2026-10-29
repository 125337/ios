@interface WCAppAuthDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCAppAuthDetailFooterViewDelegate, WCAppAuthLogicDelegate, WCAppAuthLogicExt>
{
    unsigned int _scene; // +0x70
    unsigned int _fromIndex; // +0x74
    MMTableView * _tableView; // +0x78
    WCAppAuthDetailHeaderView * _tableHeaderView; // +0x80
    WCAppAuthDetailFooterView * _tableFooterView; // +0x88
    WCAppAuthLogicController * _logicController; // +0x90
    WCAppAuthDataItem * _appDataItem; // +0x98
    NSArray * _arrScopeInfoItem; // +0xa0
}
- (id)initWithAppData:(id)arg1 authLogic:(id)arg2 fromScene:(unsigned int)arg3 index:(unsigned int)arg4;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)layoutTableHeaderView;
- (void)layoutTableFooterView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onDetailFooterCancelBtnClick;
- (void)logicWillStartDeletionApp:(id)arg1;
- (void)logicDidFinishDeletionApp:(id)arg1 index:(unsigned int)arg2;
- (void)logicDeletionAppFail:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (void)setTableFooterView:(id)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)appDataItem;
- (void)setAppDataItem:(id)arg1;
- (id)arrScopeInfoItem;
- (void)setArrScopeInfoItem:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)fromIndex;
- (void)setFromIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
