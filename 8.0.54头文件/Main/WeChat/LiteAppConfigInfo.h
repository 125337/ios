@interface LiteAppConfigInfo : MMObject <WCTTableCoding, NSCopying>
{
    unsigned int ilinkVersion; // +0x8
    NSString * appId; // +0x10
    NSString * signatrueKey; // +0x18
    unsigned long long updateTime; // +0x20
    NSString * md5; // +0x28
    NSString * packageConfigPath; // +0x30
    NSString * dynamicConfigPath; // +0x38
    NSString * configJson; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)signatrueKey;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_signatrueKey;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_md5;
+ (const void *)packageConfigPath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_packageConfigPath;
+ (const void *)dynamicConfigPath;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_dynamicConfigPath;
+ (const void *)configJson;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_configJson;
+ (const void *)ilinkVersion;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_ilinkVersion;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)signatrueKey;
- (void)setSignatrueKey:(id)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)packageConfigPath;
- (void)setPackageConfigPath:(id)arg1;
- (id)dynamicConfigPath;
- (void)setDynamicConfigPath:(id)arg1;
- (id)configJson;
- (void)setConfigJson:(id)arg1;
- (unsigned int)ilinkVersion;
- (void)setIlinkVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

