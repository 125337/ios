@interface WCSilentTaskRunner : NSObject
{
    _opaque_pthread_t * _pThread; // +0x8
    BOOL _enableStackReport; // +0x10
    unsigned int _idleCount; // +0x14
    NSString * _name; // +0x18
    NSThread * _nsThread; // +0x20
    MMCPUTimeProfiler * _cpuTimeProfiler; // +0x28
    MMStackReportConnection * _stackReportConnection; // +0x30
}
- (id)initWithName:(id)arg1;
- (void)start;
- (void)routine;
- (double)normalizeSleepTime:(double)arg1 floor:(double)arg2 ceiling:(double)arg3;
- (void)reportOverTimeEvent:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)nsThread;
- (void)setNsThread:(id)arg1;
- (unsigned int)idleCount;
- (void)setIdleCount:(unsigned int)arg1;
- (id)cpuTimeProfiler;
- (void)setCpuTimeProfiler:(id)arg1;
- (id)stackReportConnection;
- (void)setStackReportConnection:(id)arg1;
- (BOOL)enableStackReport;
- (void)setEnableStackReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
