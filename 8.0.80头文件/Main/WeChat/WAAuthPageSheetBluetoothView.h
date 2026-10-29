@interface WAAuthPageSheetBluetoothView : WAAuthPageSheetBaseView
{
    UIButton * _allowDuringUsageBtn; // +0x8
    UIButton * _alwaysAllowBtn; // +0x10
    UIButton * _rejectBtn; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)allowDuringUsageBtn;
- (void)setAllowDuringUsageBtn:(id)arg1;
- (id)alwaysAllowBtn;
- (void)setAlwaysAllowBtn:(id)arg1;
- (id)rejectBtn;
- (void)setRejectBtn:(id)arg1;
- (void).cxx_destruct;
@end
