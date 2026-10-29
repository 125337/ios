@interface MBUpdateBootsUtil : NSObject
+ (id)getRelatePkgRootPath:(id)arg1;
+ (id)getRelateZipPath:(id)arg1 patchId:(id)arg2;
+ (id)getRelatePkgPath:(id)arg1 patchId:(id)arg2;
+ (id)getRelateWxaPath:(id)arg1 patchId:(id)arg2 unzipPath:(id)arg3;
+ (id)getOriginalRelateWxaPath:(id)arg1 originalName:(id)arg2;
+ (id)getDirOfMBBootsUpdate;
+ (id)getMagicPkgRoot:(id)arg1;
+ (id)getMagicPkgTempRoot:(id)arg1;
+ (id)getMagicZipPath:(id)arg1 patchId:(id)arg2;
+ (id)getMagicOriginalPkgPath:(id)arg1 originalName:(id)arg2;
+ (id)getMagicPkgPath:(id)arg1 patchId:(id)arg2;
+ (id)getWxaPkgName:(id)arg1;
+ (id)readPkgPathFromUnZipPath:(id)arg1;
+ (id)getBaseWxaPkgPath:(id)arg1;
+ (BOOL)pkgFileExist:(id)arg1;
+ (id)getMagicPkgList;
+ (id)getMagicPkgInfo:(id)arg1;
+ (void)removeMagicPkgInfo:(id)arg1;
+ (id)getMagicPkgConfigList;
+ (void)report27831:(id)arg1 pkgInfo:(id)arg2 fileExist:(long long)arg3 scene:(long long)arg4 state:(long long)arg5 errCode:(long long)arg6;
@end
