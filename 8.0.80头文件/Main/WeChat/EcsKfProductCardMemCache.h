@interface EcsKfProductCardMemCache : NSObject
{
    MMLRUCache * _cache; // +0x8
}
- (id)init;
- (id)convertResultForTalker:(id)arg1 msgSvrId:(long long)arg2;
- (BOOL)hasCacheForTalker:(id)arg1;
- (void)setConvertResult:(id)arg1 talker:(id)arg2 msgSvrId:(long long)arg3;
- (void)setConvertResultIfAbsent:(id)arg1 talker:(id)arg2 msgSvrId:(long long)arg3;
- (void)removeWithTalker:(id)arg1 msgSvrId:(long long)arg2;
- (void)removeByTalker:(id)arg1;
- (void)clear;
- (id)innerCacheForTalker:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)msgKeyWithMsgSvrId:(long long)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end
