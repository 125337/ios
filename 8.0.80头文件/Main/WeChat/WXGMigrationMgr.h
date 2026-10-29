@interface WXGMigrationMgr : MMUserService <MMKernelExt, IMsgExt, ChatMigrationGetConnectInfoDelegate, MMServiceProtocol>
{
    WXGMigrationInfoDB * m_infoDB; // +0x8
    NSObject<OS_dispatch_queue> * m_updateTimeQueue; // +0x10
    BOOL m_bShouldNotInterruption; // +0x18
    NSString * m_deviceID; // +0x20
    BOOL m_bCheckState; // +0x28
    unsigned int m_deviceType; // +0x2c
    BOOL m_bBackground; // +0x30
    ChatMigrationGetConnectInfo * _getConnectionInfo; // +0x38
    NSString * _connectionInfoUrl; // +0x40
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)checkState;
- (void)p_onMainThreadShowClientEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (void)p_onMainThreadShowServerEntryViewControllerWithNotifyCode:(unsigned long long)arg1;
- (BOOL)isMigrationWorking;
- (void)shouldNotInterruption;
- (void)canInterrutpion;
- (void)showLocalNotificationWhenChatMigrationWorking;
- (void)showUseHotspotContinueToMigrate;
- (void)setPairDeviceType:(unsigned int)arg1;
- (unsigned int)getPairDeviceType;
- (void)setUserDeviceIDAndCreateTable:(id)arg1;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)arg1 withTmpLastTime:(unsigned int)arg2;
- (void)resetSession:(id)arg1 withBeginTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3;
- (BOOL)hasBeenMigration;
- (BOOL)hasBeenMigrationWithSessionNameArray:(id)arg1;
- (void)onAuthOK;
- (BOOL)checkResumeInterruptedImport;
- (void)doSilentAutoResumeWithSessionId:(id)arg1 attemptCount:(int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)getConnectURL:(id)arg1;
- (void)onGetConnectInfoNotSameAccount;
- (void)onGetConnectInfo:(id)arg1;
- (id)getConnectionInfo;
- (void)setGetConnectionInfo:(id)arg1;
- (id)connectionInfoUrl;
- (void)setConnectionInfoUrl:(id)arg1;
- (void).cxx_destruct;
@end
