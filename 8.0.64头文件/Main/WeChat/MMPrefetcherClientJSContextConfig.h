@interface MMPrefetcherClientJSContextConfig : NSObject
{
    BOOL _isAdPrefetcherContext; // +0x8
    NSString * _contextName; // +0x10
    NSString * _domain; // +0x18
    NSString * _path; // +0x20
    NSString * _manifestUrl; // +0x28
    NSString * _appId; // +0x30
    long long _basePkgVersion; // +0x38
}
- (id)contextName;
- (void)setContextName:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)manifestUrl;
- (void)setManifestUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (long long)basePkgVersion;
- (void)setBasePkgVersion:(long long)arg1;
- (BOOL)isAdPrefetcherContext;
- (void)setIsAdPrefetcherContext:(BOOL)arg1;
- (void).cxx_destruct;
@end
