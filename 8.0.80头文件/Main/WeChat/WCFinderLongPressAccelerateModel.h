@interface WCFinderLongPressAccelerateModel : NSObject
{
    long long _screenType; // +0x8
    double _playRate; // +0x10
    double _duration; // +0x18
    double _videoDurationTime; // +0x20
    double _timePointBeforeLpa; // +0x28
    double _timePointAfterLpa; // +0x30
    unsigned long long _lpaPlayTimes; // +0x38
    long long _accelerateLeaveType; // +0x40
}
- (long long)screenType;
- (void)setScreenType:(long long)arg1;
- (double)playRate;
- (void)setPlayRate:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)videoDurationTime;
- (void)setVideoDurationTime:(double)arg1;
- (double)timePointBeforeLpa;
- (void)setTimePointBeforeLpa:(double)arg1;
- (double)timePointAfterLpa;
- (void)setTimePointAfterLpa:(double)arg1;
- (unsigned long long)lpaPlayTimes;
- (void)setLpaPlayTimes:(unsigned long long)arg1;
- (long long)accelerateLeaveType;
- (void)setAccelerateLeaveType:(long long)arg1;
@end
