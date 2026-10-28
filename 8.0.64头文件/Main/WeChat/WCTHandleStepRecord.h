@interface WCTHandleStepRecord : NSObject
{
    int _stepCount; // +0x8
    double _totalTime; // +0x10
    NSDate * _startTime; // +0x18
}
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (int)stepCount;
- (void)setStepCount:(int)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (void).cxx_destruct;
@end
