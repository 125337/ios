@interface DataReportOperateMonitor : MMUserService <ClickStatSwizzleExt, SessionClickSwizzleExt, MMServiceProtocol>
{
    NSNumber * m_monitorSwitch; // +0x8
    NSNumber * m_isOpenDebugToast; // +0x10
    unsigned long long m_toastIndex; // +0x18
    NSHashTable * m_monitorViews; // +0x20
    unsigned long long m_touchBeganTimestamp; // +0x28
    unsigned long long m_lastClickTimestamp; // +0x30
    BOOL m_hasTouchMoveed; // +0x38
    UIView * m_touchBeganView; // +0x40
    UIView * m_clickView; // +0x48
    UIView * m_longPressView; // +0x50
    UIView * m_doubleTapView; // +0x58
    unsigned long long m_lastBeganTouchTime; // +0x60
}
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (BOOL)isOpenMonitor;
- (BOOL)isOpenDebugToast;
- (void)addMonitorView:(id)arg1;
- (void)removeMonitorView:(id)arg1;
- (void)onSendEvent:(id)arg1;
- (void)onTouchBegan:(id)arg1 touch:(id)arg2;
- (void)onTouchMoved:(id)arg1 touch:(id)arg2;
- (void)onTouchEnded:(id)arg1 touch:(id)arg2;
- (void)viewClickTask;
- (void)viewLongPressTask;
- (id)getRealisticOperateView:(id)arg1;
- (BOOL)isControlClickEvent:(id)arg1;
- (void)setViewOperateVisiableToolsSwitch:(BOOL)arg1;
- (void)showDebugToast:(id)arg1 text:(id)arg2;
- (void)showDebugInfoSheetView:(id)arg1;
- (void)onSendEventBegan:(id)arg1;
- (void)onSendEventEnded:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)clearViewId:(id)arg1;
- (void).cxx_destruct;
@end
