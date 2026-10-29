@interface WebStorageUtil : MMObject
+ (id)getWebStoragePath:(BOOL)arg1;
+ (id)getWebStorageDbDirPath;
+ (id)getDbPath;
+ (id)getWebStorageDataDirPath:(BOOL)arg1;
+ (id)getWebStorageDataDirPathForAppId:(id)arg1 CreatePathIfNotExist:(BOOL)arg2;
+ (id)getWebStorageDataPath:(id)arg1 FileName:(id)arg2 CreatePathIfNotExist:(BOOL)arg3;
+ (id)getFileName:(id)arg1;
+ (id)getMD5:(id)arg1;
@end

