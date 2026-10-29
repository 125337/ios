@interface WebStorageGlobalConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _realWeight; // +0x8
    NSString * _appId; // +0x10
    NSString * _weightStr; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)weightStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_weightStr;
+ (const void *)realWeight;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_realWeight;
+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)weightStr;
- (void)setWeightStr:(id)arg1;
- (unsigned int)realWeight;
- (void)setRealWeight:(unsigned int)arg1;
- (void).cxx_destruct;
@end
