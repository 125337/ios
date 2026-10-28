@interface MMLiveQcPollActivityFeed : NSObject
{
    MMLiveQcPoll * _poll; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    OrderedDictionary * _activities; // +0x18
    unsigned long long _exposureUnixEpochTime; // +0x20
}
- (id)initWithPoll:(id)arg1 dataItem:(id)arg2;
- (void)showQuestion:(id)arg1;
- (void)markFirstResponseSelectedForQuestion:(id)arg1;
- (void)enterResponse:(id)arg1 forQuestion:(id)arg2;
- (id)createExtStatsFeed;
- (id)exposureExtStatsForActivity:(id)arg1 atIndex:(unsigned int)arg2 responseTrace:(id)arg3;
- (id)invocationExtStatsForActivity:(id)arg1 atIndex:(unsigned int)arg2 responseTrace:(id)arg3;
- (id)pollExposureEndExtStatsWithUnixEpochTime:(unsigned long long)arg1 atIndex:(unsigned int)arg2 responseTrace:(id)arg3;
- (id)poll;
- (void)setPoll:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)activities;
- (void)setActivities:(id)arg1;
- (unsigned long long)exposureUnixEpochTime;
- (void)setExposureUnixEpochTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
