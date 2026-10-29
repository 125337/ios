@interface WCFinderOtherTabPrefetchManager : NSObject
{
    NSMutableArray * _prefetchQueue; // +0x8
    NSMutableSet * _requestingTabSet; // +0x10
    NSDictionary * _conflictTabMap; // +0x18
}
- (void)prefetchOtherTabAtProperTime:(int)arg1;
- (void)startRequestNewDataWithPullType:(unsigned long long)arg1 tabType:(int)arg2;
- (void)requestNewDataFinishWithPullType:(unsigned long long)arg1 tabType:(int)arg2;
- (void)prefetchIfOk;
- (long long)convertToTimelineTabType:(int)arg1;
- (void)prefetchImmediatelyWithTab:(int)arg1;
- (id)redDotPathWithTabType:(int)arg1;
- (id)prefetchQueue;
- (id)requestingTabSet;
- (id)conflictTabMap;
- (void)setPrefetchQueue:(id)arg1;
- (void)setRequestingTabSet:(id)arg1;
- (void)setConflictTabMap:(id)arg1;
- (void).cxx_destruct;
@end

