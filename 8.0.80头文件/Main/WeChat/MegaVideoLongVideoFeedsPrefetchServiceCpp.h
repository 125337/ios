@interface MegaVideoLongVideoFeedsPrefetchServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoLongVideoFeedsPrefetchService>
+ (id)getInstance;
- (void)checkPrefetchFeeds:(id)arg1;
- (void)checkPrefetchFeedsWithCallback:(id)arg1 onCompleted:(id /* block */)arg2;
- (id)getPrefetchResult:(BOOL)arg1;
- (void)clearCurrentPrefetchResult;
- (BOOL)clearPrefetchResultIfMatches:(id)arg1;
- (BOOL)isPrefetching;
- (void)getPrefetchResultAsync:(BOOL)arg1 onCompleted:(id /* block */)arg2;
- (id)getPrefetchReportSnapshot;
- (void)getPrefetchResultWithFacts:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)releasePrefetchWait:(id)arg1;
@end
