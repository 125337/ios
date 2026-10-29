@interface QDrawMonitor : NSObject
{
    BOOL _exitThread; // +0x8
    unsigned long long _logid; // +0x10
    double _initTimeStamp; // +0x18
    double _beforeTimeStamp; // +0x20
    double _afterTimeStamp; // +0x28
    NSThread * _monitorThread; // +0x30
    NSTimer * _timer; // +0x38
}
- (id)init;
- (void)stop;
- (void)doStopThread;
- (void)onBeforeDrawframe;
- (void)preReportBefore:(id)arg1;
- (void)doPreReport:(id)arg1;
- (void)onAfterDrawframeWithBlock:(id /* block */)arg1;
- (void)reportAfter:(id)arg1;
- (void)threadStart:(id)arg1;
- (void)increaseLogid;
- (unsigned long long)logid;
- (void)setLogid:(unsigned long long)arg1;
- (double)initTimeStamp;
- (void)setInitTimeStamp:(double)arg1;
- (double)beforeTimeStamp;
- (void)setBeforeTimeStamp:(double)arg1;
- (double)afterTimeStamp;
- (void)setAfterTimeStamp:(double)arg1;
- (id)monitorThread;
- (void)setMonitorThread:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)exitThread;
- (void)setExitThread:(BOOL)arg1;
- (void).cxx_destruct;
@end

