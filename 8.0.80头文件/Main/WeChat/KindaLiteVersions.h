@interface KindaLiteVersions : NSObject
{
    BOOL _baseLibLoaded; // +0x8
    NSString * _baseLibVersion; // +0x10
    BOOL _kit; // +0x18
    NSString * _liteAppVersion; // +0x20
    MMLiteAppInfoItem * _legacyLiteAppInfo; // +0x28
    NSString * _kitBaseLibVersion; // +0x30
}
- (id)baseLibVersion;
- (BOOL)kitUnknown;
- (BOOL)kit;
- (void)setKit:(BOOL)arg1;
- (id)liteAppVersion;
- (void)setLiteAppVersion:(id)arg1;
- (id)legacyLiteAppInfo;
- (void)setLegacyLiteAppInfo:(id)arg1;
- (id)kitBaseLibVersion;
- (void)setKitBaseLibVersion:(id)arg1;
- (void).cxx_destruct;
@end
