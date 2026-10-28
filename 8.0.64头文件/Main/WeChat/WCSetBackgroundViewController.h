@interface WCSetBackgroundViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCImageViewDelegate>
{
    MMTableView * m_tableView; // +0x70
    WCBGStorage * m_backgroundData; // +0x78
    NSMutableDictionary * m_cache; // +0x80
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onBGStorageUpdated;
- (id)idForIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickWCImage:(id)arg1;
- (void).cxx_destruct;
@end
