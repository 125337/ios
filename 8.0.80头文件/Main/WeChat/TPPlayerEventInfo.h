@interface TPPlayerEventInfo : NSObject
{
    long long _eventId; // +0x8
    long long _eventTimeSinceBootMs; // +0x10
    long long _eventTimeSince1970Ms; // +0x18
}
- (id)init;
- (id)initWithEventId:(long long)arg1;
- (long long)eventId;
- (void)setEventId:(long long)arg1;
- (long long)eventTimeSinceBootMs;
- (void)setEventTimeSinceBootMs:(long long)arg1;
- (long long)eventTimeSince1970Ms;
- (void)setEventTimeSince1970Ms:(long long)arg1;
@end
