@interface WXGBackupRecoverLogic : WXGBackupBasicLogic <WXGBackupRecoverHelperDelegate, WXGBackupBasicLogicProtocol>
{
    unsigned long long m_currentSessionCount; // +0x8
    unsigned long long m_totalSessionCount; // +0x10
    NSString * m_lastSessionName; // +0x18
    BOOL m_bFirstTag; // +0x20
    BOOL m_bStopService; // +0x21
    BOOL m_bProcessFinish; // +0x22
    WXGBackupRecoverHelper * _recoverHelper; // +0x28
}
- (id)init;
- (id)recoverHelper;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (BOOL)sendData:(id)arg1;
- (void)sendStartResponseWithStatus:(int)arg1;
- (void)sendRecoverConfirm;
- (void)sendDataPushResponse:(id)arg1;
- (void)sendDataTagResponseForDataTag:(id)arg1;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)sendFilterResponse:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processFilterRequestData:(id)arg1;
- (void)processFinishRequestData:(id)arg1;
- (void)onData:(id)arg1 writeToFileFinish:(BOOL)arg2;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)onFilterRequestEnd:(id)arg1 filterSize:(unsigned long long)arg2;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)onLastImportFinished;
- (BOOL)onPhoneDiskNotEnouge;
- (void)setRecoverHelper:(id)arg1;
- (void).cxx_destruct;
@end

