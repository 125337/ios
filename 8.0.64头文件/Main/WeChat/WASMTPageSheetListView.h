@interface WASMTPageSheetListView : WAAuthPageSheetBaseView
{
    MMTableView * _tableView; // +0x8
    ZZFLEXAngel * _angel; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (void).cxx_destruct;
@end
