@interface WCPayLQTSelectDateItem : WCBaseTextFieldItem <WCPayLQTPickerViewDelegate>
{
    id <WCPayLQTSelectDateItemDelegate> _pickerDelegate; // +0x50
    WCPayNavigationView * _navigationView; // +0x58
    WCPayLQTPickerView * _picker; // +0x60
    UILabel * _label; // +0x68
    MMUIViewController * _currentVc; // +0x70
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)onTapLabel;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setStartDate:(long long)arg1 endDate:(long long)arg2 nowDate:(long long)arg3;
- (void)becomeFirstResponder;
- (void)hide;
- (void)onSpaceTap;
- (void)onWCPayLQTPickerViewCancel;
- (void)onWCPayLQTPickerViewConfirm:(long long)arg1;
- (double)onWCPayLQTPickerViewSafeBottom;
- (void)setCurrentViewController:(id)arg1;
- (id)pickerDelegate;
- (void)setPickerDelegate:(id)arg1;
- (id)navigationView;
- (void)setNavigationView:(id)arg1;
- (id)picker;
- (void)setPicker:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)currentVc;
- (void)setCurrentVc:(id)arg1;
- (void).cxx_destruct;
@end
