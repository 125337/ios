@interface Character : NSObject <NSCopying>
{
    long long _startTime; // +0x8
    long long _duration; // +0x10
    long long _start; // +0x18
    long long _end; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (long long)start;
- (void)setStart:(long long)arg1;
- (long long)end;
- (void)setEnd:(long long)arg1;
@end
