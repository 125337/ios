@interface EcsKfProductCardRefresher : NSObject
{
    EcsKfProductCardStorage * _storage; // +0x8
    EcsKfProductCardMemCache * _memCache; // +0x10
    EcsKfProductCardFetcher * _fetcher; // +0x18
    MMLRUCache * _refreshFailTimeCache; // +0x20
}
- (id)initWithStorage:(id)arg1 memCache:(id)arg2 fetcher:(id)arg3;
- (void)refreshConvertResultWithTalker:(id)arg1 msgSvrId:(long long)arg2 msgCreateTime:(long long)arg3 initialConvertResult:(id)arg4 onUpdate:(id /* block */)arg5;
- (void)handleCacheConvertResult:(id)arg1 source:(unsigned long long)arg2 talker:(id)arg3 msgSvrId:(long long)arg4 msgCreateTime:(long long)arg5 initialConvertResult:(id)arg6 refreshKey:(id)arg7 onUpdate:(id /* block */)arg8;
- (void)fetchIfNeededWithTalker:(id)arg1 msgSvrId:(long long)arg2 msgCreateTime:(long long)arg3 convertResult:(id)arg4 refreshKey:(id)arg5 nowMs:(long long)arg6 onUpdate:(id /* block */)arg7;
- (void)fetchWithTalker:(id)arg1 msgSvrId:(long long)arg2 msgCreateTime:(long long)arg3 convertResult:(id)arg4 refreshKey:(id)arg5 onUpdate:(id /* block */)arg6;
- (void)notifyConvertResult:(id)arg1 source:(unsigned long long)arg2 onUpdate:(id /* block */)arg3;
- (id)refreshKeyWithTalker:(id)arg1 msgSvrId:(long long)arg2;
- (BOOL)shouldSkipBySuccessTTLWithConvertResult:(id)arg1 nowMs:(long long)arg2;
- (BOOL)shouldSkipByFailTTLWithKey:(id)arg1 nowMs:(long long)arg2;
- (void)markRefreshFailWithKey:(id)arg1 nowMs:(long long)arg2;
- (void)clearRefreshFailWithKey:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (id)memCache;
- (void)setMemCache:(id)arg1;
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (id)refreshFailTimeCache;
- (void)setRefreshFailTimeCache:(id)arg1;
- (void).cxx_destruct;
@end
