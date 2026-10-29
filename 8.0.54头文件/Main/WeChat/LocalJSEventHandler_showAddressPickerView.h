@interface LocalJSEventHandler_showAddressPickerView : LocalJSEventHandler_BaseEvent <WCAddressHalfScreenDelegate>
{
    int _pickerMode; // +0x8
    unsigned int _state; // +0xc
    WCAddressHalfScreenPickerView * _pickerView; // +0x10
    NSArray * _addressItems; // +0x18
    NSArray * _current; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)initAddressItems;
- (int)parseModeType:(id)arg1;
- (void)configAddressPicker;
- (void)initPickerView;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)chooseStageAtComponent:(int)arg1 withProvince:(id)arg2 andCity:(id)arg3 andDistrict:(id)arg4 andStreet:(id)arg5;
- (void)multiPickerWillDisappear;
- (unsigned long long)eventAuthScene;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)addressItems;
- (void)setAddressItems:(id)arg1;
- (id)current;
- (void)setCurrent:(id)arg1;
- (int)pickerMode;
- (void)setPickerMode:(int)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (void).cxx_destruct;
@end

