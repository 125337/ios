@interface AmoebaOperateMonitor : NSObject <AmoebaEventSwizzleExt, AmoebaGestureSwizzleExt>
{
    NSNumber * m_monitorSwitch; // +0x8
    NSNumber * m_monitorType; // +0x10
    NSNumber * m_isOpenDebugToast; // +0x18
    unsigned long long m_toastIndex; // +0x20
    NSHashTable * m_monitorViews; // +0x28
    unsigned long long m_touchBeganTimestamp; // +0x30
    unsigned long long m_lastClickTimestamp; // +0x38
    unsigned long long m_doubleTapFirstTimestamp; // +0x40
    CGPoint m_touchBeganPosi; // +0x48
    BOOL m_isTouchMoved; // +0x58
    UIView * m_touchBeganView; // +0x60
    UIView * m_longPressView; // +0x68
    UIView * m_doubleTapView; // +0x70
}
+ (id)shareInstance;
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (BOOL)isOpenMonitor;
- (unsigned long long)getMonitorType;
- (BOOL)isOpenDebugToast;
- (void)addMonitorView:(id)arg1;
- (void)removeMonitorView:(id)arg1;
- (void)onSendEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)onTouchBegan:(id)arg1 touch:(id)arg2;
- (void)onTouchMoved:(id)arg1 touch:(id)arg2;
- (void)onTouchEnded:(id)arg1 touch:(id)arg2;
- (void)onSendEventBegan:(id)arg1;
- (void)onSendEventEnded:(id)arg1;
- (void)viewClick:(id)arg1;
- (void)viewDoubleTap:(id)arg1;
- (void)viewLongPressTask;
- (id)getRealisticOperateView:(id)arg1;
- (BOOL)isControlClickEvent:(id)arg1;
- (void)setViewOperateVisiableToolsSwitch:(BOOL)arg1;
- (void)showDebugToast:(id)arg1 text:(id)arg2;
- (void)showDebugInfoSheetView:(id)arg1;
- (void)clearViewId:(id)arg1;
- (void).cxx_destruct;
@end
