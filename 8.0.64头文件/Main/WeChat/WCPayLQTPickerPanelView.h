@interface WCPayLQTPickerPanelView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <WCPayLQTPickerPanelViewDelegate> _delegate; // +0x8
    NSArray * _timeList; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    TimeSpan * _selectedTime; // +0x28
    UIView * _backgroundView; // +0x30
    UIView * _contentView; // +0x38
    UIPickerView * _timePicker; // +0x40
}
- (id)initPickerPanelViewWithDelegate:(id)arg1 title:(id)arg2 subTitle:(id)arg3 timeList:(id)arg4 selectedTime:(id)arg5;
- (void)setupContentView;
- (id)backgroundView;
- (id)contentView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)confirmBtnClick;
- (void)refreshSelectedTime:(id)arg1;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (id)timeStringFromTimeSpan:(unsigned int)arg1;
- (long long)calcSelectedTimeIndex;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timeList;
- (void)setTimeList:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)selectedTime;
- (void)setSelectedTime:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)timePicker;
- (void)setTimePicker:(id)arg1;
- (void).cxx_destruct;
@end
