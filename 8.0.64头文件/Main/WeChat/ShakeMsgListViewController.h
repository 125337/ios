@interface ShakeMsgListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, WCActionSheetDelegate, ShakeMgrExt>
{
    MMTableView * _tableView; // +0x70
    WCTimeLineFooterView * _footerView; // +0x78
    UIView * _tableDefaultFooterView; // +0x80
    NSMutableArray * _arrMessage; // +0x88
    NSMutableDictionary * _dicCells; // +0x90
    NSMutableDictionary * _dicCellHeights; // +0x98
    int _scene; // +0xa0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onOperate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearList;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (void)addMessagesWithArray:(id)arg1;
- (void)updateRightBar;
- (void)loadMoreData;
- (void)initData;
- (void)updateTableFooterView:(BOOL)arg1;
- (void)initView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLoadMore;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)genNormalCellContentViewAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)showEdit:(unsigned long long)arg1 show:(BOOL)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)getNormalCellContentViewHeightAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onShakeMsgUnreadCountChanged;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
