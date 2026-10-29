@interface WCPayValidDateItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView * m_pickerView; // +0x50
    int m_iStartYear; // +0x58
    NSString * m_value; // +0x60
    UIButton * m_tipBtn; // +0x68
    MMUIViewController * m_viewController; // +0x70
    NSString * m_nsTipTitle; // +0x78
    NSString * m_nsTipContent; // +0x80
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (id)getValue;
- (void)initView:(CGRect)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)setViewController:(id)arg1;
- (void)showValidTip;
- (void)setTipBtnShowed:(BOOL)arg1;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void).cxx_destruct;
@end

