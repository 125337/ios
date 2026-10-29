@interface WAPublicResInfo : NSObject <PBCoding>
{
    BOOL _bIsForceUpdate; // +0x8
    unsigned int _version; // +0xc
    unsigned int _updateTime; // +0x10
    unsigned int _updateScene; // +0x14
    unsigned int _updateType; // +0x18
    unsigned int _oldVersion; // +0x1c
    NSString * _pkgDownloadUrl; // +0x20
    NSString * _checkSum; // +0x28
    NSString * _pkgPatchUrl; // +0x30
}
+ (void)PBArrayAdd_pkgDownloadUrl;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_bIsForceUpdate;
+ (void)PBArrayAdd_updateScene;
+ (void)PBArrayAdd_updateType;
+ (void)PBArrayAdd_pkgPatchUrl;
+ (void)PBArrayAdd_oldVersion;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)pkgDownloadUrl;
- (void)setPkgDownloadUrl:(id)arg1;
- (id)checkSum;
- (void)setCheckSum:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (BOOL)bIsForceUpdate;
- (void)setBIsForceUpdate:(BOOL)arg1;
- (unsigned int)updateScene;
- (void)setUpdateScene:(unsigned int)arg1;
- (unsigned int)updateType;
- (void)setUpdateType:(unsigned int)arg1;
- (id)pkgPatchUrl;
- (void)setPkgPatchUrl:(id)arg1;
- (unsigned int)oldVersion;
- (void)setOldVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
