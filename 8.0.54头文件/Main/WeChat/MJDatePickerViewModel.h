@interface MJDatePickerViewModel : NSObject
{
    NSDate * _date; // +0x8
    NSDictionary * _components; // +0x10
    NSDictionary * _dataSource; // +0x18
    NSMutableDictionary * _selectedDatas; // +0x20
    unsigned long long _calendarUnit; // +0x28
    NSCalendar * _calendar; // +0x30
}
+ (id)descriptionForCalendarUnit:(unsigned long long)arg1;
- (id)initWithDate:(id)arg1 calendarUnit:(unsigned long long)arg2;
- (void)setupData;
- (long long)daysInThisYear:(long long)arg1 withMonth:(long long)arg2;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)selectRow:(long long)arg1 inComponnet:(long long)arg2 reloadIfNeeded:(id /* block */)arg3;
- (id)selectedDate;
- (id)selectedIndexs;
- (id)calendar;
- (id)date;
- (void)setDate:(id)arg1;
- (id)components;
- (void)setComponents:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)selectedDatas;
- (void)setSelectedDatas:(id)arg1;
- (unsigned long long)calendarUnit;
- (void)setCalendarUnit:(unsigned long long)arg1;
- (void)setCalendar:(id)arg1;
- (void).cxx_destruct;
@end

