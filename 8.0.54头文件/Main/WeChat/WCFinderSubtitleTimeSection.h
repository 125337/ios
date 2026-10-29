@interface WCFinderSubtitleTimeSection : NSObject
{
    unsigned long long _beginTimeInMs; // +0x8
    unsigned long long _endTimeInMs; // +0x10
}
- (id)initWithBeginTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (id)description;
- (unsigned long long)beginTimeInMs;
- (void)setBeginTimeInMs:(unsigned long long)arg1;
- (unsigned long long)endTimeInMs;
- (void)setEndTimeInMs:(unsigned long long)arg1;
@end

