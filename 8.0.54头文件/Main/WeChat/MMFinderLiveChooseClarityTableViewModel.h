@interface MMFinderLiveChooseClarityTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray * _clarityMethodDataArray; // +0x8
    UITableView * _tableView; // +0x10
    id <MMFinderLiveChooseClarityTableDataDelegate> _dataDelegate; // +0x18
}
- (id)initWithTableView:(id)arg1;
- (void)appendClarityMethodData:(id)arg1;
- (double)getClarityTableHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)clarityMethodDataArray;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (void).cxx_destruct;
@end

