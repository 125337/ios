@interface BraceletWorkoutCreateTimePickerSheetView : MMPageSheetBaseView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSString * _pickerTitle; // +0x8
    NSArray * _options; // +0x10
    long long _initialRow; // +0x18
    id /* block */ _onConfirm; // +0x20
    UIPickerView * _pickerView; // +0x28
    UIView * _ownContainerView; // +0x30
    UILabel * _ownTitleLabel; // +0x38
}
- (id)initWithTitle:(id)arg1 options:(id)arg2 initialRow:(long long)arg3 onConfirm:(id /* block */)arg4;
- (void)p_initConfig;
- (void)p_initView;
- (void)p_onCancel;
- (void)p_onDone;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerTitle;
- (void)setPickerTitle:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (long long)initialRow;
- (void)setInitialRow:(long long)arg1;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)ownContainerView;
- (void)setOwnContainerView:(id)arg1;
- (id)ownTitleLabel;
- (void)setOwnTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
