@interface WePkgUpdateConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _pkgType; // +0x8
    NSString * _pkgId; // +0x10
    NSString * _appId; // +0x18
    NSString * _entranceDomain; // +0x20
    WePkgUpdateConfigExt * _ext; // +0x28
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_pkgId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_appId;
+ (const void *)pkgType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_pkgType;
+ (const void *)entranceDomain;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_entranceDomain;
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_ext;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)pkgType;
- (void)setPkgType:(unsigned int)arg1;
- (id)entranceDomain;
- (void)setEntranceDomain:(id)arg1;
- (id)ext;
- (void)setExt:(id)arg1;
- (void).cxx_destruct;
@end
