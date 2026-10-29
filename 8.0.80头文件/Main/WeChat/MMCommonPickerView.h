@interface MMCommonPickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <MMCommonPickerDelegate> _pickDelegate; // +0x8
    UIColor * _textColor; // +0x10
    NSMutableArray * _dataItems; // +0x18
    double _pickItemTextLineHeight; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initDataSrc;
- (void)didAddSubview:(id)arg1;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 inComponent:(long long)arg2;
- (void)setSelected:(id)arg1;
- (void)setSelected:(id)arg1 inComponent:(long long)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3;
- (BOOL)isScrolling;
- (BOOL)isScrolling:(id)arg1;
- (unsigned long long)componentCount;
- (id)componentListAtIndex:(unsigned long long)arg1;
- (id)pickerItemForComponent:(long long)arg1 AndRow:(long long)arg2;
- (id)selectedData;
- (id)selectedRows;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)updateLabel:(id)arg1 ForComponent:(long long)arg2 AndRow:(long long)arg3;
- (void)updateLabelOnComponentCountOne:(id)arg1 ForComponent:(long long)arg2;
- (void)updateLabelOnComponentCountTwo:(id)arg1 ForComponent:(long long)arg2;
- (void)updateLabelOnComponentCountOverThree:(id)arg1 ForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (id)pickDelegate;
- (void)setPickDelegate:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (double)pickItemTextLineHeight;
- (void)setPickItemTextLineHeight:(double)arg1;
- (void).cxx_destruct;
@end
