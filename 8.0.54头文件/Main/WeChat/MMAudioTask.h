@interface MMAudioTask : NSObject
{
    BOOL isAutoIncrement; // +0x8
    long long lastInsertedRowID; // +0x10
    unsigned long long _taskID; // +0x18
    unsigned long long _target; // +0x20
    unsigned long long _taskType; // +0x28
    double _beginTime; // +0x30
    double _endTime; // +0x38
    MMMetricsStackInfo * _stack; // +0x40
    unsigned long long _stackHash; // +0x48
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)taskID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_taskID;
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_stackHash;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)generateStackReportItems:(id)arg1;
- (id)init;
- (unsigned long long)stackHash;
- (void)onTaskBegin;
- (void)onTaskEnd;
- (BOOL)isPlaying;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned long long)taskID;
- (void)setTaskID:(unsigned long long)arg1;
- (unsigned long long)target;
- (void)setTarget:(unsigned long long)arg1;
- (unsigned long long)taskType;
- (void)setTaskType:(unsigned long long)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (void)setStackHash:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

