@interface WAPackageInfoCacheLogic : NSObject
{
    NSMutableDictionary * _dicCacheFileInfo; // +0x8
    NSMutableDictionary * _dicUnpackedPackageInfo; // +0x10
    NSMutableSet * _setUnpackedPkgFilePath; // +0x18
    long long _unpackTime; // +0x20
    NSMutableDictionary * _dicCacheFileAccessedTimeRecord; // +0x28
}
- (id)init;
- (void)dealloc;
- (id)getCacheFileInfoKeyWithSubPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (BOOL)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (void)removePackageCacheIfDifferentPackageType:(unsigned long long)arg1 appId:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4;
- (BOOL)unpackPkgFromPath:(id)arg1 appid:(id)arg2 version:(unsigned long long)arg3 isDebugMode:(unsigned long long)arg4 packageType:(unsigned long long)arg5 extParams:(id)arg6;
- (BOOL)hasUnpackedPackageWithAppId:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3;
- (void)clearAllPkgInfo;
- (void)removePackageFilePathCache:(id)arg1;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (BOOL)unpackPublicResPkgFromPath:(id)arg1 isDebugMode:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (BOOL)isString:(id)arg1 inArray:(id)arg2;
- (long long)getUnpackTime;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)arg1;
- (long long)getAccessedTimeWithFullUrl:(id)arg1;
- (void).cxx_destruct;
@end
