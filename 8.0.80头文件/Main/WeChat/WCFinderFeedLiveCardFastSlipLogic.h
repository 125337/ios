@interface WCFinderFeedLiveCardFastSlipLogic : NSObject
{
    double _lastToLiveTime; // +0x8
}
+ (void)clearAllPersistedEvents;
+ (id)mmkv;
+ (id)loadAllEvents;
+ (void)saveAllEvents:(id)arg1;
+ (id)loadAndPruneEventsWithNow:(double)arg1 windowSeconds:(double)arg2;
- (void)recordFeedSwitchToLive;
- (void)recordFeedSwitchDownFromLive;
- (long long)consecutiveDownwardCountWithinWindowHours:(long long)arg1;
- (void)clearPersistedEvents;
- (double)lastToLiveTime;
- (void)setLastToLiveTime:(double)arg1;
@end
