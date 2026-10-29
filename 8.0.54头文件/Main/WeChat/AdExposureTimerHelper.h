@interface AdExposureTimerHelper : NSObject
{
    BOOL _isStart; // +0x8
    AdTimerHelper * _timerHelper; // +0x10
    unsigned long long _totalExposureTime; // +0x18
    unsigned long long _disappearTime; // +0x20
    unsigned long long _disappearDuration; // +0x28
}
- (id)init;
- (void)start;
- (void)stop;
- (void)beginDisappear;
- (void)endDisappear;
- (unsigned long long)fetchExposureTime;
- (void)reset;
- (id)timerHelper;
- (void)setTimerHelper:(id)arg1;
- (unsigned long long)totalExposureTime;
- (void)setTotalExposureTime:(unsigned long long)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (unsigned long long)disappearTime;
- (void)setDisappearTime:(unsigned long long)arg1;
- (unsigned long long)disappearDuration;
- (void)setDisappearDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

