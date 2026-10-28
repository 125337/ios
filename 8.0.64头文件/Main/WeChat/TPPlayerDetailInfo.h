@interface TPPlayerDetailInfo : NSObject
{
    long long _type; // +0x8
    long long _timeSince1970Ms; // +0x10
    long long _elapsedTimeSinceBootMs; // +0x18
}
- (id)init;
- (id)initWithType:(long long)arg1 utcTimeMs:(long long)arg2 elapsedTimeSinceBootMs:(long long)arg3;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)timeSince1970Ms;
- (void)setTimeSince1970Ms:(long long)arg1;
- (long long)elapsedTimeSinceBootMs;
- (void)setElapsedTimeSinceBootMs:(long long)arg1;
@end
