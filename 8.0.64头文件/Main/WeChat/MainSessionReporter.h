@interface MainSessionReporter : MMUserService <IMMNewSessionMgrExt, BaseMsgViewControllerExt, INetworkStatusMgrExt, MMServiceProtocol>
{
    BOOL _enableExitReport; // +0x8
    BOOL _enableEntryReport; // +0x9
    BOOL _enableReportDetail; // +0xa
    BOOL _shouldReportEntryData; // +0xb
    long long _readSessionCount; // +0x10
    unsigned long long _enterForegoundTime; // +0x18
    unsigned long long _enterBackgroundTime; // +0x20
    long long _enterForegroundUnreadCount; // +0x28
    NSMutableDictionary * _reportItems; // +0x30
    long long _chatBoxMinIndex; // +0x38
    NSIndexPath * _maxEntrySessionIndexPath; // +0x40
}
+ (long long)chatTypeForSession:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)recordEnterSessionIndex:(id)arg1;
- (void)updateChatBoxEntryMinIndex:(long long)arg1;
- (void)reportSessionsAt:(long long)arg1;
- (long long)maxEntrySessionIndex;
- (void)handleEnterSessionAndClearUnread:(id)arg1;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onWillDeleteSession:(id)arg1;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)reset;
- (id)itemForSession:(id)arg1;
- (id)itemKeyForSession:(id)arg1;
- (BOOL)enableExitReport;
- (void)setEnableExitReport:(BOOL)arg1;
- (BOOL)enableEntryReport;
- (void)setEnableEntryReport:(BOOL)arg1;
- (BOOL)enableReportDetail;
- (void)setEnableReportDetail:(BOOL)arg1;
- (long long)readSessionCount;
- (void)setReadSessionCount:(long long)arg1;
- (unsigned long long)enterForegoundTime;
- (void)setEnterForegoundTime:(unsigned long long)arg1;
- (unsigned long long)enterBackgroundTime;
- (void)setEnterBackgroundTime:(unsigned long long)arg1;
- (long long)enterForegroundUnreadCount;
- (void)setEnterForegroundUnreadCount:(long long)arg1;
- (id)reportItems;
- (void)setReportItems:(id)arg1;
- (long long)chatBoxMinIndex;
- (void)setChatBoxMinIndex:(long long)arg1;
- (id)maxEntrySessionIndexPath;
- (void)setMaxEntrySessionIndexPath:(id)arg1;
- (BOOL)shouldReportEntryData;
- (void)setShouldReportEntryData:(BOOL)arg1;
- (void).cxx_destruct;
@end
