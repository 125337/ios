@interface WCFinderFeedSessionModel : NSObject <WCTTableCoding>
{
    int _scene; // +0x8
    NSString * _tid; // +0x10
    NSString * _sessionBuffer; // +0x18
    unsigned long long _cacheTime; // +0x20
    unsigned long long _exposeTimeInMS; // +0x28
    unsigned long long _exposeCount; // +0x30
    NSString * _extraKey; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)sessionBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_sessionBuffer;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)extraKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_extraKey;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (unsigned long long)exposeTimeInMS;
- (void)setExposeTimeInMS:(unsigned long long)arg1;
- (unsigned long long)exposeCount;
- (void)setExposeCount:(unsigned long long)arg1;
- (id)extraKey;
- (void)setExtraKey:(id)arg1;
- (void).cxx_destruct;
@end
