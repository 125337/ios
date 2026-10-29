@interface PAGVideoRange : NSObject
{
    long long _startTime; // +0x8
    long long _endTime; // +0x10
    long long _playDuration; // +0x18
    long long _reversed; // +0x20
}
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (long long)playDuration;
- (void)setPlayDuration:(long long)arg1;
- (long long)reversed;
- (void)setReversed:(long long)arg1;
@end

