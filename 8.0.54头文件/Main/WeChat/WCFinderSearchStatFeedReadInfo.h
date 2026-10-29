@interface WCFinderSearchStatFeedReadInfo : NSObject
{
    NSString * _feed_id; // +0x8
    unsigned long long _stay_time_ms; // +0x10
    unsigned long long _start_play_time_ms; // +0x18
}
- (void)mergeData:(id)arg1;
- (id)feed_id;
- (void)setFeed_id:(id)arg1;
- (unsigned long long)stay_time_ms;
- (void)setStay_time_ms:(unsigned long long)arg1;
- (unsigned long long)start_play_time_ms;
- (void)setStart_play_time_ms:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

