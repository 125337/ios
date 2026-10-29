@interface WeMagicPath : NSObject
+ (id)wemagicUserRootDir;
+ (id)wemagicSharedRootDir;
+ (id)ensureDirExist:(id)arg1;
+ (id)subDirUnderRoot:(id)arg1 subDir:(id)arg2;
+ (id)magicFilesBizPath;
+ (id)magicFilesSysPath;
+ (id)magicCachePath;
+ (id)magicPkgDebugPath;
+ (id)magicPkgAssetsPath;
+ (id)buildInfoWithBizName:(id)arg1 bundleName:(id)arg2;
+ (id)builtInPkgInfos;
@end
