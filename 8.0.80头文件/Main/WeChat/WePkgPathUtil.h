@interface WePkgPathUtil : MMObject
+ (id)wePkgLibPath;
+ (id)wePkgDataDirPath;
+ (id)liteAppFileDir:(id)arg1;
+ (id)wePkgDatabasePath;
+ (id)directoryPathOfPkgId:(id)arg1;
+ (id)directoryPathOfPkgId:(id)arg1 version:(id)arg2;
+ (id)debugDirectoryPathOfPkgId:(id)arg1;
+ (id)bigPkgFilePathOfPkgId:(id)arg1 version:(id)arg2;
+ (id)pathOfPkgFile:(id)arg1 version:(id)arg2 FileName:(id)arg3;
+ (id)getVersionListWithSamePkgId:(id)arg1;
+ (id)getFilePathIfExisted:(id)arg1 FileName:(id)arg2 ExpectMd5:(id)arg3 ExpectFileSize:(unsigned int)arg4;
+ (id)wePkgHarRecordFileDir;
+ (id)wePkgHarInterceptFileDir;
@end
