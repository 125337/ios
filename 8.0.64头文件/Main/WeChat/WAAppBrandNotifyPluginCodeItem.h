@interface WAAppBrandNotifyPluginCodeItem : NSObject <PBCoding>
{
    BOOL _autoUpdate; // +0x8
    unsigned int _version; // +0xc
    unsigned int _debugDevKey; // +0x10
    NSString * _provider; // +0x18
    NSString * _md5; // +0x20
    NSString * _prefixPath; // +0x28
    NSArray * _contextsList; // +0x30
    NSString * _versionDesc; // +0x38
    NSString * _semver; // +0x40
}
+ (void)PBArrayAdd_provider;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_prefixPath;
+ (void)PBArrayAdd_contextsList;
+ (void)PBArrayAdd_autoUpdate;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_versionDesc;
+ (void)PBArrayAdd_semver;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)provider;
- (void)setProvider:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)prefixPath;
- (void)setPrefixPath:(id)arg1;
- (id)contextsList;
- (void)setContextsList:(id)arg1;
- (BOOL)autoUpdate;
- (void)setAutoUpdate:(BOOL)arg1;
- (unsigned int)debugDevKey;
- (void)setDebugDevKey:(unsigned int)arg1;
- (id)versionDesc;
- (void)setVersionDesc:(id)arg1;
- (id)semver;
- (void)setSemver:(id)arg1;
- (void).cxx_destruct;
@end
