@interface MMMetricsBusinessData : NSObject
{
    BOOL isAutoIncrement; // +0x8
    unsigned long long _dataID; // +0x10
    double _time; // +0x18
    unsigned long long _type; // +0x20
    MMMetricsBusinessDataContent * _content; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dataID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_dataID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_time;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_type;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_content;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned long long)dataID;
- (void)setDataID:(unsigned long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end

