@interface LVLiteAppConfigInfo : NSObject
{
    int _iLinkVersion; // +0x8
    NSString * _appId; // +0x10
    NSString * _signatureKey; // +0x18
    NSString * _packageConfigPath; // +0x20
    long long _updateTime; // +0x28
    NSString * _md5; // +0x30
    NSString * _dynamicConfigPath; // +0x38
    NSString * _configJson; // +0x40
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)packageConfigPath;
- (void)setPackageConfigPath:(id)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)dynamicConfigPath;
- (void)setDynamicConfigPath:(id)arg1;
- (int)iLinkVersion;
- (void)setILinkVersion:(int)arg1;
- (id)configJson;
- (void)setConfigJson:(id)arg1;
- (void).cxx_destruct;
@end
