@interface WXGMigrationClientLogic : NSObject <LocalAreaCommunicationClientDelegate, WXGMigrationRecoverHelperDelegate, ChatMigrationHeartBeatMonitorDelegate, WXGMigrationImportMessageHelperDelegate>
{
    NSObject<OS_dispatch_queue> * m_processLogicQueue; // +0x8
    BOOL m_bStartTransfer; // +0x10
    int m_chatMigrationType; // +0x14
    int m_otherSideChatMigrationVersion; // +0x18
    long long m_otherSideSupportExt; // +0x20
    ChatMigrationHeartBeatMonitor * m_heartBeatMonitor; // +0x28
    MMTimer * m_sendHeartBeatTimer; // +0x30
    double m_heartTimerCheckInterval; // +0x38
    unsigned long long m_totalSize; // +0x40
    unsigned long long m_recvSize; // +0x48
    unsigned int m_checkLowSpeedTickTock; // +0x50
    unsigned long long m_currentSessionCount; // +0x58
    unsigned long long m_totalSessionCount; // +0x60
    BOOL m_bFirstTag; // +0x68
    double m_transferDataStartTime; // +0x70
    NSString * m_lastSessionName; // +0x78
    WXGMigrationRecoverHelper * m_recoverHelper; // +0x80
    WXGMigrationImportMessageHelper * m_importHelper; // +0x88
    WXGLocalAreaCommunicationClient * m_networkHandler; // +0x90
    WXGChatLogProtoHandler * m_protoHandler; // +0x98
    NSObject<OS_dispatch_group> * m_writeGroup; // +0xa0
    NSData * m_finishData; // +0xa8
    NSArray * m_currentRequestSessionDataInfoArray; // +0xb0
    BOOL m_bCheckSize; // +0xb8
    float m_lastCircleProgress; // +0xbc
    BOOL _bProcessFinish; // +0xc0
    id <WXGMigrationClientLogicDelegate> _delegate; // +0xc8
}
- (id)init;
- (void)startAuthenticate;
- (void)stopLogic;
- (id)getReportDataInfo;
- (void)onMigrationAllData;
- (void)onMigrationAllDataNoCheckSize;
- (void)p_onMigrationNewDataNotCheckPersistent:(BOOL)arg1;
- (void)onMigrationNewData;
- (void)sendRequestSessionResponseWithDataInfo:(id)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)restSendHeartBeatTimer;
- (BOOL)p_checkFreeSize;
- (void)p_processAuthResponseData:(id)arg1;
- (void)p_processChooseUserResponseData:(id)arg1;
- (void)p_processStartResponseData:(id)arg1;
- (void)p_processRequestSessionData:(id)arg1;
- (void)p_processSelectTypeResponseData:(id)arg1;
- (void)p_processDataPushData:(id)arg1;
- (void)p_processBackupDataTagData:(id)arg1;
- (void)p_processCancelRequestData:(id)arg1;
- (void)p_processFinishRequestData:(id)arg1;
- (void)p_processHeartBeatReqeustData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (BOOL)sendData:(id)arg1;
- (void)p_sendFirstAuthenticatePackage;
- (void)p_sendSecondAuthenticateRequestPackage;
- (void)p_sendChooseUserRequset;
- (void)p_sendStartRequest;
- (void)p_sendDataTagResponseForDataTag:(id)arg1;
- (void)p_sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeat;
- (void)onClientReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onClientDisconnect;
- (void)onClientConnectFail;
- (void)onClientTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)onData:(id)arg1 writeToFileFinish:(BOOL)arg2;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)onHeartBeatOK;
- (void)onHeartBeatLate;
- (void)onHeartBeatAckIDWrong;
- (void)p_alertOnMainThread:(unsigned long long)arg1;
- (void)p_notifyOnMainthread:(unsigned long long)arg1;
- (void)p_notifyCurrentProgressOnMainthread;
- (void)p_notifyDisconnect;
- (void)p_notifyOnMainThreadProcessSize;
- (BOOL)isSupportBackupNewFeature;
- (BOOL)isSupportShowRescanButton;
- (void)onMigrationImportSucessPrepare;
- (void)onMigrationImportMessageFinish;
- (void)onMigrationImportMessageError;
- (void)onLastImportFinished;
- (id)getConnectDebugInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bProcessFinish;
- (void)setBProcessFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end
