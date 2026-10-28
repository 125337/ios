@interface MMWebViewPlugin_AD : MMWebViewPluginBase <PBMessageObserverDelegate>
{
    NSObject<OS_dispatch_queue> * _gcdQueue; // +0x8
    BOOL _isFetchingToken; // +0x10
    NSMutableDictionary * _dicHost2Token; // +0x18
    NSMutableDictionary * _dicEventID2Task; // +0x20
    NSMutableArray * _taskQueue; // +0x28
}
- (id)init;
- (void)addGetTokenTaskWithUrl:(id)arg1 adUrl:(id)arg2 posId:(id)arg3 completion:(id /* block */)arg4;
- (void)checkTaskQueue;
- (void)remoteGetAdTokenByTask:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)workthread_handleGetTokenResponse:(id)arg1 eventId:(unsigned int)arg2;
- (void)saveToken:(id)arg1 expireTime:(unsigned long long)arg2 forUrl:(id)arg3;
- (id)getTokenByUrl:(id)arg1;
- (id)getTokenKeyByUrl:(id)arg1;
- (id)dicHost2Token;
- (void)setDicHost2Token:(id)arg1;
- (id)dicEventID2Task;
- (void)setDicEventID2Task:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (BOOL)isFetchingToken;
- (void)setIsFetchingToken:(BOOL)arg1;
- (void).cxx_destruct;
@end
