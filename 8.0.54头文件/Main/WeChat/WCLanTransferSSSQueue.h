@interface WCLanTransferSSSQueue : NSObject <CNetworkStatusExt>
{
    id <WCLanTransferSSSDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _sssQueue; // +0x10
    NSMutableDictionary * _taskInfoDict; // +0x18
    NSMutableDictionary * _taskInfoStartDict; // +0x20
    NSString * _localServer; // +0x28
    NSString * _encryKey; // +0x30
}
- (id)sssQueue;
- (id)addTaskInfo:(id)arg1;
- (void)p_tryStopServer;
- (void)p_forceStopServer;
- (void)handleSmartServerSendSuccess:(id)arg1;
- (void)handleSmartServerSendFail:(id)arg1 errorCode:(int)arg2;
- (void)handleSmartServerProgressChange:(id)arg1 totalSize:(unsigned long long)arg2 successSize:(unsigned long long)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSssQueue:(id)arg1;
- (id)taskInfoDict;
- (void)setTaskInfoDict:(id)arg1;
- (id)taskInfoStartDict;
- (void)setTaskInfoStartDict:(id)arg1;
- (id)localServer;
- (void)setLocalServer:(id)arg1;
- (id)encryKey;
- (void)setEncryKey:(id)arg1;
- (void).cxx_destruct;
@end

