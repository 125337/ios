@interface MMLiteAppInfoItem : MMObject <WCTTableCoding, NSCopying>
{
    unsigned int ilinkVersion; // +0x8
    NSString * appId; // +0x10
    NSString * groupId; // +0x18
    NSString * baseId; // +0x20
    NSString * pId; // +0x28
    NSString * type; // +0x30
    NSString * signatrueKey; // +0x38
    unsigned long long updateTime; // +0x40
    NSString * md5; // +0x48
    NSString * path; // +0x50
    NSString * version; // +0x58
    NSString * _page; // +0x60
    NSString * _query; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appId;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_groupId;
+ (const void *)baseId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_baseId;
+ (const void *)pId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_pId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_type;
+ (const void *)signatrueKey;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_signatrueKey;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_md5;
+ (const void *)ilinkVersion;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_ilinkVersion;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_version;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (BOOL)isDebug;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)baseId;
- (void)setBaseId:(id)arg1;
- (id)pId;
- (void)setPId:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)signatrueKey;
- (void)setSignatrueKey:(id)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)ilinkVersion;
- (void)setIlinkVersion:(unsigned int)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (void).cxx_destruct;
@end

