@interface GCBaseServer : NSObject
{
    BOOL _exited; // +0x8
    NSMutableDictionary * _longPollingTimeDict; // +0x10
    NSMutableDictionary * _cmdIdDict; // +0x18
    long long _requestSeq; // +0x20
}
- (id)init;
- (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(BOOL)arg5 completion:(id /* block */)arg6;
- (BOOL)defaultSpeedRequeset;
- (id)checkResponseError:(id)arg1;
- (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(BOOL)arg5 additionalInfo:(id)arg6 completion:(id /* block */)arg7;
- (void)invalidatePreviousRequest;
- (void)exitRoom;
- (void)onExitRoom;
- (float)delaySecondsAfterFaile;
- (BOOL)exited;
- (void)setExited:(BOOL)arg1;
- (id)longPollingTimeDict;
- (void)setLongPollingTimeDict:(id)arg1;
- (id)cmdIdDict;
- (void)setCmdIdDict:(id)arg1;
- (long long)requestSeq;
- (void)setRequestSeq:(long long)arg1;
- (void).cxx_destruct;
@end

