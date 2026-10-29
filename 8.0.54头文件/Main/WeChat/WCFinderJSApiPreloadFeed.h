@interface WCFinderJSApiPreloadFeed : NSObject <WCFinderDataItemExt>
{
    BOOL _invokeTimer; // +0x8
    MMLRUCache * _caches; // +0x10
    long long _totalFetchCount; // +0x18
    long long _matchCount; // +0x20
    NSMutableArray * _pendingTasks; // +0x28
    long long _pendingCount; // +0x30
    NSMutableArray * _runningTask; // +0x38
    WCFinderJSApiPreloadFeedConfig * _config; // +0x40
    unsigned long long _preFetchTime; // +0x48
}
+ (void)invokePreloadFromParams:(id)arg1 vc:(id)arg2 callback:(id /* block */)arg3 failback:(id /* block */)arg4;
+ (id)preloadFeedFromVC:(id)arg1;
+ (id)preloadFeedFromVC:(id)arg1 config:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (id)preloadDataItemForEnryptId:(id)arg1;
- (void)preloadFeed:(id)arg1 complete:(id /* block */)arg2;
- (void)tryNextFetch;
- (void)fetchFinishWithFailed:(id)arg1;
- (void)onGetCommentDetailWithEncryptId:(id)arg1 dataItem:(id)arg2;
- (BOOL)isOnWifi;
- (id)caches;
- (void)setCaches:(id)arg1;
- (long long)totalFetchCount;
- (void)setTotalFetchCount:(long long)arg1;
- (long long)matchCount;
- (void)setMatchCount:(long long)arg1;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (long long)pendingCount;
- (void)setPendingCount:(long long)arg1;
- (id)runningTask;
- (void)setRunningTask:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (unsigned long long)preFetchTime;
- (void)setPreFetchTime:(unsigned long long)arg1;
- (BOOL)invokeTimer;
- (void)setInvokeTimer:(BOOL)arg1;
- (void).cxx_destruct;
@end

