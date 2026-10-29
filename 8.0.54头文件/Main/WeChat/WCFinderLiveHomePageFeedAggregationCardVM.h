@interface WCFinderLiveHomePageFeedAggregationCardVM : WCFinderLiveGenericFeedVM <WCFinderLiveHomePageFeedExt>
{
    BOOL _hasLoadHotSalePag; // +0x8
    WCFinderLiveEntertainmentChannelsViewController * _cacheChannelsVC; // +0x10
    PAGFile * _hotSalePAGFile; // +0x18
    MMTimer * _channelsVCDestroyTimer; // +0x20
    NSMutableSet * _hotSalePAGPlaySet; // +0x28
}
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;
- (void)checkUpdateAggregationPreloadConf;
- (unsigned long long)curLoopPageIndex;
- (void)bindCacheChannelsVC:(id)arg1;
- (void)onCacheChannelsVCReturn;
- (void)cleanCacheChannelsVC;
- (void)checkPreloadOnCardDisplay;
- (void)loadHotSalePagIfNeeded;
- (BOOL)hasProductPlayedHotSalesAnimation:(id)arg1;
- (void)markProductPlayedHotSalesAnimation:(id)arg1;
- (id)currentPageProductIdList;
- (void)onFinderLiveHomePageFeedFetchEcConfig;
- (id)cacheChannelsVC;
- (void)setCacheChannelsVC:(id)arg1;
- (id)hotSalePAGFile;
- (void)setHotSalePAGFile:(id)arg1;
- (id)channelsVCDestroyTimer;
- (void)setChannelsVCDestroyTimer:(id)arg1;
- (BOOL)hasLoadHotSalePag;
- (void)setHasLoadHotSalePag:(BOOL)arg1;
- (id)hotSalePAGPlaySet;
- (void)setHotSalePAGPlaySet:(id)arg1;
- (void).cxx_destruct;
@end

