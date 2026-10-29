@interface WADBPackageUsageLruInfo : NSObject
{
    unsigned int _packageType; // +0x8
    unsigned int _debugModeType; // +0xc
    unsigned int _updateTime; // +0x10
    NSString * _appID; // +0x18
    NSString * _moduleName; // +0x20
    unsigned long long _version; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)moduleName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_moduleName;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_version;
+ (const void *)packageType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_packageType;
+ (const void *)debugModeType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_debugModeType;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
