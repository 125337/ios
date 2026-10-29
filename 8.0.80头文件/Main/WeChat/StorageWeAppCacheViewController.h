@interface StorageWeAppCacheViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _bSelectAll; // +0x70
    NSMutableArray * _selectedDataArray; // +0x78
    NSMutableArray * _weappDataArray; // +0x80
    MMTableView * _tableView; // +0x88
    id /* block */ _afterSelectCompletion; // +0x90
}
- (void)viewWillDisappear:(BOOL)arg1;
- (id)initWithClassification:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)initTableView;
- (CGRect)getTableViewFrame;
- (void)onReturn;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)selectedDataArray;
- (void)setSelectedDataArray:(id)arg1;
- (BOOL)bSelectAll;
- (void)setBSelectAll:(BOOL)arg1;
- (id)weappDataArray;
- (void)setWeappDataArray:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id /* block */)afterSelectCompletion;
- (void)setAfterSelectCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
