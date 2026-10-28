@interface MMFinderLivePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    BOOL _isDismissed; // +0x8
    id <MMFinderLivePickerViewDelegate> _delegate; // +0x10
    MMFinderLivePickerViewConfig * _config; // +0x18
    UIView * _backgroundView; // +0x20
    UIView * _contentView; // +0x28
    NSArray * _rows; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUIButton * _cancelButton; // +0x40
    MMUIButton * _confirmButton; // +0x48
    UIPickerView * _pickerView; // +0x50
    long long _selectedRow; // +0x58
    UIView * _lineView; // +0x60
}
- (id)initWithTitleRows:(id)arg1 config:(id)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)selectRow:(unsigned long long)arg1;
- (void)selectRowWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)onBGTap:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (void)initUI;
- (id)genNavButton;
- (id)getBGColor;
- (id)getContentBGColor;
- (id)getTitleColor;
- (id)getCancelColor;
- (id)getConfirmColor;
- (id)getCancelTitle;
- (id)getConfirmTitle;
- (id)getComponentColor;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)rows;
- (void)setRows:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (long long)selectedRow;
- (void)setSelectedRow:(long long)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end
