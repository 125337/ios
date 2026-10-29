@interface WCFinderOuterPreloadManager : NSObject
{
    WCFinderLRUCache * _lruCache; // +0x8
}
- (void)addOuterPreloadTask:(id)arg1;
- (void)addOuterPreloadTaskArray:(id)arg1;
- (void)saveAllTasks;
- (id)outerPreloadTaskWithTid:(id)arg1;
- (id)lruCache;
- (void)setLruCache:(id)arg1;
- (void).cxx_destruct;
@end

