@interface KindaValidDatePickerView : KindaView <MMKValidDatePickerView, UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate>
{
    UIPickerView * m_pickerView; // +0xa8
    WCUITextField * m_textField; // +0xb0
    NSString * validDate; // +0xb8
    MMKValidDatePickerViewOnSelectCallback * m_callback; // +0xc0
    int m_iStartYear; // +0xc8
    UIView * _m_textFieldInputView; // +0xd0
    UIView * _m_contentView; // +0xd8
    UIButton * _m_cancelButton; // +0xe0
    UIButton * _m_confirmButton; // +0xe8
    UIView * _m_backgroundView; // +0xf0
}
- (void)dealloc;
- (id)init;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)setFocus:(BOOL)arg1;
- (void)accessibilityFocusPickerView;
- (BOOL)getFocus;
- (id)getView;
- (void)setOnSelectCallback:(id)arg1;
- (id)getText;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (id)m_textFieldInputView;
- (void)setM_textFieldInputView:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_cancelButton;
- (void)setM_cancelButton:(id)arg1;
- (id)m_confirmButton;
- (void)setM_confirmButton:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (void).cxx_destruct;
@end

