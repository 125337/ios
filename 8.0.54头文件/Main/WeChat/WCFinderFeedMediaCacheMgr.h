@interface WCFinderFeedMediaCacheMgr : NSObject <WCFinderCacheDelegate>
{
    NSMutableSet * _tidSet; // +0x8
    NSArray * _cacheStrategyList; // +0x10
    NSMutableDictionary * _metricDict; // +0x18
    NSString * _contextId; // +0x20
    NSMutableArray * _watchList; // +0x28
}
- (void)readMediaFileWithTid:(id)arg1 fileSize:(unsigned long long)arg2 commentScene:(int)arg3;
- (id)tidSet;
- (id)cacheStrategyList;
- (id)metricDict;
- (id)watchList;
- (void)report;
- (void)resetAll;
- (id)getCacheMetricsWithStratedy:(id)arg1;
- (void)printExptLog;
- (void)cache:(id)arg1 didEvictObject:(id)arg2;
- (void)setTidSet:(id)arg1;
- (void)setCacheStrategyList:(id)arg1;
- (void)setMetricDict:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (void)setWatchList:(id)arg1;
- (void).cxx_destruct;
@end

