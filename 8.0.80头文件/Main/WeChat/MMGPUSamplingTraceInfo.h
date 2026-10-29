@interface MMGPUSamplingTraceInfo : NSObject <NSCopying>
{
    unsigned int _type; // +0x8
    unsigned int _sampleCount; // +0xc
    int _startOfVertexSampleIndex; // +0x10
    int _endOfVertexSampleIndex; // +0x14
    int _startOfFragmentSampleIndex; // +0x18
    int _endOfFragmentSampleIndex; // +0x1c
    int _startOfEncoderSampleIndex; // +0x20
    int _endOfEncoderSampleIndex; // +0x24
    double _time; // +0x28
    id _timestampCounterBuffer; // +0x30
    MMMetricsStackInfo * _stack; // +0x38
    unsigned long long _stackHash; // +0x40
    NSString * _tag; // +0x48
    double _vertexTimeMs; // +0x50
    double _fragmentTimeMs; // +0x58
    double _gpuCostTimeMs; // +0x60
    double _encodeTimeMs; // +0x68
    TimeLapse _gpuTimestamp; // +0x70
    TimeLapse _cpuTimestamp; // +0x80
}
+ (unsigned long long)GetAdjustGPUTime:(TimeLapse)arg1 cpuLapse:(TimeLapse)arg2 gpuTime:(unsigned long long)arg3;
- (id)init;
- (id)sampleKey;
- (unsigned long long)stackHash;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markStartPointWithDevice:(id)arg1;
- (void)markEndPointWithDevice:(id)arg1;
- (unsigned long long)adjustGPUTime:(unsigned long long)arg1;
- (BOOL)isVertexSampleIndexValid;
- (BOOL)isFragmentSampleIndexValid;
- (BOOL)isEncoderSampleIndexValid;
- (id)renderSample;
- (double)time;
- (void)setTime:(double)arg1;
- (id)timestampCounterBuffer;
- (void)setTimestampCounterBuffer:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (TimeLapse)gpuTimestamp;
- (void)setGpuTimestamp:(TimeLapse)arg1;
- (TimeLapse)cpuTimestamp;
- (void)setCpuTimestamp:(TimeLapse)arg1;
- (unsigned int)sampleCount;
- (void)setSampleCount:(unsigned int)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (void)setStackHash:(unsigned long long)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (int)startOfVertexSampleIndex;
- (void)setStartOfVertexSampleIndex:(int)arg1;
- (int)endOfVertexSampleIndex;
- (void)setEndOfVertexSampleIndex:(int)arg1;
- (int)startOfFragmentSampleIndex;
- (void)setStartOfFragmentSampleIndex:(int)arg1;
- (int)endOfFragmentSampleIndex;
- (void)setEndOfFragmentSampleIndex:(int)arg1;
- (int)startOfEncoderSampleIndex;
- (void)setStartOfEncoderSampleIndex:(int)arg1;
- (int)endOfEncoderSampleIndex;
- (void)setEndOfEncoderSampleIndex:(int)arg1;
- (double)vertexTimeMs;
- (void)setVertexTimeMs:(double)arg1;
- (double)fragmentTimeMs;
- (void)setFragmentTimeMs:(double)arg1;
- (double)gpuCostTimeMs;
- (void)setGpuCostTimeMs:(double)arg1;
- (double)encodeTimeMs;
- (void)setEncodeTimeMs:(double)arg1;
- (void).cxx_destruct;
@end
