@interface MainPluginReporter : MMUserService <IMMNewSessionMgrExt, IMainSessionMgrExt, MMServiceProtocol>
{
    BOOL _isInitLastUnReadMsgCount; // +0x8
    BOOL _enableExitReport; // +0x9
    NSMutableDictionary * _reportItems; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportSessions;
- (void)initLastUnReadMsgCountInner;
- (void)initLastUnReadMsgCount;
- (void)reset;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onMainFrameEndReload;
- (id)itemForSession:(id)arg1;
- (BOOL)isInitLastUnReadMsgCount;
- (void)setIsInitLastUnReadMsgCount:(BOOL)arg1;
- (BOOL)enableExitReport;
- (void)setEnableExitReport:(BOOL)arg1;
- (id)reportItems;
- (void)setReportItems:(id)arg1;
- (void).cxx_destruct;
@end
