@interface WCFImageDownloadQueue : NSObject
{
    NSLock * _lock; // +0x8
    long long _maxConcurrentCount; // +0x10
    long long _executingCount; // +0x18
    NSObject<OS_dispatch_queue> * _queue; // +0x20
    NSMutableOrderedSet * _operations; // +0x28
    NSMutableDictionary * _dict; // +0x30
    long long _maxPreloadCount; // +0x38
}
- (id)init;
- (void)addOperation:(id)arg1;
- (void)addToDict:(id)arg1;
- (void)removeFromDict:(id)arg1;
- (id)operationForKey:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)removeOperation:(id)arg1;
- (void)asyncRemoveOperation:(id)arg1;
- (void)schedule;
- (id)removeAndSchedule:(id)arg1;
- (void)run;
- (long long)maxConcurrentCount;
- (void)setMaxConcurrentCount:(long long)arg1;
- (long long)executingCount;
- (void)setExecutingCount:(long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)operations;
- (void)setOperations:(id)arg1;
- (id)dict;
- (void)setDict:(id)arg1;
- (long long)maxPreloadCount;
- (void)setMaxPreloadCount:(long long)arg1;
- (void).cxx_destruct;
@end

