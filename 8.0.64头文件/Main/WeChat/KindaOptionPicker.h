@interface KindaOptionPicker : NSObject <MMKOptionPicker, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    WCBizPickerView * m_pickerView; // +0x8
    NSArray * m_options; // +0x10
}
- (void)showImpl:(id)arg1 optionSelectCallback:(id)arg2;
- (void)hide;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void).cxx_destruct;
@end
