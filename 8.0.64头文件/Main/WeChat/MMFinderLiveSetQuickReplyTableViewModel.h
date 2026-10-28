@interface MMFinderLiveSetQuickReplyTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView; // +0x8
    id <MMFinderLiveSetQuickReplyTableDataDelegate> _dataDelegate; // +0x10
    NSMutableArray * _dataArray; // +0x18
}
- (id)initWithTableView:(id)arg1;
- (void)updateData:(id)arg1;
- (void)makeFirstResponder:(long long)arg1;
- (id)getCurrrentDataArray;
- (double)getTableHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)addButtonClick;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)quickReplyTableCleanButtonClick:(id)arg1 dataArray:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)dataArray;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void).cxx_destruct;
@end
