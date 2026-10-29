@interface MMFinderLiveCommentSensitiveSearchTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveCommentSensitiveSearchTableDelegate> _delegate; // +0x8
    MMTableView * _tableView; // +0x10
    NSMutableArray * _sensitiveResultDataItems; // +0x18
}
- (id)initWithTableView:(id)arg1;
- (void)updateSensitiveDataItems:(id)arg1;
- (void)deleteSensitiveDataItemAtIndex:(unsigned long long)arg1;
- (id)sensitiveResultDataItems;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void)setSensitiveResultDataItems:(id)arg1;
- (void).cxx_destruct;
@end

