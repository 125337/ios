@interface BraceletHistoryV2YearMonthPickerSheetView : MMPageSheetBaseView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSArray * _yearMonthList; // +0x8
    long long _initialIndex; // +0x10
    id /* block */ _onConfirm; // +0x18
    UIPickerView * _pickerView; // +0x20
    UIView * _ownContainerView; // +0x28
}
- (id)initWithYearMonthList:(id)arg1 initialIndex:(long long)arg2 onConfirm:(id /* block */)arg3;
- (void)p_initConfig;
- (void)p_initView;
- (void)p_onCancel;
- (void)p_onDone;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)yearMonthList;
- (void)setYearMonthList:(id)arg1;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg1;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)ownContainerView;
- (void)setOwnContainerView:(id)arg1;
- (void).cxx_destruct;
@end
