@interface MMMetricsThreadInfo : NSObject
{
    unsigned int _threadID; // +0x8
    unsigned int _priority; // +0xc
    float _cpuUsage; // +0x10
    double _time; // +0x18
    NSString * _name; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)threadID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_threadID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_time;
+ (const void *)priority;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_priority;
+ (const void *)cpuUsage;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cpuUsage;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_name;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (id)generateStackReportItems:(id)arg1;
- (unsigned int)threadID;
- (void)setThreadID:(unsigned int)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (float)cpuUsage;
- (void)setCpuUsage:(float)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end
