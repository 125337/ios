@interface MMDatePickerHalfSheetView : MMPageSheetBaseView <UIPickerViewDelegate, UIPickerViewDataSource, MMPageSheetBottomViewDelegate>
{
    UIView * _layoutReferenceView; // +0x8
    id <MMDatePickerHalfSheetViewDelegate> _pickerDelegate; // +0x10
    double _contentHeight; // +0x18
    double _maxContentHeight; // +0x20
    long long _currentMode; // +0x28
    MMBarItemCustomView * _tabContainerView; // +0x30
    UIButton * _monthTabButton; // +0x38
    UIButton * _rangeTabButton; // +0x40
    UIView * _tabIndicatorView; // +0x48
    UIView * _monthView; // +0x50
    UIPickerView * _monthPickerView; // +0x58
    UIView * _rangeView; // +0x60
    UILabel * _startLabel; // +0x68
    UILabel * _endLabel; // +0x70
    UIButton * _startButton; // +0x78
    UIButton * _endButton; // +0x80
    UILabel * _separatorLabel; // +0x88
    UIPickerView * _rangePickerView; // +0x90
    long long _editingField; // +0x98
    NSArray * _yearItems; // +0xa0
    NSArray * _monthItems; // +0xa8
    long long _selectedYear; // +0xb0
    long long _selectedMonth; // +0xb8
    long long _startYear; // +0xc0
    long long _startMonth; // +0xc8
    long long _endYear; // +0xd0
    long long _endMonth; // +0xd8
}
- (id)initWithDelegate:(id)arg1 contentHeight:(double)arg2;
- (double)pageSheetContentWidth;
- (double)naturalContentHeightForMode:(long long)arg1;
- (void)applyContentHeightForMode:(long long)arg1 animated:(BOOL)arg2;
- (void)setupPickerData;
- (void)setupConfig;
- (void)enableNoTimeLimitResetLayout;
- (void)setupTabView;
- (double)tabIndicatorTop;
- (void)setupUI;
- (void)setupRangeView;
- (void)layoutDetailViewSubviews;
- (void)layoutSubviews;
- (void)onMonthTabClicked;
- (void)onRangeTabClicked;
- (void)updateTabAppearance;
- (void)switchToMode:(long long)arg1;
- (void)onStartButtonClicked;
- (void)onEndButtonClicked;
- (void)updateRangeEditingState;
- (void)updateRangeButtonTitles;
- (void)updateRangePickerSelection;
- (void)onConfirmButtonClicked;
- (void)commitSelectionAndDismiss;
- (void)onNoTimeLimitButtonClicked;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)selectYear:(long long)arg1 month:(long long)arg2;
- (void)selectStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
- (void)updateMonthPickerSelection;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)layoutReferenceView;
- (void)setLayoutReferenceView:(id)arg1;
- (id)pickerDelegate;
- (void)setPickerDelegate:(id)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (double)maxContentHeight;
- (void)setMaxContentHeight:(double)arg1;
- (long long)currentMode;
- (void)setCurrentMode:(long long)arg1;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg1;
- (id)monthTabButton;
- (void)setMonthTabButton:(id)arg1;
- (id)rangeTabButton;
- (void)setRangeTabButton:(id)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (id)monthView;
- (void)setMonthView:(id)arg1;
- (id)monthPickerView;
- (void)setMonthPickerView:(id)arg1;
- (id)rangeView;
- (void)setRangeView:(id)arg1;
- (id)startLabel;
- (void)setStartLabel:(id)arg1;
- (id)endLabel;
- (void)setEndLabel:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)endButton;
- (void)setEndButton:(id)arg1;
- (id)separatorLabel;
- (void)setSeparatorLabel:(id)arg1;
- (id)rangePickerView;
- (void)setRangePickerView:(id)arg1;
- (long long)editingField;
- (void)setEditingField:(long long)arg1;
- (id)yearItems;
- (void)setYearItems:(id)arg1;
- (id)monthItems;
- (void)setMonthItems:(id)arg1;
- (long long)selectedYear;
- (void)setSelectedYear:(long long)arg1;
- (long long)selectedMonth;
- (void)setSelectedMonth:(long long)arg1;
- (long long)startYear;
- (void)setStartYear:(long long)arg1;
- (long long)startMonth;
- (void)setStartMonth:(long long)arg1;
- (long long)endYear;
- (void)setEndYear:(long long)arg1;
- (long long)endMonth;
- (void)setEndMonth:(long long)arg1;
- (void).cxx_destruct;
@end
