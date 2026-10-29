@interface WCScheduleLogicController : MMObject <MMActionSheetDatePickerDelegate, WCScheduleMgrExt>
{
    BOOL _isCancelSchedule; // +0x8
    unsigned int _selectedRecommendInterval; // +0xc
    id <WCScheduleLogicControllerDelegate> _delegate; // +0x10
    ContentDateInfo * _contentDateInfo; // +0x18
    MMActionSheetDatePicker * _datePicker; // +0x20
    WCScheduleItem * _cachedItem; // +0x28
    MMUIViewController * _fromVC; // +0x30
    UIView * _animateCellView; // +0x38
}
- (id)init;
- (void)dealloc;
- (BOOL)startAddScheduleLogicWithItem:(id)arg1 cellView:(id)arg2 fromViewController:(id)arg3;
- (BOOL)startAddScheduleLogicWithItem:(id)arg1 selectedDate:(id)arg2;
- (void)startModifyRemindLogic:(id)arg1 showDatePickerInView:(id)arg2;
- (void)startCancelScheduleLogic:(id)arg1 fromViewController:(id)arg2;
- (void)startCancelScheduleItem:(id)arg1 fromViewController:(id)arg2;
- (void)dismissDatePickerView;
- (void)removeDatePicker;
- (void)datePickerExpose;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerConfirm:(id)arg1;
- (BOOL)datePicker:(id)arg1 shouldSelectDate:(id)arg2;
- (void)onScheduleAppendItem:(id)arg1;
- (void)onScheduleItemRemindChange:(id)arg1;
- (void)onScheduleRemoveItem:(id)arg1;
- (void)onScheduleModifyFail:(id)arg1 errTips:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentDateInfo;
- (void)setContentDateInfo:(id)arg1;
- (unsigned int)selectedRecommendInterval;
- (void)setSelectedRecommendInterval:(unsigned int)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (id)cachedItem;
- (void)setCachedItem:(id)arg1;
- (BOOL)isCancelSchedule;
- (void)setIsCancelSchedule:(BOOL)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)animateCellView;
- (void)setAnimateCellView:(id)arg1;
- (void).cxx_destruct;
@end
