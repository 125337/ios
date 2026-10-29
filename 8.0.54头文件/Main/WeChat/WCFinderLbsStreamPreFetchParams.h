@interface WCFinderLbsStreamPreFetchParams : WCFinderLiveStreamPreFetchBaseParams
{
    BOOL _onlyFollowFeed; // +0x48
}
- (id)description;
- (id)prefetchCacheHashKey;
- (BOOL)onlyFollowFeed;
- (void)setOnlyFollowFeed:(BOOL)arg1;
@end

