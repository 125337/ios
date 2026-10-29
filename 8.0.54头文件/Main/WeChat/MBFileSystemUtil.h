@interface MBFileSystemUtil : NSObject
+ (id)getDirOfMBFileSystem;
+ (id)getDirOfBiz:(id)arg1;
+ (id)getFileUrl:(id)arg1 bizName:(id)arg2;
+ (id)trimPrefixRelativeURL:(id)arg1;
+ (id)trimSuffixRelativeURL:(id)arg1;
+ (id)dicFromStat:(stat)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)stringFromByte:(unsigned char)arg1;
+ (id)MBCacheSandboxDirWithBizName:(id)arg1;
+ (id)MBCacheSandboxDir;
+ (id)MBTmpDir;
+ (id)MBCacheDir;
+ (id)MBLibrarySandboxDirWithBizName:(id)arg1;
+ (id)MBLibrarySandboxDir;
+ (id)MBLibraryDir;
+ (id)MBCacheFileCleanStatusPath;
+ (id)MBUsrFileStatusPath;
+ (id)stringWithSecondsSince1970:(unsigned long long)arg1;
- (unsigned long long)disasterTolerantBytesWithMB:(unsigned long long)arg1 minSizeMB:(unsigned long long)arg2;
@end

