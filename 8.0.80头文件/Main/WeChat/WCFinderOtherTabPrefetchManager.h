@interface WCFinderOtherTabPrefetchManager : NSObject
{
    BOOL _hasEnteredFollowTabInCurrentFinderSession; // +0x8
    BOOL _isFollowTabPollingPrefetching; // +0x9
    BOOL _isInFinderSceneForFollowTabPolling; // +0xa
    NSMutableArray * _prefetchQueue; // +0x10
    NSMutableSet * _requestingTabSet; // +0x18
    NSDictionary * _conflictTabMap; // +0x20
    NSTimer * _followTabPrefetchPollingTimer; // +0x28
    unsigned long long _lastFollowTabPrefetchTimestamp; // +0x30
}
- (void)dealloc;
- (void)prefetchOtherTabAtProperTime:(int)arg1;
- (void)startRequestNewDataWithPullType:(unsigned long long)arg1 tabType:(int)arg2;
- (void)requestNewDataFinishWithPullType:(unsigned long long)arg1 tabType:(int)arg2;
- (void)startFollowTabPrefetchPollingIfNeededWithActiveTabType:(int)arg1;
- (void)stopFollowTabPrefetchPollingForEnterFollowTab;
- (void)stopFollowTabPrefetchPollingForExitFinder;
- (void)onFollowTabPrefetchPollingConfigUpdated;
- (void)scheduleFollowTabPrefetchPollingIfNeeded;
- (BOOL)shouldContinueFollowTabPrefetchPolling;
- (void)startFollowTabPrefetchPollingTimerWithDelay:(double)arg1;
- (void)invalidateFollowTabPrefetchPollingTimer;
- (double)nextFollowTabPrefetchPollingDelayWithInterval:(unsigned long long)arg1;
- (void)prefetchFollowTabForPolling;
- (long long)followTabPrefetchPollingInterval;
- (unsigned long long)followTabPrefetchValidTime;
- (id)currentFinderTimelineTabViewController;
- (void)prefetchIfOk;
- (void)prefetchImmediatelyWithTab:(int)arg1;
- (void)prefetchNativeDramaImmediately;
- (BOOL)isNativeDramaFirstScreenPrefetching;
- (void)clearNativeDramaFirstScreenCache;
- (unsigned long long)nativeDramaFirstScreenCacheTimestamp;
- (BOOL)hasValidNativeDramaFirstScreenCacheWithFirstObjectTid:(id)arg1;
- (unsigned long long)nativeDramaFirstScreenCacheObjectCount;
- (BOOL)hasConflictRequestForTabType:(int)arg1;
- (id)redDotPathWithTabType:(int)arg1;
- (id)prefetchQueue;
- (id)requestingTabSet;
- (id)conflictTabMap;
- (void)setPrefetchQueue:(id)arg1;
- (void)setRequestingTabSet:(id)arg1;
- (void)setConflictTabMap:(id)arg1;
- (id)followTabPrefetchPollingTimer;
- (void)setFollowTabPrefetchPollingTimer:(id)arg1;
- (unsigned long long)lastFollowTabPrefetchTimestamp;
- (void)setLastFollowTabPrefetchTimestamp:(unsigned long long)arg1;
- (BOOL)hasEnteredFollowTabInCurrentFinderSession;
- (void)setHasEnteredFollowTabInCurrentFinderSession:(BOOL)arg1;
- (BOOL)isFollowTabPollingPrefetching;
- (void)setIsFollowTabPollingPrefetching:(BOOL)arg1;
- (BOOL)isInFinderSceneForFollowTabPolling;
- (void)setIsInFinderSceneForFollowTabPolling:(BOOL)arg1;
- (void).cxx_destruct;
@end
