@interface WCDBMagicPkgUpdateInfo : NSObject
{
    unsigned int _pkgType; // +0x8
    unsigned int _updateTime; // +0xc
    unsigned int _lastUseTime; // +0x10
    NSString * _pkgId; // +0x18
    NSString * _url; // +0x20
    NSString * _md5; // +0x28
    NSString * _pkgPath; // +0x30
    NSString * _unZipPath; // +0x38
    NSString * _originalName; // +0x40
    NSString * _wxaPath; // +0x48
    NSString * _patchId; // +0x50
    NSString * _version; // +0x58
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_pkgId;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_url;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_md5;
+ (const void *)pkgPath;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_pkgPath;
+ (const void *)unZipPath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_unZipPath;
+ (const void *)originalName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_originalName;
+ (const void *)wxaPath;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_wxaPath;
+ (const void *)pkgType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_pkgType;
+ (const void *)patchId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_patchId;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_version;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)lastUseTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_lastUseTime;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
- (id)description;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)pkgPath;
- (void)setPkgPath:(id)arg1;
- (id)unZipPath;
- (void)setUnZipPath:(id)arg1;
- (id)originalName;
- (void)setOriginalName:(id)arg1;
- (id)wxaPath;
- (void)setWxaPath:(id)arg1;
- (unsigned int)pkgType;
- (void)setPkgType:(unsigned int)arg1;
- (id)patchId;
- (void)setPatchId:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (unsigned int)lastUseTime;
- (void)setLastUseTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
