@interface MMCPUThreadSample : NSObject
{
    BOOL isAutoIncrement; // +0x8
    unsigned int _threadID; // +0xc
    float _cpuUsage; // +0x10
    long long lastInsertedRowID; // +0x18
    unsigned long long _sampleID; // +0x20
    double _time; // +0x28
    MMMetricsStackInfo * _stack; // +0x30
    unsigned long long _stackHash; // +0x38
    long long _userTime; // +0x40
    long long _systemTime; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sampleID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_time;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_stackHash;
+ (const void *)threadID;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_threadID;
+ (const void *)cpuUsage;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_cpuUsage;
+ (const void *)userTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_userTime;
+ (const void *)systemTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_systemTime;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (id)generateStackReportItems:(id)arg1;
+ (float)averageCPUUsage:(id)arg1;
+ (long long)totalUserTime:(id)arg1;
+ (long long)totalSystemTime:(id)arg1;
- (id)init;
- (unsigned long long)stackHash;
- (unsigned long long)hash;
- (void)merge:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned long long)sampleID;
- (void)setSampleID:(unsigned long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (void)setStackHash:(unsigned long long)arg1;
- (unsigned int)threadID;
- (void)setThreadID:(unsigned int)arg1;
- (float)cpuUsage;
- (void)setCpuUsage:(float)arg1;
- (long long)userTime;
- (void)setUserTime:(long long)arg1;
- (long long)systemTime;
- (void)setSystemTime:(long long)arg1;
- (void).cxx_destruct;
@end
