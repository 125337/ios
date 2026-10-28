@interface WADecryptKeyInfo : MMObject <WCTTableCoding>
{
    unsigned int _appVersion; // +0x8
    unsigned int _encryptType; // +0xc
    unsigned int _reportId; // +0x10
    NSString * _appId; // +0x18
    NSString * _userName; // +0x20
    NSString * _decryptKey; // +0x28
    NSString * _md5; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_userName;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_appVersion;
+ (const void *)decryptKey;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_decryptKey;
+ (const void *)encryptType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_encryptType;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_md5;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_reportId;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)decryptKey;
- (void)setDecryptKey:(id)arg1;
- (unsigned int)encryptType;
- (void)setEncryptType:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
