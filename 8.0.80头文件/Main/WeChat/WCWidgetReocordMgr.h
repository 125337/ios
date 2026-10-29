@interface WCWidgetReocordMgr : MMRootService <MMServiceProtocol, ClickStatSwizzleExt>
{
    NSMutableArray * _eventList; // +0x8
    CGPoint _touchBeginPoint; // +0x10
    timeval _touchBeginTimeStamp; // +0x20
    BOOL _bSensitive; // +0x30
    BOOL _bNeedDebugInfo; // +0x31
    BOOL _needRecord; // +0x32
}
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)recordEvent:(id)arg1;
- (id)getAndRemoveWidgetRecord;
- (void)onSendEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)recordTouchEvent:(id)arg1;
- (BOOL)isKindOfMonitorGesture:(id)arg1;
- (BOOL)saveWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (id)getWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (BOOL)removeWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (BOOL)isSensitiveWidget:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)printWidgetEvent:(id)arg1;
- (BOOL)needRecord;
- (void)setNeedRecord:(BOOL)arg1;
- (void).cxx_destruct;
@end
