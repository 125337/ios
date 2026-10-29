@interface MagicWeAppResourcePreloadResult : NSObject
{
    unsigned int _appServiceType; // +0x8
    unsigned int _targetAppServiceType; // +0xc
    WAContact * _contact; // +0x10
    WAPackageConfig * _packageConfig; // +0x18
    WAPluginPermissionInfo * _permissionInfo; // +0x20
    long long _cacheErrorCode; // +0x28
    unsigned long long _preloadTraceId; // +0x30
}
- (id)initWithContact:(id)arg1 packageConfig:(id)arg2 permissionInfo:(id)arg3 cacheErrorCode:(long long)arg4;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)packageConfig;
- (void)setPackageConfig:(id)arg1;
- (id)permissionInfo;
- (void)setPermissionInfo:(id)arg1;
- (long long)cacheErrorCode;
- (void)setCacheErrorCode:(long long)arg1;
- (unsigned long long)preloadTraceId;
- (void)setPreloadTraceId:(unsigned long long)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)targetAppServiceType;
- (void)setTargetAppServiceType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
