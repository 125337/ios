@interface WAPluginVersionInfo : MMObject <WCTTableCoding>
{
    NSString * _appId; // +0x8
    unsigned long long _version; // +0x10
    NSString * _customVersion; // +0x18
    NSString * _packageCheckSum; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_version;
+ (const void *)customVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_customVersion;
+ (const void *)packageCheckSum;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_packageCheckSum;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)customVersion;
- (void)setCustomVersion:(id)arg1;
- (id)packageCheckSum;
- (void)setPackageCheckSum:(id)arg1;
- (void).cxx_destruct;
@end
