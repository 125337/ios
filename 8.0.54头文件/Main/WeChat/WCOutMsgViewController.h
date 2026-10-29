@interface WCOutMsgViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, MMRefreshTableFooterDelegate>
{
    BOOL _bHasMoreItems; // +0x68
    MMTableView * _tableView; // +0x70
    WCTimeLineFooterView * _footerView; // +0x78
    NSMutableArray * _arrMsgInMemory; // +0x80
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initTableFooterView;
- (void)initTableView;
- (void)addMsgWithArray:(id)arg1 MoreData:(BOOL)arg2;
- (void)getData;
- (void)getMoreData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)arrMsgInMemory;
- (void)setArrMsgInMemory:(id)arg1;
- (BOOL)bHasMoreItems;
- (void)setBHasMoreItems:(BOOL)arg1;
- (void).cxx_destruct;
@end

