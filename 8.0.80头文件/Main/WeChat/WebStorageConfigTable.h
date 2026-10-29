@interface WebStorageConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _valueSize; // +0x8
    unsigned int _expireTimestamp; // +0xc
    unsigned int _lastModifyTime; // +0x10
    NSString * _appId; // +0x18
    NSString * _key; // +0x20
    NSString * _weightStr; // +0x28
    WebStorageConfigExt * _ext; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_appId;
+ (const void *)key;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_key;
+ (const void *)valueSize;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_valueSize;
+ (const void *)expireTimestamp;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_expireTimestamp;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_lastModifyTime;
+ (const void *)weightStr;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_weightStr;
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_ext;
+ (void)__wcdb_table_constraint_12:(void *)arg1;
+ (void)__wcdb_table_constraint_13:(void *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (unsigned int)valueSize;
- (void)setValueSize:(unsigned int)arg1;
- (unsigned int)expireTimestamp;
- (void)setExpireTimestamp:(unsigned int)arg1;
- (unsigned int)lastModifyTime;
- (void)setLastModifyTime:(unsigned int)arg1;
- (id)weightStr;
- (void)setWeightStr:(id)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
- (void).cxx_destruct;
@end
