@interface WCSamplingStatData : NSObject
{
    double _maxGPUTimeMs; // +0x8
    double _maxVertexTimeMs; // +0x10
    double _maxFragmentTimeMs; // +0x18
    double _maxEncodeTimeMs; // +0x20
    unsigned long long _gpuLagCount; // +0x28
    unsigned long long _vertexLagCount; // +0x30
    unsigned long long _fragmentLagCount; // +0x38
    unsigned long long _encodeLagCount; // +0x40
    unsigned long long _startTime; // +0x48
    unsigned long long _endTime; // +0x50
    double _totalGPUTimeMs; // +0x58
    double _totalEncodeTimeMs; // +0x60
    double _totalVertexTimeMs; // +0x68
    double _totalFragmentTimeMs; // +0x70
    unsigned long long _totalGPUCmdCount; // +0x78
    unsigned long long _totalVertexCmdCount; // +0x80
    unsigned long long _totalFragmentCmdCount; // +0x88
    unsigned long long _totalEncodeCmdCount; // +0x90
}
- (id)init;
- (void)updateWithSamplingTraceInfo:(id)arg1;
- (double)avgGPUTimeMs;
- (double)avgVertexTimeMs;
- (double)avgFragmentTimeMs;
- (double)avgEncodeTimeMs;
- (double)maxGPUTimeMs;
- (void)setMaxGPUTimeMs:(double)arg1;
- (double)maxVertexTimeMs;
- (void)setMaxVertexTimeMs:(double)arg1;
- (double)maxFragmentTimeMs;
- (void)setMaxFragmentTimeMs:(double)arg1;
- (double)maxEncodeTimeMs;
- (void)setMaxEncodeTimeMs:(double)arg1;
- (unsigned long long)gpuLagCount;
- (void)setGpuLagCount:(unsigned long long)arg1;
- (unsigned long long)vertexLagCount;
- (void)setVertexLagCount:(unsigned long long)arg1;
- (unsigned long long)fragmentLagCount;
- (void)setFragmentLagCount:(unsigned long long)arg1;
- (unsigned long long)encodeLagCount;
- (void)setEncodeLagCount:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (double)totalGPUTimeMs;
- (void)setTotalGPUTimeMs:(double)arg1;
- (double)totalEncodeTimeMs;
- (void)setTotalEncodeTimeMs:(double)arg1;
- (double)totalVertexTimeMs;
- (void)setTotalVertexTimeMs:(double)arg1;
- (double)totalFragmentTimeMs;
- (void)setTotalFragmentTimeMs:(double)arg1;
- (unsigned long long)totalGPUCmdCount;
- (void)setTotalGPUCmdCount:(unsigned long long)arg1;
- (unsigned long long)totalVertexCmdCount;
- (void)setTotalVertexCmdCount:(unsigned long long)arg1;
- (unsigned long long)totalFragmentCmdCount;
- (void)setTotalFragmentCmdCount:(unsigned long long)arg1;
- (unsigned long long)totalEncodeCmdCount;
- (void)setTotalEncodeCmdCount:(unsigned long long)arg1;
@end
