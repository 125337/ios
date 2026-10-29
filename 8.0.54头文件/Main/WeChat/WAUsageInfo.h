@interface WAUsageInfo : MMObject <WCTTableCoding>
{
    unsigned int _appType; // +0x8
    unsigned int _lastOpenTime; // +0xc
    NSString * _userName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_userName;
+ (const void *)appType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appType;
+ (const void *)lastOpenTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_lastOpenTime;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_index_5:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)lastOpenTime;
- (void)setLastOpenTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

