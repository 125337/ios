@interface WSWebViewPlugin_ShowMultiPicker : WSWebViewPluginBase <UIPickerViewDataSource, UIPickerViewDelegate, MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate>
{
    id <MMWebViewPluginShowMultiPickerDelegate> _resultDelegate; // +0x8
    NSMutableArray * _arrPickerData; // +0x10
    UIPickerView * _pickerView; // +0x18
    MMPageSheetAdapter * _pageSheetAdapter; // +0x20
    unsigned long long _pickerMode; // +0x28
}
- (void)showMultiPickerWithDataArray:(id)arg1 selectedIndexArray:(id)arg2 andHeaderText:(id)arg3 inMode:(unsigned long long)arg4;
- (id)updateMultiPickerViewOfColumn:(unsigned long long)arg1 newValueArray:(id)arg2 andCurrent:(unsigned long long)arg3;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (void)showPickerEndAndClearData;
- (void)showPickerViewCanceldWithReaseon:(id)arg1;
- (void)showPickerViewSuccessAndCallback;
- (BOOL)checkParamsValid:(id)arg1 withErrorMsg:(id *)arg2;
- (long long)searchMembersInArray:(id)arg1 isNotKindOfClass:(Class)arg2;
- (long long)searchMembersInArrayWhichIsInvalid:(id)arg1;
- (BOOL)isValueToShowInPickerValid:(id)arg1;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)arrPickerData;
- (void)setArrPickerData:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (unsigned long long)pickerMode;
- (void)setPickerMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

