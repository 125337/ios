@interface _TtC6WeChat33WCPayLedgerDatePickerHalfPageView : MMPageSheetBaseView <UIPickerViewDelegate, UIPickerViewDataSource, MMPageSheetBottomViewDelegate>
{
     pickerView; // +0x8
     startDate; // +0x10
     endDate; // +0x28
     confirmAction; // +0x40
}
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)sizeToFit;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;
@end
