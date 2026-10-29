@interface TPTimeTracker : NSObject
{
    NSDate * _beginDate; // +0x8
    long long _intervalMs; // +0x10
    unsigned long long _lastState; // +0x18
}
- (id)init;
- (long long)totalIntervalMs;
- (void)run;
- (void)pause;
- (void)stop;
- (void)invalidate;
- (id)beginDate;
- (void)setBeginDate:(id)arg1;
- (long long)intervalMs;
- (void)setIntervalMs:(long long)arg1;
- (unsigned long long)lastState;
- (void)setLastState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

