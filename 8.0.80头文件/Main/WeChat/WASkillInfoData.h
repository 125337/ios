@interface WASkillInfoData : MMObject <WCTTableCoding>
{
    unsigned int _appVersion; // +0x8
    unsigned int _updateTime; // +0xc
    NSString * _appId; // +0x10
    unsigned long long _skillVersion; // +0x18
    NSString * _md5; // +0x20
    NSString * _name; // +0x28
    NSString * _downloadUrl; // +0x30
    NSString * _tmpPath; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appVersion;
+ (const void *)skillVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_skillVersion;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_md5;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_name;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned long long)skillVersion;
- (void)setSkillVersion:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)tmpPath;
- (void)setTmpPath:(id)arg1;
- (void).cxx_destruct;
@end
