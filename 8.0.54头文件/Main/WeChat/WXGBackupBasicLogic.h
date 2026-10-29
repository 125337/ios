@interface WXGBackupBasicLogic : NSObject <WXGBackupBasicLogicProtocol>
{
    BOOL _retransfer; // +0x8
    BOOL _bStartLogic; // +0x9
    BOOL _bConfirmLogic; // +0xa
    BOOL _bInTransfer; // +0xb
    id <WXGBackupBasicLogicDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _processLogicQueue; // +0x18
    WXGLocalAreaCommunicationClient * _networkHandler; // +0x20
    WXGChatLogProtoHandler * _protoHandler; // +0x28
}
- (id)init;
- (void)startService;
- (void)stopService;
- (void)resendService;
- (void)confirmLogic;
- (void)restartLogic;
- (void)processStartResponseData:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processFinishRequestData:(id)arg1;
- (void)processFilterRequestData:(id)arg1;
- (void)processFilterResponseData:(id)arg1;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)processOnMainThreadProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)processOnMainThreadAlert:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)retransfer;
- (void)setRetransfer:(BOOL)arg1;
- (id)processLogicQueue;
- (void)setProcessLogicQueue:(id)arg1;
- (id)networkHandler;
- (void)setNetworkHandler:(id)arg1;
- (id)protoHandler;
- (void)setProtoHandler:(id)arg1;
- (BOOL)bStartLogic;
- (void)setBStartLogic:(BOOL)arg1;
- (BOOL)bConfirmLogic;
- (void)setBConfirmLogic:(BOOL)arg1;
- (BOOL)bInTransfer;
- (void)setBInTransfer:(BOOL)arg1;
- (void).cxx_destruct;
@end

