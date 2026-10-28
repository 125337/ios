@interface WCFinderExposeDataModel : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _exposeDate; // +0x10
    unsigned long long _exposeCount; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)exposeDate;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_exposeDate;
+ (const void *)exposeCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_exposeCount;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)exposeDate;
- (void)setExposeDate:(unsigned long long)arg1;
- (unsigned long long)exposeCount;
- (void)setExposeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
