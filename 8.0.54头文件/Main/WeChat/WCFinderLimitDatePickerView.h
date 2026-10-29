@interface WCFinderLimitDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>
{
    NSDate * _minDate; // +0x8
    NSDate * _maxDate; // +0x10
    NSDate * _selectDate; // +0x18
    long long _componentsNumber; // +0x20
    NSDateComponents * _minimumComponents; // +0x28
    NSDateComponents * _maximumComponents; // +0x30
    NSDateComponents * _currentComponents; // +0x38
    NSCalendar * _calendar; // +0x40
    NSDateFormatter * _dateFormatter; // +0x48
    NSArray * _yearList; // +0x50
    NSArray * _monthList; // +0x58
    NSArray * _dayList; // +0x60
    NSDate * _currentDate; // +0x68
    NSString * _yearString; // +0x70
    NSString * _monthString; // +0x78
    NSString * _dayString; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)didAddSubview:(id)arg1;
- (id)currentDate;
- (id)currentComponents;
- (id)dateFormatter;
- (id)calendar;
- (id)minimumComponents;
- (id)maximumComponents;
- (id)yearList;
- (id)monthList;
- (long long)daysWithMonthInThisYear:(long long)arg1 withMonth:(long long)arg2;
- (long long)monthsInThisYear:(long long)arg1;
- (void)showDefaultWithCurr;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)selectedDate;
- (id)minDate;
- (void)setMinDate:(id)arg1;
- (id)maxDate;
- (void)setMaxDate:(id)arg1;
- (id)selectDate;
- (void)setSelectDate:(id)arg1;
- (long long)componentsNumber;
- (void)setComponentsNumber:(long long)arg1;
- (void)setMinimumComponents:(id)arg1;
- (void)setMaximumComponents:(id)arg1;
- (void)setCurrentComponents:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setYearList:(id)arg1;
- (void)setMonthList:(id)arg1;
- (id)dayList;
- (void)setDayList:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (id)yearString;
- (void)setYearString:(id)arg1;
- (id)monthString;
- (void)setMonthString:(id)arg1;
- (id)dayString;
- (void)setDayString:(id)arg1;
- (void).cxx_destruct;
@end

