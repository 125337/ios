@interface WCPayGetProfessionItemV2 : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSArray * _professions; // +0x50
    UILabel * _label; // +0x58
    MMPanelView * _panelView; // +0x60
    UIPickerView * _pickerView; // +0x68
    long long _count; // +0x70
    NSString * _title; // +0x78
    double _contentMaxWidth; // +0x80
    WCPayProfession * _profession; // +0x88
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
- (void)updateProfession:(id)arg1;
- (void)updateContentMaxWidth:(double)arg1;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)UIPickerViewDidFinish;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)currentAccessibilityDesc;
- (id)professions;
- (void)setProfessions:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (id)profession;
- (void)setProfession:(id)arg1;
- (void).cxx_destruct;
@end

