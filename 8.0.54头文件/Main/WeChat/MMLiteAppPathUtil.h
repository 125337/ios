@interface MMLiteAppPathUtil : NSObject
+ (id)getLiteAppDBPath;
+ (id)getLiteAppTmpPath;
+ (id)getLiteAppCachePath;
+ (id)getLiteAppDataPath;
+ (id)getLiteAppPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppConfigPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppBaseLibPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppBaseLibTmpPath;
+ (id)getLiteAppBaseLibBundlePath;
+ (id)getIlinkCheckResourcePath:(id)arg1 resourceName:(id)arg2 version:(unsigned int)arg3;
+ (id)getLiteAppRootPath;
+ (id)getIlinkCheckResourceRootPath;
+ (id)getLiteAppPackageConfigPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppDynamicConfigPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
@end

