@interface MMFinderLiveCommentSensitiveTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    id /* block */ _onSensitiveDataItemAddCallback; // +0x8
    id /* block */ _onSensitiveDataItemDeleteCallback; // +0x10
    MMFinderLiveSensitiveTableView * _tableView; // +0x18
    NSMutableArray * _sensitiveSrcDataItems; // +0x20
}
- (id)initWithTableView:(id)arg1;
- (void)updateSensitiveDataItems:(id)arg1;
- (id)currSensitiveDataItems;
- (void)deleteSensitiveDataItem:(id)arg1;
- (id)getVisibleEditTableViewCell;
- (void)addSensitiveWord:(id)arg1;
- (void)deleteSensitiveDataItemAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (unsigned long long)checkEnableAddSensitiveDataItem:(id)arg1;
- (id)sensitiveSrcDataItems;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)handleTableViewPanGesture:(id)arg1;
- (id /* block */)onSensitiveDataItemAddCallback;
- (void)setOnSensitiveDataItemAddCallback:(id /* block */)arg1;
- (id /* block */)onSensitiveDataItemDeleteCallback;
- (void)setOnSensitiveDataItemDeleteCallback:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void)setSensitiveSrcDataItems:(id)arg1;
- (void).cxx_destruct;
@end
