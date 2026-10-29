@interface WCPaySelectCountItemV2 : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView * m_pickerView; // +0x50
    long long m_iStartCount; // +0x58
    long long m_iEndCount; // +0x60
    NSString * m_value; // +0x68
    UILabel * _label; // +0x70
    MMPanelView * _panelView; // +0x78
    long long _m_count; // +0x80
    NSString * _title; // +0x88
    double _contentMaxWidth; // +0x90
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
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
- (void)setStartCount:(long long)arg1 endCount:(long long)arg2;
- (void)setDefaultCount:(long long)arg1;
- (long long)getCount;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (long long)m_count;
- (void)setM_count:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
