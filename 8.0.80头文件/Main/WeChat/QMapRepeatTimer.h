@interface QMapRepeatTimer : NSObject
{
    BOOL _addedInToRunloop; // +0x8
    unsigned long long _repeatCount; // +0x10
    unsigned long long _firedCount; // +0x18
    NSTimer * _timer; // +0x20
    double _timeInterval; // +0x28
    id /* block */ _block; // +0x30
}
- (BOOL)isOutOfMaxRetry;
- (void)handleTimerFire;
- (void)startTimerImmediately:(BOOL)arg1;
- (void)invalidate;
- (void)runImmediately;
- (void)run;
- (void)setupTimer;
- (id)initWithTimeInterval:(double)arg1 repeatCount:(unsigned long long)arg2 block:(id /* block */)arg3;
- (unsigned long long)repeatCount;
- (void)setRepeatCount:(unsigned long long)arg1;
- (unsigned long long)firedCount;
- (void)setFiredCount:(unsigned long long)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)addedInToRunloop;
- (void)setAddedInToRunloop:(BOOL)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
