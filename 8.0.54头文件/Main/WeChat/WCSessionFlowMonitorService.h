@interface WCSessionFlowMonitorService : MMUserService <MMServiceProtocol, SessionFlowSwizzleExt, ClickStatSwizzleExt, SessionClickSwizzleExt>
{
    WCSessionVCStack * m_stack; // +0x8
    NSMutableDictionary * m_pushAndPopDic; // +0x10
    NSMutableDictionary * m_presentAndDismissDic; // +0x18
    NSMutableDictionary * m_appearAndDisappearDic; // +0x20
    NSSet * m_ignoreAppearAndDisappearSet; // +0x28
    NSMutableArray * m_accountSwitchProtocols; // +0x30
    WCForeBackFlowMgr * m_foreBackFlowMgr; // +0x38
    WCCoinBusinessReporter * m_coinBusinessReporter; // +0x40
    WCSpecialEnteranceRepoter * m_specialEnteranceRepoter; // +0x48
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onViewDidBePoped:(id)arg1 withVC:(id)arg2;
- (void)onViewDidBePushed:(id)arg1 withVC:(id)arg2;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidDisappear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidBePresented:(id)arg1 withVC:(id)arg2;
- (void)onViewDidBeDismissed:(id)arg1 withVC:(id)arg2;
- (void)onSendEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (BOOL)isInvisibleOut:(long long)arg1;
- (unsigned long long)getHashCode:(id)arg1;
- (void).cxx_destruct;
@end

