@interface MAVInputAnimation : NSObject
{
    long long _startMs; // +0x8
    long long _endMs; // +0x10
    long long _interpolator; // +0x18
}
- (id)init;
- (long long)startMs;
- (void)setStartMs:(long long)arg1;
- (long long)endMs;
- (void)setEndMs:(long long)arg1;
- (long long)interpolator;
- (void)setInterpolator:(long long)arg1;
@end

