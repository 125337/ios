@interface WCSamplingConfig : NSObject
{
    BOOL _isSamplingEnabled; // +0x8
    BOOL _isSamplingAllCases; // +0x9
    BOOL _reportToMMData; // +0xa
    BOOL _reportCallStack; // +0xb
    unsigned int _reportToMMDataInterval; // +0xc
    unsigned int _reportCallStackInterval; // +0x10
    unsigned int _reportCallStackLagLimit; // +0x14
    unsigned int _traceVertexHangMs; // +0x18
    unsigned int _traceFragmentHangMs; // +0x1c
    unsigned int _traceEncodeHangMs; // +0x20
    unsigned int _traceGPUHangMs; // +0x24
}
- (id)initWithXLabConfig:(id)arg1;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)isSamplingEnabled;
- (void)setIsSamplingEnabled:(BOOL)arg1;
- (BOOL)isSamplingAllCases;
- (void)setIsSamplingAllCases:(BOOL)arg1;
- (BOOL)reportToMMData;
- (void)setReportToMMData:(BOOL)arg1;
- (BOOL)reportCallStack;
- (void)setReportCallStack:(BOOL)arg1;
- (unsigned int)reportToMMDataInterval;
- (void)setReportToMMDataInterval:(unsigned int)arg1;
- (unsigned int)reportCallStackInterval;
- (void)setReportCallStackInterval:(unsigned int)arg1;
- (unsigned int)reportCallStackLagLimit;
- (void)setReportCallStackLagLimit:(unsigned int)arg1;
- (unsigned int)traceVertexHangMs;
- (void)setTraceVertexHangMs:(unsigned int)arg1;
- (unsigned int)traceFragmentHangMs;
- (void)setTraceFragmentHangMs:(unsigned int)arg1;
- (unsigned int)traceEncodeHangMs;
- (void)setTraceEncodeHangMs:(unsigned int)arg1;
- (unsigned int)traceGPUHangMs;
- (void)setTraceGPUHangMs:(unsigned int)arg1;
@end
