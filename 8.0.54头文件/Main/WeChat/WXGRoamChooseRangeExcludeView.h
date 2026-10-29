@interface WXGRoamChooseRangeExcludeView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt>
{
    long long _enterScene; // +0x8
    UITableView * _sheetView; // +0x10
}
- (id)init;
- (void)pageSheetWillAppear;
- (void)onComplete;
- (void)updateNav;
- (void)setupView;
- (id)getHeaderViewWithWidth:(double)arg1 isTypeHeader:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(BOOL)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end

