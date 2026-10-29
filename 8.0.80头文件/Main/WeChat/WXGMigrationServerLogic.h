@interface WXGMigrationServerLogic : NSObject <LocalAreaCommunicationServerDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    NSObject<OS_dispatch_queue> * m_processLogicQueue; // +0x8
    NSObject<OS_dispatch_queue> * m_getDataLogicQueue; // +0x10
    BOOL m_bServerStop; // +0x18
    BOOL m_bStartTransfer; // +0x19
    int m_chatMigrationType; // +0x1c
    int m_otherSideChatMigrationVersion; // +0x20
    long long m_otherSideSupportExt; // +0x28
    ChatMigrationHeartBeatMonitor * m_heartBeatMonitor; // +0x30
    MMTimer * m_sendHeartBeatTimer; // +0x38
    double m_heartTimerCheckInterval; // +0x40
    double m_transferDataStartTime; // +0x48
    NSMutableArray * m_sendingArray; // +0x50
    NSMutableDictionary * m_sessionNickDictionary; // +0x58
    WXGBackupDataInfo * m_backupDataInfo; // +0x60
    NSString * m_lastBackupSesionName; // +0x68
    unsigned long long m_currentSessionCount; // +0x70
    unsigned long long m_totalSessionCount; // +0x78
    BOOL m_bFirstTag; // +0x80
    WXGLocalAreaCommunicationServer * m_networkHandler; // +0x88
    WXGChatLogProtoHandler * m_protoHandler; // +0x90
    WXGBackupDataMgr * m_dataMgr; // +0x98
    BOOL m_sendFinish; // +0xa0
    id <WXGMigrationServerLogicDelegate> _delegate; // +0xa8
}
- (id)init;
- (void)startNetworkServer;
- (void)startPeerServer;
- (void)stopServerLogic;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_processAuthenticateRequestData:(id)arg1;
- (void)p_processStartRequestData:(id)arg1;
- (void)p_processRequestSessionResponseData:(id)arg1;
- (void)p_processDataPushResponseData:(id)arg1;
- (void)p_processBackupDataTagResponseData:(id)arg1;
- (void)p_processHeartBeatRequestData:(id)arg1;
- (void)p_processHeartBeatResponseData:(id)arg1;
- (void)p_processCancelRequestData:(id)arg1;
- (BOOL)isSupportBackupNewFeature;
- (BOOL)isSupportWXAM;
- (BOOL)isSupportTimeSelect;
- (BOOL)isSupportQuickMigration;
- (void)p_inputDataAndStartDataMgrProduce;
- (id)p_resortSessionArray:(id)arg1;
- (BOOL)sendData:(id)arg1;
- (void)p_sendRequestSession;
- (void)p_sendLotOfDataPush;
- (void)p_sendNextDataPushWithResponseID:(id)arg1;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)p_processDataInfoAndSendTag:(id)arg1;
- (void)p_sendFinishRequest;
- (void)onServerReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onServerConnected;
- (void)onServerDisconnect;
- (void)onServerTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)restSendHeartBeatTimer;
- (void)p_sendHeartBeat;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)onHeartBeatOK;
- (void)onHeartBeatLate;
- (void)onHeartBeatAckIDWrong;
- (void)p_notifyOnMainthread:(unsigned long long)arg1;
- (void)p_alertOnMainthread:(unsigned long long)arg1;
- (void)p_notifyOnMainThreadCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
