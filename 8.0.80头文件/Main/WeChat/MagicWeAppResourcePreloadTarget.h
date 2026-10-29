@interface MagicWeAppResourcePreloadTarget : NSObject
{
    unsigned int _appVersion; // +0x8
    unsigned int _targetAppServiceType; // +0xc
    NSString * _appId; // +0x10
    NSString * _envVersion; // +0x18
    NSString * _subpackage; // +0x20
    NSString * _key; // +0x28
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)envVersion;
- (void)setEnvVersion:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)subpackage;
- (void)setSubpackage:(id)arg1;
- (unsigned int)targetAppServiceType;
- (void)setTargetAppServiceType:(unsigned int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end
