@interface MJDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>
{
    id /* block */ _dateDidChageHandler; // +0x8
    MJDatePickerViewModel * _viewModel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (void)reloadWithDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)selectedDate;
- (id /* block */)dateDidChageHandler;
- (void)setDateDidChageHandler:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

