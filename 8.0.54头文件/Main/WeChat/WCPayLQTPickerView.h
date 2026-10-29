@interface WCPayLQTPickerView : WCPayNavigationView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <WCPayLQTPickerViewDelegate> _m_delegate; // +0x8
    UIPickerView * _pickerView; // +0x10
    long long _startDate; // +0x18
    long long _endDate; // +0x20
    long long _nowDate; // +0x28
    UIButton * _button; // +0x30
}
- (void)setStartDate:(long long)arg1 endDate:(long long)arg2 nowDate:(long long)arg3;
- (void)layoutSubviews;
- (void)updateView;
- (void)updatePickerView;
- (void)updateButton;
- (id)cancelButtonViewWithPushDirection:(unsigned long long)arg1;
- (void)onTapClose;
- (void)onTapButton;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)getValue;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (long long)startDate;
- (void)setStartDate:(long long)arg1;
- (long long)endDate;
- (void)setEndDate:(long long)arg1;
- (long long)nowDate;
- (void)setNowDate:(long long)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end

