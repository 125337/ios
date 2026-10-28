@interface WCPaySelectDateItemV2 : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView * m_pickerView; // +0x50
    long long m_iStartYear; // +0x58
    long long m_iEndYear; // +0x60
    NSString * m_value; // +0x68
    TenpaySecureCtrl * m_secureCtrlItem; // +0x70
    BOOL _canBeLongTerm; // +0x78
    UILabel * _label; // +0x80
    MMPanelView * _panelView; // +0x88
    long long _startMonth; // +0x90
    long long _startDay; // +0x98
    long long _endMonth; // +0xa0
    long long _endDay; // +0xa8
    NSString * _title; // +0xb0
    double _contentMaxWidth; // +0xb8
    WCPaySelectDateItemData * _currentSelectedData; // +0xc0
}
+ (long long)yearOfDate:(id)arg1;
+ (long long)monthOfDate:(id)arg1;
+ (long long)dayOfDate:(id)arg1;
+ (id)dateFromData:(id)arg1;
+ (id)dataFromDate:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)updateTips:(id)arg1;
- (id)getValue;
- (void)updateContentMaxWidth:(double)arg1;
- (void)setStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)initView:(CGRect)arg1;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (long long)selectedYearRow;
- (long long)selectedMonthRow;
- (long long)selectedDayRow;
- (long long)yearCount;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)daysOfMonth:(long long)arg1 inYear:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)reloadPickerViewContentAfterSelectYear;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (BOOL)isLeapYear:(long long)arg1;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)firstYearRow;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)monthWordingInEngligh:(long long)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)UIPickerViewDidCancel;
- (long long)selectedYear;
- (void)UIPickerViewDidFinish;
- (void)setOrignData:(id)arg1;
- (void)setOrignData:(id)arg1 labelColor:(id)arg2;
- (id)getOriginData;
- (id)getPickerData;
- (void)setStartYear:(long long)arg1 endYear:(long long)arg2 beginYear:(long long)arg3;
- (id)startDate;
- (id)endDate;
- (id)startData;
- (id)endData;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)currentAccessibilityDesc;
- (BOOL)canBeLongTerm;
- (void)setCanBeLongTerm:(BOOL)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (long long)startMonth;
- (void)setStartMonth:(long long)arg1;
- (long long)startDay;
- (void)setStartDay:(long long)arg1;
- (long long)endMonth;
- (void)setEndMonth:(long long)arg1;
- (long long)endDay;
- (void)setEndDay:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (id)currentSelectedData;
- (void)setCurrentSelectedData:(id)arg1;
- (void).cxx_destruct;
@end
