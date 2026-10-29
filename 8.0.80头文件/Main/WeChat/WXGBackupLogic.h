@interface WXGBackupLogic : NSObject <LocalAreaCommunicationClientDelegate, WXGBackupBasicLogicDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    BOOL _bGetFirstPacket; // +0x8
    BOOL _bInDilutedNetwork; // +0x9
    BOOL _bDone; // +0xa
    BOOL _bHeartBeatLate; // +0xb
    id <WXGBackupLogicDelegate> _delegate; // +0x10
    WXGLocalAreaCommunicationClient * _networkHandler; // +0x18
    WXGChatLogProtoHandler * _protoHandler; // +0x20
    WXGBackupBasicLogic * _processLogic; // +0x28
    ChatMigrationHeartBeatMonitor * _heartBeatMonitor; // +0x30
    NSObject<OS_dispatch_queue> * _processLogicQueue; // +0x38
    MMTimer * _sendHeartBeatTimer; // +0x40
    double _transferDataStartTime; // +0x48
    long long _otherSideSupportExt; // +0x50
}
- (id)init;
- (void)startLogic;
- (void)stopLogic;
- (void)confirmLogic;
- (void)cancelLogic;
- (void)restartLogic;
- (void)startAuthenticate;
- (BOOL)isInDilutedNetwork;
- (unsigned long long)getAlreadyTransferSize;
- (void)reportDisconnect;
- (BOOL)sendData:(id)arg1;
- (BOOL)sendCommandResponseWithCommand:(int)arg1;
- (BOOL)sendCommandRequestWithCommand:(int)arg1 withData:(id)arg2;
- (void)sendFirstAuthenticateRequestPakage;
- (void)sendSecondAuthenticateRequestPakage;
- (void)sendCancelRequest;
- (void)restSendHeartBeatTimer;
- (void)p_sendHeartBeat;
- (void)sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (id)makeProcessLogifyForCommand:(int)arg1;
- (void)processCommandRequestData:(id)arg1;
- (void)processCommandResponseData:(id)arg1;
- (void)processAuthResponseData:(id)arg1;
- (void)processCancelRequestData:(id)arg1;
- (void)processHeartBeatRequestData:(id)arg1;
- (void)processHeartBeatResponseData:(id)arg1;
- (void)onClientReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onClientDisconnect;
- (void)onClientConnectFail;
- (void)onClientTransferSendSpeed:(float)arg1 sendLength:(unsigned long long)arg2 receiveSpeed:(float)arg3 receiveLength:(unsigned long long)arg4;
- (BOOL)onBasicLogicSendData:(id)arg1;
- (void)onBasicLogicNotifyEvent:(unsigned long long)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBasicLogicAlert:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)processAlertCode:(unsigned long long)arg1;
- (void)processOnMainThreadAlertCode:(unsigned long long)arg1;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)onHeartBeatOK;
- (void)onHeartBeatLate;
- (void)onHeartBeatAckIDWrong;
- (BOOL)isLogicRetransfer;
- (id)getConnectDebugInfo;
- (BOOL)isSupportWXAM;
- (BOOL)isPCVersionNotAllowed;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)networkHandler;
- (void)setNetworkHandler:(id)arg1;
- (id)protoHandler;
- (void)setProtoHandler:(id)arg1;
- (id)processLogic;
- (void)setProcessLogic:(id)arg1;
- (BOOL)bGetFirstPacket;
- (void)setBGetFirstPacket:(BOOL)arg1;
- (id)heartBeatMonitor;
- (void)setHeartBeatMonitor:(id)arg1;
- (id)processLogicQueue;
- (void)setProcessLogicQueue:(id)arg1;
- (id)sendHeartBeatTimer;
- (void)setSendHeartBeatTimer:(id)arg1;
- (BOOL)bInDilutedNetwork;
- (void)setBInDilutedNetwork:(BOOL)arg1;
- (BOOL)bDone;
- (void)setBDone:(BOOL)arg1;
- (BOOL)bHeartBeatLate;
- (void)setBHeartBeatLate:(BOOL)arg1;
- (double)transferDataStartTime;
- (void)setTransferDataStartTime:(double)arg1;
- (long long)otherSideSupportExt;
- (void)setOtherSideSupportExt:(long long)arg1;
- (void).cxx_destruct;
@end
