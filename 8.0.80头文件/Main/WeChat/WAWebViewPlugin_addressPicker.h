@interface WAWebViewPlugin_addressPicker : WAWebViewPluginBase <WCAddressHalfScreenDelegate>
{
    int _pickerMode; // +0x8
    id <IWAWebViewPluginDelegate> _resultDelegate; // +0x10
    WCAddressHalfScreenPickerView * _pickerView; // +0x18
    NSArray * _addressItems; // +0x20
    NSArray * _current; // +0x28
    NSDictionary * _result; // +0x30
    NSString * _errString; // +0x38
}
- (void)initPickerView;
- (void)initAddressItems;
- (int)parseModeType:(id)arg1;
- (void)showAddressPicker:(id)arg1 mode:(id)arg2;
- (void)configAddressPicker;
- (void)multiPickerWillDisappear;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)chooseStageAtComponent:(int)arg1 withProvince:(id)arg2 andCity:(id)arg3 andDistrict:(id)arg4 andStreet:(id)arg5;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)addressItems;
- (void)setAddressItems:(id)arg1;
- (id)current;
- (void)setCurrent:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)errString;
- (void)setErrString:(id)arg1;
- (int)pickerMode;
- (void)setPickerMode:(int)arg1;
- (void).cxx_destruct;
@end
