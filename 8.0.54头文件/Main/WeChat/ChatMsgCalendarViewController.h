@interface ChatMsgCalendarViewController : MMUIViewController <MMTableViewInfoDelegate, MMListYearMonthFlowViewDelegate, MMCommonActionSheetPickerDelegate>
{
    CBaseContact * m_oContact; // +0x68
    MMTableViewInfo * m_tableViewInfo; // +0x70
    NSCalendar * m_gregorian; // +0x78
    NSCalendar * m_chinese; // +0x80
    UIImage * m_backImg; // +0x88
    UIImage * m_normalImg; // +0x90
    NSDate * m_lastDatePreMonth; // +0x98
    NSDateComponents * m_firstMsgDateComponents; // +0xa0
    NSDateComponents * m_lastMsgDateComponents; // +0xa8
    NSDateComponents * m_currentMsgDateComponents; // +0xb0
    CalendarYearMonthDate * m_selectYearMonth; // +0xb8
    BOOL m_bEnd; // +0xc0
    UIButton * m_lastSelectItem; // +0xc8
    BOOL m_bToday; // +0xd0
    BOOL m_bNewYearsEve; // +0xd1
    CalendarWeeklyView * m_weekView; // +0xd8
    id <MMUIViewControllerDelegate> _m_delegate; // +0xe0
    MMListYearMonthFlowView * _yearMonthFlowView; // +0xe8
    MMCommonActionSheetPicker * _yearMonthPickerView; // +0xf0
    NSArray * _yearsData; // +0xf8
    NSArray * _monthsDatas; // +0x100
}
- (id)initWithChat:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)makeWeekView;
- (void)makeWeeklyLineCell:(id)arg1 CellInfo:(id)arg2;
- (id)getDateFromEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4;
- (void)makeMonthlyViewWithDate:(id)arg1;
- (void)makeMonthlyViewWithDate:(id)arg1 isNeedReloadData:(BOOL)arg2;
- (id)getViewController;
- (void)onSelectDate:(id)arg1;
- (id)getDetailForDay:(long long)arg1 Month:(long long)arg2 Year:(long long)arg3;
- (id)makeWeeklyLineView:(long long *)arg1 WeekDay:(long long)arg2 thisMonthComponent:(id)arg3;
- (BOOL)shouldLoadNextMonth;
- (void)loadNextMonthIfNeeded:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (BOOL)hasMsgDay:(long long)arg1 Month:(long long)arg2 Year:(long long)arg3;
- (void)getNextDateComponents;
- (id)genDateComponentsWithDate:(id)arg1;
- (void)scrollToSessionWithYear:(long long)arg1 month:(long long)arg2;
- (void)scrollToSessionWithIndex:(id)arg1;
- (void)resetTableViewContentInset;
- (id)getFirstSectionHeaderView;
- (double)getSesessionTopInTable:(unsigned int)arg1;
- (void)initYearFloatView;
- (id)getFirstVisibleCellIndexPath;
- (void)updateYearMonthFlowView;
- (void)updateYearMonthFlowViewTitle:(long long)arg1 month:(long long)arg2;
- (void)initDateComponents;
- (void)handleDidClickYearMonthFlowLabel:(id)arg1 month:(id)arg2;
- (void)updateYearMonthPicker:(id)arg1 month:(id)arg2;
- (void)tryCalcYearMonthPickerViewData;
- (void)calcYearMonthPickerViewData;
- (void)listYearMonthFlowViewDidClickLabel:(id)arg1;
- (void)commonPickerConfirm:(id)arg1;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)yearMonthFlowView;
- (void)setYearMonthFlowView:(id)arg1;
- (id)yearMonthPickerView;
- (void)setYearMonthPickerView:(id)arg1;
- (id)yearsData;
- (void)setYearsData:(id)arg1;
- (id)monthsDatas;
- (void)setMonthsDatas:(id)arg1;
- (void).cxx_destruct;
@end

