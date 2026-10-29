@interface MMFinderLiveContactCache : NSObject
{
    NSMutableDictionary * _cacheMap; // +0x8
}
- (id)init;
- (id)cacheKeyForLiveId:(unsigned long long)arg1 username:(id)arg2 scene:(unsigned long long)arg3;
- (id)contactForLiveId:(unsigned long long)arg1 username:(id)arg2 scene:(unsigned long long)arg3;
- (void)setContact:(id)arg1 forLiveId:(unsigned long long)arg2 username:(id)arg3 scene:(unsigned long long)arg4;
- (void)clearAll;
- (id)cacheMap;
- (void)setCacheMap:(id)arg1;
- (void).cxx_destruct;
@end
