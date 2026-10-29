@interface WebviewJSEventHandler_showDatePickerView : WebviewJSEventHandlerBase <WADateTimePickerDelegate, MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, IUiUtilExt>
{
    MMDates m_minDate; // +0x8
    MMDates m_maxDate; // +0x20
    MMDates m_currentDate; // +0x38
    MMDates m_selectedDate; // +0x50
    long long componentsOfPickerView; // +0x68
    JSEvent * _jsEvent; // +0x70
    NSMutableArray * _m_yearData; // +0x78
    NSMutableArray * _m_monthData; // +0x80
    NSMutableArray * _m_dayData; // +0x88
    UIToolbar * _m_toolBar; // +0x90
    UIPickerView * _m_pickerView; // +0x98
    UIView * _m_blackView; // +0xa0
    UIView * _m_containView; // +0xa8
    UIView * _m_blackLine; // +0xb0
    WADateTimePickerView * _datePicker; // +0xb8
    MMPageSheetAdapter * _pageSheetAdapter; // +0xc0
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)initData:(id)arg1;
- (void)initDate;
- (void)jumpToCurrentDate:(BOOL)arg1;
- (long long)checkValidOfDay:(long long)arg1 AndMonth:(long long)arg2 AndDay:(long long)arg3;
- (id)printDate:(MMDates)arg1;
- (void)disableSwipePop;
- (void)enableSwipePop;
- (void)initDatePickerView;
- (void)accessibilityFocusPickerView;
- (void)onMainWindowFrameChanged;
- (void)reloadDatePickerView;
- (void)doneBtnClicked;
- (void)cancelBtnClicked;
- (void)resignPickerView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)showNewDatePickerWithParamDict:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)onCancel;
- (void)onDateTimeConfirm:(id)arg1;
- (id)m_yearData;
- (void)setM_yearData:(id)arg1;
- (id)m_monthData;
- (void)setM_monthData:(id)arg1;
- (id)m_dayData;
- (void)setM_dayData:(id)arg1;
- (id)m_toolBar;
- (void)setM_toolBar:(id)arg1;
- (id)m_pickerView;
- (void)setM_pickerView:(id)arg1;
- (id)m_blackView;
- (void)setM_blackView:(id)arg1;
- (id)m_containView;
- (void)setM_containView:(id)arg1;
- (id)m_blackLine;
- (void)setM_blackLine:(id)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void).cxx_destruct;
@end

