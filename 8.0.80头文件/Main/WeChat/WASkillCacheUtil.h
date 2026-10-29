@interface WASkillCacheUtil : NSObject
+ (id)skillCacheBaseDir;
+ (id)skillRootDirectoryPathForAppId:(id)arg1;
+ (id)cachedSkillDirForAppId:(id)arg1 appVersion:(unsigned int)arg2;
+ (id)cachedSkillInfoForAppId:(id)arg1 appVersion:(unsigned int)arg2;
+ (BOOL)saveCachedSkillInfo:(id)arg1 tempZipPath:(id)arg2 error:(id *)arg3;
+ (BOOL)unzipTempFile:(id)arg1 toAppId:(id)arg2 appVersion:(unsigned int)arg3 error:(id *)arg4;
+ (id)sortedJSFilesForAppId:(id)arg1 appVersion:(unsigned int)arg2;
+ (void)removeCachedSkillForAppId:(id)arg1;
@end
