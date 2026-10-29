@interface MMGPURenderSample : NSObject
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _sampleCount; // +0xc
    unsigned long long _sampleID; // +0x10
    double _time; // +0x18
    MMMetricsStackInfo * _stack; // +0x20
    unsigned long long _stackHash; // +0x28
    double _vertexTimeMs; // +0x30
    double _fragmentTimeMs; // +0x38
    double _gpuCostTimeMs; // +0x40
    double _encodeTimeMs; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sampleID;
+ (const void *)sampleCount;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_sampleCount;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_time;
+ (const void *)vertexTimeMs;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_vertexTimeMs;
+ (const void *)fragmentTimeMs;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_fragmentTimeMs;
+ (const void *)gpuCostTimeMs;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_gpuCostTimeMs;
+ (const void *)encodeTimeMs;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_encodeTimeMs;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_stackHash;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (id)generateStackReportItems:(id)arg1;
- (id)init;
- (unsigned long long)stackHash;
- (void)merge:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned long long)sampleID;
- (void)setSampleID:(unsigned long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (void)setStackHash:(unsigned long long)arg1;
- (double)vertexTimeMs;
- (void)setVertexTimeMs:(double)arg1;
- (double)fragmentTimeMs;
- (void)setFragmentTimeMs:(double)arg1;
- (double)gpuCostTimeMs;
- (void)setGpuCostTimeMs:(double)arg1;
- (double)encodeTimeMs;
- (void)setEncodeTimeMs:(double)arg1;
- (unsigned int)sampleCount;
- (void)setSampleCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

