@interface WCRuleOneScheduler : WCBaseScheduler
{
    double _lapseRate; // +0x8
    double _sliceTime; // +0x10
}
- (double)lapseRate;
- (double)sliceTime;
- (double)getNextDownloadTimeWhenPlaying;
- (void)setLapseRate:(double)arg1;
- (void)setSliceTime:(double)arg1;
@end
