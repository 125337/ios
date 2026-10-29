@interface WADebugSkylineView : UITableView <UITableViewDataSource>
{
    WADebugSkylineOptions * _options; // +0x8
    NSMutableDictionary * _oldOptions; // +0x10
}
- (id)initWithAppId:(id)arg1;
- (void)configTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)optionChanged;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)oldOptions;
- (void)setOldOptions:(id)arg1;
- (void).cxx_destruct;
@end

