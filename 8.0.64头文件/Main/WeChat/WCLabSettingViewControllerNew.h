@interface WCLabSettingViewControllerNew : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCLabSettingFooterViewDelegate>
{
    NSArray * _onlineLabsItems; // +0x70
    NSArray * _offlineLabsItems; // +0x78
    UITableView * _tableView; // +0x80
}
- (id)initWithSortedOnlineLabsItems:(id)arg1 OfflineLabItems:(id)arg2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickProtoButton:(id)arg1;
- (id)itemAtSection:(long long)arg1 row:(long long)arg2;
- (void)initTableView;
- (void).cxx_destruct;
@end
