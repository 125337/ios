@interface MMFinderLiveGenericPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <MMFinderLiveGenericPickerViewDelegate> _delegate; // +0x8
    id _userInfo; // +0x10
    UIView * _bgView; // +0x18
    UIView * _pickerContainerView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIView * _lineView; // +0x30
    FixTitleColorButton * _cancelButton; // +0x38
    FixTitleColorButton * _confirmButton; // +0x40
    UIPickerView * _pickerView; // +0x48
    MMFinderLiveGenericPickerViewConfig * _config; // +0x50
    long long _selectedRow; // +0x58
}
- (id)initWithConfig:(id)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)onBGTap:(id)arg1;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)pickerContainerView;
- (void)setPickerContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (long long)selectedRow;
- (void)setSelectedRow:(long long)arg1;
- (void).cxx_destruct;
@end

