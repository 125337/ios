@interface WCPaySelectGenderItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UILabel * _label; // +0x50
    MMPanelView * _panelView; // +0x58
    UIPickerView * _pickerView; // +0x60
    unsigned long long _currentGender; // +0x68
    double _contentMaxWidth; // +0x70
}
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
- (void)updateContentMaxWidth:(double)arg1;
- (unsigned long long)currentSelectGender;
- (void)updateCurrentGender:(unsigned long long)arg1;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)currentAccessibilityDesc;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (unsigned long long)currentGender;
- (void)setCurrentGender:(unsigned long long)arg1;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

