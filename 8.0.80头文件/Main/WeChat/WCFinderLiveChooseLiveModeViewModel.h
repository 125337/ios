@interface WCFinderLiveChooseLiveModeViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray * _dataArray; // +0x8
    id <WCFinderLiveChooseLiveModeViewModelDelegate> _delegate; // +0x10
}
- (void)appendClarityMethodData:(id)arg1;
- (void)appendData:(id)arg1;
- (void)onRedDotExposed;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)dataArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
