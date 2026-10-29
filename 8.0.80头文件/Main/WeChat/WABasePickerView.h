@interface WABasePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    BOOL _supportDark; // +0x8
    BOOL _didAdjustSelectedRowToSeparatorStyle; // +0x9
    BOOL _bOnlyShowPickerAndButton; // +0xa
    WABasePickerViewModel * _model; // +0x10
    id <WAPickerViewDelegate> _delegate; // +0x18
    UIPickerView * _customPicker; // +0x20
    UIView * _contentView; // +0x28
    FixTitleColorButton * _cancelButton; // +0x30
    FixTitleColorButton * _confirmButton; // +0x38
}
- (void)initPickerWithViewModel:(id)arg1 supportDark:(BOOL)arg2;
- (void)setupUI;
- (id)customPickerView;
- (void)setViewModel:(id)arg1;
- (void)updatePickerViewSelectedRow;
- (void)updatePickerView:(id)arg1 current:(long long)arg2 column:(long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showPickerWithCompletion:(id /* block */)arg1;
- (void)touchMask:(id)arg1;
- (void)hidePickerWithCompletion:(id /* block */)arg1;
- (void)onConfirm;
- (void)onCancel;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (unsigned long long)itemStrLengthForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)contentHeight;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bOnlyShowPickerAndButton;
- (void)setBOnlyShowPickerAndButton:(BOOL)arg1;
- (id)customPicker;
- (void)setCustomPicker:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
