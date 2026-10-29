@interface KindaPickerView : KindaView <UIPickerViewDataSource, UIPickerViewDelegate, MMKPickerView>
{
    UIPickerView * _pickerView; // +0xa8
    MMVoidListCallback * _callback; // +0xb0
    NSArray * _normalData; // +0xb8
    NSArray * _syncDataFirstColumn; // +0xc0
    NSArray * _syncDataSecondColumn; // +0xc8
    unsigned long long _seletedRowInFirstColumn; // +0xd0
}
- (id)getView;
- (id)pickerView;
- (void)setNormalData:(id)arg1;
- (void)setSyncData:(id)arg1 secondColumn:(id)arg2;
- (void)setCallbackImpl:(id)arg1;
- (void)setSelectedRows:(id)arg1;
- (void)setSelectedRow:(int)arg1 column:(int)arg2;
- (id)getCurrentSelectedRows;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setPickerView:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)normalData;
- (id)syncDataFirstColumn;
- (void)setSyncDataFirstColumn:(id)arg1;
- (id)syncDataSecondColumn;
- (void)setSyncDataSecondColumn:(id)arg1;
- (unsigned long long)seletedRowInFirstColumn;
- (void)setSeletedRowInFirstColumn:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

