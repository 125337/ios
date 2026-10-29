@interface WCSelectTimeHalfScreenView : MMPageSheetBaseView
{
    id /* block */ _confirmCallBack; // +0x8
    id /* block */ _cancelCallBack; // +0x10
    NSDate * _miniumDate; // +0x18
    NSDate * _maxiumDate; // +0x20
    NSDate * _selectBeginDate; // +0x28
    NSDate * _selectEndDate; // +0x30
}
- (id)initWithTimeMin:(id)arg1 max:(id)arg2 selectBegin:(id)arg3 selectEnd:(id)arg4;
- (BOOL)checkDateValid;
- (void)setupDetailView;
- (void)onDone;
- (void)onSelectStatTime;
- (void)onSelectEndTime;
- (id)navigationRightButton;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (id /* block */)cancelCallBack;
- (void)setCancelCallBack:(id /* block */)arg1;
- (id)miniumDate;
- (void)setMiniumDate:(id)arg1;
- (id)maxiumDate;
- (void)setMaxiumDate:(id)arg1;
- (id)selectBeginDate;
- (void)setSelectBeginDate:(id)arg1;
- (id)selectEndDate;
- (void)setSelectEndDate:(id)arg1;
- (void).cxx_destruct;
@end

