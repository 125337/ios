@interface MMLiveBeautyResourcePackageRecord : NSObject <WCTTableCoding>
{
    NSString * _recordId; // +0x8
    unsigned long long _schemaVersion; // +0x10
    unsigned long long _packageType; // +0x18
    NSString * _uri; // +0x20
    NSString * _md5Hash; // +0x28
    NSString * _instanceId; // +0x30
    unsigned long long _lastUpdated; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)recordId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_recordId;
+ (const void *)schemaVersion;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_schemaVersion;
+ (const void *)packageType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_packageType;
+ (const void *)uri;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_uri;
+ (const void *)md5Hash;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_md5Hash;
+ (const void *)instanceId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_instanceId;
+ (const void *)lastUpdated;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_lastUpdated;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (id)recordIdWithScopeId:(id)arg1 packageType:(unsigned long long)arg2;
+ (id)recordFromPackage:(id)arg1 scopeId:(id)arg2;
+ (id)packageFromRecord:(id)arg1;
- (id)recordId;
- (void)setRecordId:(id)arg1;
- (unsigned long long)schemaVersion;
- (void)setSchemaVersion:(unsigned long long)arg1;
- (unsigned long long)packageType;
- (void)setPackageType:(unsigned long long)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)md5Hash;
- (void)setMd5Hash:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)lastUpdated;
- (void)setLastUpdated:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

