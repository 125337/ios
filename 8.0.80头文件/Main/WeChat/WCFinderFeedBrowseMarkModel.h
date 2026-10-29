@interface WCFinderFeedBrowseMarkModel : NSObject <PBCoding>
{
    BOOL _isCacheFeed; // +0x8
    NSString * _feedId; // +0x10
    NSString * _mediaPath; // +0x18
    long long _startWatchingTs; // +0x20
    long long _endWatchingTs; // +0x28
}
+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_startWatchingTs;
+ (void)PBArrayAdd_endWatchingTs;
+ (void)PBArrayAdd_mediaPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)lastPlayInterval;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)mediaPath;
- (void)setMediaPath:(id)arg1;
- (long long)startWatchingTs;
- (void)setStartWatchingTs:(long long)arg1;
- (long long)endWatchingTs;
- (void)setEndWatchingTs:(long long)arg1;
- (BOOL)isCacheFeed;
- (void)setIsCacheFeed:(BOOL)arg1;
- (void).cxx_destruct;
@end
