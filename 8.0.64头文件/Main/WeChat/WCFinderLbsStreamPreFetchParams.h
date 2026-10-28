@interface WCFinderLbsStreamPreFetchParams : WCFinderLiveStreamPreFetchBaseParams
{
    BOOL _onlyFollowFeed; // +0x48
    NSString * _jumpBuffer; // +0x50
}
- (id)description;
- (id)prefetchCacheHashKey;
- (BOOL)onlyFollowFeed;
- (void)setOnlyFollowFeed:(BOOL)arg1;
- (id)jumpBuffer;
- (void)setJumpBuffer:(id)arg1;
- (void).cxx_destruct;
@end
