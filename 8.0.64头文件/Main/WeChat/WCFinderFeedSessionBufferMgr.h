@interface WCFinderFeedSessionBufferMgr : NSObject
{
    MMLRUCache * _cache; // +0x8
    WCFinderWCDB * _finderDB; // +0x10
}
- (id)initWithFinderDB:(id)arg1;
- (BOOL)addSessionBufferWithTid:(id)arg1 scene:(int)arg2 sessionString:(id)arg3;
- (BOOL)addSessionBufferWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3 sessionString:(id)arg4;
- (BOOL)addSessionBufferArray:(id)arg1;
- (void)updateFeedExposeTime:(id)arg1 scene:(int)arg2 exposeTimeInMS:(unsigned long long)arg3;
- (void)updateFeedExposeTime:(id)arg1 scene:(int)arg2 exposeTimeInMS:(unsigned long long)arg3 extraKey:(id)arg4;
- (id)getSessionBufferWithTid:(id)arg1 scene:(int)arg2;
- (id)getSessionBufferWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)_cacheKeyWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)finderDB;
- (void)setFinderDB:(id)arg1;
- (void).cxx_destruct;
@end
