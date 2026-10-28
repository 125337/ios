@interface WCFinderFeedPlayStatusModel : NSObject <WCTTableCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _scene; // +0x10
    unsigned long long _hadReadTimestamp; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_scene;
+ (const void *)hadReadTimestamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_hadReadTimestamp;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)hadReadTimestamp;
- (void)setHadReadTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
