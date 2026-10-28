@interface WCFinderStreamHelper : NSObject
- (id)timelineFirstPageDataWithRedDotCtrlInfo:(id)arg1 tabType:(long long)arg2 isPrefetchScene:(BOOL)arg3 redDotRequestBlock:(id /* block */)arg4;
- (void)preloadFinderTimelineFirstFeed;
- (id)prefetchDataWithTabType:(long long)arg1;
- (id)getCommentDetailDataWithCtrlInfo:(id)arg1 tabType:(long long)arg2 isPrefetchScene:(BOOL)arg3 finishBlock:(id /* block */)arg4;
- (id)unreadDataWithTabType:(long long)arg1;
- (id)lastFeedCacheDataWithTabType:(long long)arg1;
- (id)readDataWithTabType:(long long)arg1;
@end
