@interface MMGPUMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    unsigned int _traceVertexHangMs; // +0xc
    unsigned int _traceFragmentHangMs; // +0x10
    unsigned int _traceEncodeHangMs; // +0x14
    unsigned int _traceGPUHangMs; // +0x18
    unsigned int _checkTime; // +0x1c
    unsigned int _checkCount; // +0x20
    unsigned int _reportLimit; // +0x24
    double _criticalUsage; // +0x28
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_traceVertexHangMs;
+ (void)PBArrayAdd_traceFragmentHangMs;
+ (void)PBArrayAdd_traceEncodeHangMs;
+ (void)PBArrayAdd_traceGPUHangMs;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (id)generateEventConfig;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (unsigned int)traceVertexHangMs;
- (void)setTraceVertexHangMs:(unsigned int)arg1;
- (unsigned int)traceFragmentHangMs;
- (void)setTraceFragmentHangMs:(unsigned int)arg1;
- (unsigned int)traceEncodeHangMs;
- (void)setTraceEncodeHangMs:(unsigned int)arg1;
- (unsigned int)traceGPUHangMs;
- (void)setTraceGPUHangMs:(unsigned int)arg1;
- (unsigned int)checkTime;
- (void)setCheckTime:(unsigned int)arg1;
- (unsigned int)checkCount;
- (void)setCheckCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
- (double)criticalUsage;
- (void)setCriticalUsage:(double)arg1;
@end

