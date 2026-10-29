@interface WXGBackupBackupLogic : WXGBackupBasicLogic <WXGBackupDataMgrDelegate, WXGBackupBasicLogicProtocol>
{
    WXGBackupDataMgr * m_dataMgr; // +0x8
    WXGBackupDataInfo * m_backupDataInfo; // +0x10
    BOOL m_bFirstTag; // +0x18
    unsigned long long m_currentSessionCount; // +0x20
    unsigned long long m_totalSessionCount; // +0x28
    NSString * m_lastBackupSesionName; // +0x30
    NSMutableDictionary * m_sessionNickDictionary; // +0x38
    NSMutableArray * m_sendingArray; // +0x40
    BOOL m_bStopService; // +0x48
    NSObject<OS_dispatch_queue> * m_backupLogicQueue; // +0x50
    BOOL m_bSendFinish; // +0x58
}
- (id)init;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (BOOL)sendData:(id)arg1;
- (void)sendStartRequest;
- (void)sendRequestSession;
- (void)sendFinishRequest;
- (void)sendBackupDataTagWithDataInfo:(id)arg1;
- (void)sendBackupConfirm;
- (void)sendNextDataPushWithResponseID:(id)arg1;
- (void)sendLotOfDataPush;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)p_processBackupDataTag:(id)arg1;
- (void)onDataMgrRequiredFilterRequest:(id)arg1;
- (void)onDataMgrFilterOneMedia:(unsigned long long)arg1;
- (void)processStartResponseData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processFilterResponseData:(id)arg1;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

