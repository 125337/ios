@interface KindaCardTypePickerView : KindaView <MMKCardTypePickerView, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate, UITextFieldDelegate>
{
    WCBizPickerView * m_pickerView; // +0xa8
    WCUITextField * m_textField; // +0xb0
    NSArray * m_options; // +0xb8
    MMKCardTypePickerViewOnSelectCallback * m_callback; // +0xc0
    MMKViewOnClickCallback * m_onClickCallback; // +0xc8
}
- (id)init;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)getEnabled;
- (void)setTextSize:(float)arg1;
- (void)setHint:(id)arg1;
- (id)getView;
- (void)setOnClickCallback:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (void)select:(int)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void).cxx_destruct;
@end
