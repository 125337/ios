@interface MBExternalVideoPreloader : NSObject
{
    NSObject<OS_dispatch_queue> * _stateQueue; // +0x8
    NSMutableDictionary * _tasks; // +0x10
    NSMutableDictionary * _callbacks; // +0x18
    NSMutableDictionary * _sessions; // +0x20
    NSMutableDictionary * _sourceMap; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (id)mediaIdForSrc:(id)arg1;
- (void)startPreloadWithSrc:(id)arg1 downloadRatio:(long long)arg2 reportInfo:(id)arg3 complete:(id /* block */)arg4;
- (BOOL)cancelPreloadWithSrc:(id)arg1;
- (void)startCdnPreloadWithSrc:(id)arg1 mediaId:(id)arg2 downloadRatio:(long long)arg3 reportInfo:(id)arg4;
- (id)downloadArgsWithMediaId:(id)arg1 src:(id)arg2 savePath:(id)arg3 formatPath:(id)arg4;
- (void)fireResult:(id)arg1 mediaId:(id)arg2 reportInfo:(id)arg3;
- (long long)reportResultForResult:(id)arg1;
- (void)markSourceIfEmpty:(long long)arg1 forMediaId:(id)arg2;
- (long long)preloadSourceForMediaId:(id)arg1;
- (void)reportPreDownloadEndWithMediaId:(id)arg1 src:(id)arg2 reportInfo:(id)arg3 result:(long long)arg4 errCode:(long long)arg5 cacheKind:(long long)arg6 expectRatio:(long long)arg7 finishedBytes:(long long)arg8 totalBytes:(long long)arg9 costMs:(unsigned long long)arg10 cancelPhase:(long long)arg11;
- (id)failureResult:(long long)arg1 msg:(id)arg2;
- (id)hostOfSrc:(id)arg1;
- (unsigned long long)nowMs;
- (id)stateQueue;
- (void)setStateQueue:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (id)sourceMap;
- (void)setSourceMap:(id)arg1;
- (void).cxx_destruct;
@end
