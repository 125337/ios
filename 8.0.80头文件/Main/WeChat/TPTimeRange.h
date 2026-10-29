@interface TPTimeRange : NSObject
{
    long long _startTimeMs; // +0x8
    long long _endTimeMs; // +0x10
}
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)endTimeMs;
- (void)setEndTimeMs:(long long)arg1;
@end
