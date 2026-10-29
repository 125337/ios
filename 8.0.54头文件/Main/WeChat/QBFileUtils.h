@interface QBFileUtils : NSObject
+ (BOOL)disableFileBackup:(id)arg1;
+ (id)libPath;
+ (id)rootPath;
+ (BOOL)checkRootPathExist;
+ (BOOL)saveData:(id)arg1 withFileName:(id)arg2;
+ (void)saveData:(id)arg1 withFileName:(id)arg2 completion:(id /* block */)arg3;
+ (id)getDataWithFileName:(id)arg1;
+ (BOOL)deleteFileWithName:(id)arg1;
+ (id)fileNameWithPrefix:(id)arg1 subfix:(id)arg2;
+ (void)setCommonFileDirectory:(id)arg1;
+ (id)commonFilePathWithName:(id)arg1;
@end

