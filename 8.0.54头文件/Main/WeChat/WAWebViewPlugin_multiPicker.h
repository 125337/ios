@interface WAWebViewPlugin_multiPicker : WAWebViewPluginBase <WAPickerViewDelegate, WADateTimePickerDelegate>
{
    WABasePickerView * _pickerView; // +0x8
    id <WAWebViewPluginPickerDelegate> _resultDelegate; // +0x10
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)showMultiPickerView:(id)arg1 current:(id)arg2 headerText:(id)arg3;
- (void)updateMultiPickerView:(id)arg1 current:(long long)arg2 column:(long long)arg3;
- (void)showSinglePickerView:(id)arg1 current:(unsigned long long)arg2 headerText:(id)arg3;
- (void)showDateTimePickerView:(long long)arg1 field:(id)arg2 current:(id)arg3 start:(id)arg4 end:(id)arg5 headerText:(id)arg6;
- (void)pickerWillShow;
- (void)onCancel;
- (void)onConfirm:(id)arg1 values:(id)arg2;
- (void)onSelect:(long long)arg1 row:(long long)arg2;
- (void)onDateTimeConfirm:(id)arg1;
- (double)getContentMaxHeight;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (void).cxx_destruct;
@end

