@interface WASMPageSheetListView : WAAuthPageSheetBaseView
{
    MMTableView * _tableView; // +0x8
    ZZFLEXAngel * _angel; // +0x10
    WeToast * _weakCurrentToast; // +0x18
    UIView * _bottomGradientView; // +0x20
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateBottomGradientLayer;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)weakCurrentToast;
- (void)setWeakCurrentToast:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (void).cxx_destruct;
@end
