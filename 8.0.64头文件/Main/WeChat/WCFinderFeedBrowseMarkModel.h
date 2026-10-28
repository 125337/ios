@interface WCFinderFeedBrowseMarkModel : NSObject <PBCoding>
{
    NSString * _feedId; // +0x8
    long long _startWatchingTs; // +0x10
    long long _endWatchingTs; // +0x18
}
+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_startWatchingTs;
+ (void)PBArrayAdd_endWatchingTs;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)lastPlayInterval;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (long long)startWatchingTs;
- (void)setStartWatchingTs:(long long)arg1;
- (long long)endWatchingTs;
- (void)setEndWatchingTs:(long long)arg1;
- (void).cxx_destruct;
@end
