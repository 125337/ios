@interface MMLiteAppBaseLibInfo : MMObject <WCTTableCoding, NSCopying>
{
    unsigned int ilinkVersion; // +0x8
    NSString * majorVersion; // +0x10
    NSString * baseId; // +0x18
    NSString * pId; // +0x20
    NSString * type; // +0x28
    NSString * signatrueKey; // +0x30
    unsigned long long updateTime; // +0x38
    NSString * md5; // +0x40
    NSString * path; // +0x48
    NSString * version; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)majorVersion;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_majorVersion;
+ (const void *)baseId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_baseId;
+ (const void *)pId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_pId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_type;
+ (const void *)signatrueKey;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_signatrueKey;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_md5;
+ (const void *)ilinkVersion;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_ilinkVersion;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_version;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (BOOL)isDebug;
- (id)majorVersion;
- (void)setMajorVersion:(id)arg1;
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
- (void).cxx_destruct;
@end

