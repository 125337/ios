@interface JSApmABTestItem : NSObject <IExptServiceExt>
{
    BOOL _enabled; // +0x8
    BOOL _watchdogEnabled; // +0x9
    BOOL _powerEnabled; // +0xa
    BOOL _mainThreadEnabled; // +0xb
    BOOL _runLoopLongTaskEnabled; // +0xc
    BOOL _runLoopHangEnabled; // +0xd
    long long _watchdogLimit; // +0x10
    long long _cpuUsageLimit; // +0x18
    long long _cpuDurationLimit; // +0x20
    unsigned long long _tickCountLimit; // +0x28
    long long _ver; // +0x30
    long long _runLoopCheckPeriod; // +0x38
    long long _runLoopLongTaskThreshold; // +0x40
    long long _runLoopHangThreshold; // +0x48
}
- (id)keyWith:(id)arg1;
- (BOOL)boolForKey:(id)arg1 valeIfUndefined:(BOOL)arg2;
- (BOOL)isEnable:(id)arg1 valeIfUndefined:(BOOL)arg2;
- (BOOL)boolWithKey:(id)arg1 undef:(BOOL)arg2;
- (long long)integerWithKey:(id)arg1 undef:(long long)arg2;
- (void)setup;
- (id)description;
- (long long)watchdogLimit;
- (void)setWatchdogLimit:(long long)arg1;
- (long long)cpuUsageLimit;
- (void)setCpuUsageLimit:(long long)arg1;
- (long long)cpuDurationLimit;
- (void)setCpuDurationLimit:(long long)arg1;
- (unsigned long long)tickCountLimit;
- (void)setTickCountLimit:(unsigned long long)arg1;
- (long long)ver;
- (void)setVer:(long long)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)watchdogEnabled;
- (void)setWatchdogEnabled:(BOOL)arg1;
- (BOOL)powerEnabled;
- (void)setPowerEnabled:(BOOL)arg1;
- (BOOL)mainThreadEnabled;
- (void)setMainThreadEnabled:(BOOL)arg1;
- (BOOL)runLoopLongTaskEnabled;
- (void)setRunLoopLongTaskEnabled:(BOOL)arg1;
- (BOOL)runLoopHangEnabled;
- (void)setRunLoopHangEnabled:(BOOL)arg1;
- (long long)runLoopCheckPeriod;
- (void)setRunLoopCheckPeriod:(long long)arg1;
- (long long)runLoopLongTaskThreshold;
- (void)setRunLoopLongTaskThreshold:(long long)arg1;
- (long long)runLoopHangThreshold;
- (void)setRunLoopHangThreshold:(long long)arg1;
@end

