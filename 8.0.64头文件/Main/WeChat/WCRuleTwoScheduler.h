@interface WCRuleTwoScheduler : WCBaseScheduler
{
    double _lapseRate; // +0x8
    double _sliceTime; // +0x10
    double _secondFuncLapseRate; // +0x18
    double _limitTimes; // +0x20
    double _connectPointX; // +0x28
}
- (double)connectPointX;
- (double)sliceTime;
- (double)lapseRate;
- (double)secondFuncLapseRate;
- (double)limitTimes;
- (double)getFuncLapseRate:(CGPoint)arg1;
- (double)getFirstFuncYWithX:(double)arg1;
- (double)getNextDownloadTimeWhenPlaying;
- (void)setLapseRate:(double)arg1;
- (void)setSliceTime:(double)arg1;
- (void)setSecondFuncLapseRate:(double)arg1;
- (void)setLimitTimes:(double)arg1;
- (void)setConnectPointX:(double)arg1;
@end
