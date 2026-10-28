@interface AmoebaTimerEventModel : NSObject
{
    unsigned long long _startTime; // +0x8
    unsigned long long _inTime; // +0x10
    unsigned long long _outTime; // +0x18
    unsigned long long _lastResueTime; // +0x20
    unsigned long long _lastPauseTime; // +0x28
    NSMutableDictionary * _params; // +0x30
}
- (id)init;
- (id)toString;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)inTime;
- (void)setInTime:(unsigned long long)arg1;
- (unsigned long long)outTime;
- (void)setOutTime:(unsigned long long)arg1;
- (unsigned long long)lastResueTime;
- (void)setLastResueTime:(unsigned long long)arg1;
- (unsigned long long)lastPauseTime;
- (void)setLastPauseTime:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
