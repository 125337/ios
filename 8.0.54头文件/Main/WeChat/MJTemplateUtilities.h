@interface MJTemplateUtilities : NSObject
+ (void)launchMiaoJianAppFromScene:(unsigned long long)arg1 withShareParams:(id)arg2 resultBlock:(id /* block */)arg3;
+ (void)launchMiaoJianAppFromScene:(unsigned long long)arg1 withShareParams:(id)arg2 resultBlock:(id /* block */)arg3 doWhenWillLaunch:(id /* block */)arg4;
+ (void)_checkRegularForScene:(unsigned long long)arg1 withShareParams:(id)arg2 checkRegularBlock:(id /* block */)arg3;
+ (void)_checkMomentsRegularForScene:(unsigned long long)arg1 withShareParams:(id)arg2 checkRegularBlock:(id /* block */)arg3;
+ (void)_onLaunchMJAppWithShareConfigure:(id)arg1 resultBlock:(id /* block */)arg2;
+ (BOOL)_checkIfInstalledMiaoJianForScene:(unsigned long long)arg1 withShareParams:(id)arg2 resultBlock:(id /* block */)arg3;
+ (id)getPreloadResourcePathWithTemplateItem:(id)arg1;
+ (id)getPreloadResourcePathWithTemplateInfo:(id)arg1;
+ (id)getPreloadResourceFileNameWithTemplateId:(id)arg1 templateType:(unsigned long long)arg2 descUrl:(id)arg3 descVersion:(unsigned long long)arg4;
+ (id)rootDirectory;
+ (id)resourceRootDirectory;
+ (id)resourceDirectoryForType:(unsigned int)arg1;
+ (id)preloadResourceRootDirectory;
+ (id)preloadResourceDirectoryForType:(unsigned long long)arg1;
+ (id)cacheRootDirectory;
+ (id)cachePreviewDirectory;
+ (id)temporaryRootDirectory;
+ (id)temporaryDirectoryForType:(unsigned int)arg1;
+ (id)temporaryCdnDirectory;
+ (id)materialResourcePath;
+ (id)cameraAuditPath;
+ (id)clipBundleDirectory;
+ (id)maasPersistentPath;
+ (id)maasCachesPath;
+ (id)maasResourcePath;
+ (id)maasTempPath;
+ (id)movieSessionOptions;
+ (BOOL)removeFile:(id)arg1;
+ (BOOL)unzipFile:(id)arg1 toDirectory:(id)arg2;
+ (BOOL)mergeSubDirectory:(id)arg1 toDestDirectory:(id)arg2;
+ (BOOL)moveFile:(id)arg1 toFile:(id)arg2;
+ (unsigned long long)preGetMaasDirSize;
+ (unsigned long long)cleanMaasDir;
+ (id)checkSumOfFile:(id)arg1;
@end

