@interface OpenImResourceStorage : MMObject
{
    OpenImResourceStorageCacheInfo * _defaultResCacheInfo; // +0x8
    OpenImResourceStorageCacheInfo * _kefuResCacheInfo; // +0x10
}
+ (id)resourceRootPath;
+ (id)resourcePathAppid:(id)arg1 subType:(unsigned int)arg2;
- (id)init;
- (id)cacheInfoForSubType:(unsigned int)arg1;
- (void)saveLastUpdateDateToCache:(id)arg1 appId:(id)arg2 subType:(unsigned int)arg3;
- (id)cacheLastUpdateDateWithAppId:(id)arg1 subType:(unsigned int)arg2;
- (id)cacheResourceWithAppId:(id)arg1 subType:(unsigned int)arg2;
- (void)saveResourceToCache:(id)arg1 appId:(id)arg2 subType:(unsigned int)arg3;
- (id)tryLoadOpenImResource:(id)arg1 subType:(unsigned int)arg2;
- (void)saveOpenImResourceToCacheAndFile:(id)arg1 appid:(id)arg2 subType:(unsigned int)arg3;
- (id)defaultResCacheInfo;
- (void)setDefaultResCacheInfo:(id)arg1;
- (id)kefuResCacheInfo;
- (void)setKefuResCacheInfo:(id)arg1;
- (void).cxx_destruct;
@end

