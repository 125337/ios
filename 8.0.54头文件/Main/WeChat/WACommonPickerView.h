@interface WACommonPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    BOOL _didAdjustSelectedRowToSeparatorStyle; // +0x8
    id <WACustomPickerDelegate> _delegate; // +0x10
    long long _selected; // +0x18
    UIPickerView * _customPicker; // +0x20
    NSArray * _items; // +0x28
}
- (void)initWithItems:(id)arg1 supportDark:(BOOL)arg2;
- (void)setSelected:(long long)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)getValue;
- (long long)getItemNum;
- (void)onConfirm;
- (void)onCancel;
- (void)adjustPickerSelectedRowToSeparatorStyle:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selected;
- (id)customPicker;
- (void)setCustomPicker:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end

