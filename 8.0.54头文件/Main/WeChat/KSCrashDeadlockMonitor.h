@interface KSCrashDeadlockMonitor : NSObject
{
    BOOL _awaitingResponse; // +0x8
    NSThread * _monitorThread; // +0x10
}
- (id)init;
- (void)cancel;
- (void)watchdogPulse;
- (void)watchdogAnswer;
- (void)handleDeadlock;
- (void)runMonitor;
- (id)monitorThread;
- (void)setMonitorThread:(id)arg1;
- (BOOL)awaitingResponse;
- (void)setAwaitingResponse:(BOOL)arg1;
- (void).cxx_destruct;
@end

