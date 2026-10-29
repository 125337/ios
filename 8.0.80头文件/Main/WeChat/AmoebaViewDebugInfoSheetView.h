@interface AmoebaViewDebugInfoSheetView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView * _tableView; // +0x8
    NSMutableArray * _debugViewParams; // +0x10
    UIView * _debugView; // +0x18
}
- (id)initView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initDebugInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)show;
- (void)hide;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)debugViewParams;
- (void)setDebugViewParams:(id)arg1;
- (id)debugView;
- (void)setDebugView:(id)arg1;
- (void).cxx_destruct;
@end
