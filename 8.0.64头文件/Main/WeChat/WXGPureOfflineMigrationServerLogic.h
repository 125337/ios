@interface WXGPureOfflineMigrationServerLogic : NSObject <LocalAreaCommunicationServerDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    NSObject<OS_dispatch_queue> * _processLogicQueue; // +0x8
    NSObject<OS_dispatch_queue> * _getDataLogicQueue; // +0x10
    BOOL _bServerStop; // +0x18
    BOOL _bStartTransfer; // +0x19
    int _chatMigrationType; // +0x1c
    int _peerMigrationVersion; // +0x20
    long long _peerSupportExt; // +0x28
    ChatMigrationHeartBeatMonitor * _heartBeatMonitor; // +0x30
    MMTimer * _sendHeartBeatTimer; // +0x38
    double _heartTimerCheckInterval; // +0x40
    double _transferDataStartTime; // +0x48
    NSMutableArray * _sendingArray; // +0x50
    WXGBackupDataInfo * _backupDataInfo; // +0x58
    NSString * _lastBackupSesionName; // +0x60
    unsigned long long _currentSessionCount; // +0x68
    unsigned long long _totalSessionCount; // +0x70
    unsigned long long _transferredSize; // +0x78
    BOOL _bFirstTag; // +0x80
    WXGLocalAreaCommunicationServer * _networkHandler; // +0x88
    BOOL _sendFinish; // +0x90
    id <WXGPureOfflineMigrationServerLogicDelegate> _delegate; // +0x98
    WXGChatLogProtoHandler * _protoHandler; // +0xa0
    WXGBackupDataMgr * _dataMgr; // +0xa8
    NSDictionary * _selectedSession; // +0xb0
}
- (id)init;
- (void)onSwitchContext;
- (void)chooseUserResult:(int)arg1;
- (void)chooseAllOrNewResult:(BOOL)arg1;
- (void)startNetworkServer;
- (void)startPeerServer;
- (void)stopServerLogic;
- (id)protoHandler;
- (id)dataMgr;
- (void)processData:(id)arg1 withLength:(unsigned int)arg2;
- (void)processAuthenticateRequestData:(id)arg1;
- (void)processChooseUserRequestData:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)processSelectTypeRequestData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processHeartBeatRequestData:(id)arg1;
- (void)processHeartBeatResponseData:(id)arg1;
- (void)processCancelRequestData:(id)arg1;
- (BOOL)isSupportPureOfflineMigration;
- (BOOL)isSupportWXAM;
- (BOOL)isSupportTimeSelect;
- (BOOL)isSupportQuickMigration;
- (BOOL)sendData:(id)arg1;
- (void)sendChooseUserResponse:(int)arg1;
- (void)sendRequestSession;
- (void)sendLotOfDataPush;
- (void)sendNextDataPushWithResponseID:(id)arg1;
- (void)sendBackupOutputToRemote:(id)arg1;
- (void)processDataInfoAndSendTag:(id)arg1;
- (void)sendFinishRequest;
- (void)onServerConnected;
- (void)onServerDisconnect;
- (void)onServerReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onServerTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (void)resetSendHeartBeatTimer;
- (void)sendHeartBeat;
- (void)sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)onHeartBeatOK;
- (void)onHeartBeatLate;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)notifyOnMainthread:(unsigned long long)arg1;
- (void)notifyOnMainThreadCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setProtoHandler:(id)arg1;
- (void)setDataMgr:(id)arg1;
- (id)selectedSession;
- (void)setSelectedSession:(id)arg1;
- (void).cxx_destruct;
@end
