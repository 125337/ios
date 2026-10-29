@interface MMLivePausePickerView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMCommonPickerDelegate>
{
    id <MMLivePausePickerViewDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    MMCommonPickerView * _pickerView; // +0x18
    UIView * _pickerViewCustomizedIndicatorTopLine; // +0x20
    UIView * _pickerViewCustomizedIndicatorBottomLine; // +0x28
    NSNumber * _selectedDuration; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (id)pickerViewCustomizedIndicatorTopLine;
- (void)setPickerViewCustomizedIndicatorTopLine:(id)arg1;
- (id)pickerViewCustomizedIndicatorBottomLine;
- (void)setPickerViewCustomizedIndicatorBottomLine:(id)arg1;
- (id)selectedDuration;
- (void)setSelectedDuration:(id)arg1;
- (void).cxx_destruct;
@end

