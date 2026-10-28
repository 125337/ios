@interface WCStoryZonePageIndexObj : NSObject <WCTTableCoding>
{
    int _localTimeZone; // +0x8
    NSString * _date; // +0x10
    NSString * _tid; // +0x18
    unsigned long long _count; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)date;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_date;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_tid;
+ (const void *)localTimeZone;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_localTimeZone;
+ (const void *)count;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_count;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
- (id)description;
- (id)date;
- (void)setDate:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)localTimeZone;
- (void)setLocalTimeZone:(int)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
