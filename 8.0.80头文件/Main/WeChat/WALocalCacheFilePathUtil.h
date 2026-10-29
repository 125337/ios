@interface WALocalCacheFilePathUtil : NSObject
+ (id)downloadCachesDirectoryPath;
+ (id)videoCachesDirectoryPathWithURL:(id)arg1;
+ (id)getWeAppLocalCacheFilePathWithAppid:(id)arg1 version:(unsigned long long)arg2 isDebugMode:(unsigned long long)arg3 packageType:(unsigned long long)arg4 moduleName:(id)arg5 encryptType:(unsigned long long)arg6 versionDesc:(id)arg7;
+ (id)getWeAppLocalCacheFilePathWithAppInfo:(id)arg1;
+ (id)getDebugWeAppLocalCacheRootDirPath;
+ (id)getWeAppDebugLocalCacheRootDirPathWithAppid:(id)arg1;
+ (id)getWeAppXnetCacheRootDirPathWithAppid:(id)arg1;
+ (id)getWeAppXnetCacheRootDirPath;
+ (id)getReleaseAppLocalCacheRootDirPath;
+ (id)getWeAppLocalCacheRootDirPathWithAppid:(id)arg1;
+ (id)getWeAppLocalCacheRootDirPathWithPluginCodeAppid:(id)arg1;
+ (id)getWeAppLocalCacheFileNameWithVersion:(unsigned long long)arg1;
+ (id)getPublicResDirWithDebugModeType:(unsigned long long)arg1;
+ (id)getPublicResPathWithDebugModeType:(unsigned long long)arg1 version:(unsigned long long)arg2;
+ (id)getPublicResPathUnpackedFromBundle;
+ (id)getPublicStoragePath;
+ (id)getAppBrandWebCacheRootDir;
+ (id)getAppBrandFrameworkLocalCacheRootDir;
@end
