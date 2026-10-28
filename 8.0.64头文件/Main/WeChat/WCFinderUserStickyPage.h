@interface WCFinderUserStickyPage : NSObject <WCTTableCoding>
{
    NSString * _username; // +0x8
    NSString * _tid; // +0x10
    unsigned long long _stickyTime; // +0x18
    long long _type; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_tid;
+ (const void *)stickyTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_stickyTime;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_type;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
- (id)description;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)stickyTime;
- (void)setStickyTime:(unsigned long long)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (void).cxx_destruct;
@end
