@interface WCPayQuestionSelectItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel * m_textLabel; // +0x50
    WCBizPickerView * m_pickerView; // +0x58
    NSString * m_status; // +0x60
}
- (void)initView:(CGRect)arg1;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)setText:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void).cxx_destruct;
@end

