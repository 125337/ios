@interface DataReportViewDebugInfoSheetView : MMPageSheetBaseViewController <UITableViewDataSource, UITableViewDelegate, MMPageSheetBottomViewDelegate>
{
    UIView * _debugView; // +0x68
    MMTableView * _tableView; // +0x70
    NSMutableArray * _debugViewParams; // +0x78
}
- (id)initWithDebugView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initDebugInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (long long)styleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)debugView;
- (void)setDebugView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)debugViewParams;
- (void)setDebugViewParams:(id)arg1;
- (void).cxx_destruct;
@end

