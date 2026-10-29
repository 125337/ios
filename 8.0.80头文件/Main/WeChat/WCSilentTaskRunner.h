@interface WCSilentTaskRunner : NSObject
{
    BOOL _enableStackReport; // +0x8
    unsigned int _idleCount; // +0xc
    NSString * _name; // +0x10
    NSThread * _nsThread; // +0x18
    MMStackReportConnection * _stackReportConnection; // +0x20
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
- (id)stackReportConnection;
- (void)setStackReportConnection:(id)arg1;
- (BOOL)enableStackReport;
- (void)setEnableStackReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
