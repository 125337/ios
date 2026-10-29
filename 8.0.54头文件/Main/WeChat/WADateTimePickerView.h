@interface WADateTimePickerView : WABasePickerView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIDatePicker * _picker; // +0x8
    UIPickerView * _customPicker; // +0x10
    NSString * _format; // +0x18
    long long _pickerMode; // +0x20
    int _customMode; // +0x28
    int _curYear; // +0x2c
    int _curMonth; // +0x30
    int _minYear; // +0x34
    int _maxYear; // +0x38
    int _minMonth; // +0x3c
    int _maxMonth; // +0x40
    int _minCurrentMonth; // +0x44
    int _maxCurrentMonth; // +0x48
    BOOL _didAdjustSelectedRowToSeparatorStyle; // +0x4c
}
- (void)initPicker:(long long)arg1 field:(id)arg2 supportDark:(BOOL)arg3;
- (id)customPickerView;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (void)resetMonth;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setValue:(id)arg1;
- (void)setCurrent:(int)arg1 month:(int)arg2;
- (void)setRangeFrom:(id)arg1 toEnd:(id)arg2;
- (id)getValue;
- (void)onConfirm;
- (void)onCancel;
- (void)adjustPickerSelectedRowToSeparatorStyle:(id)arg1;
- (void).cxx_destruct;
@end

