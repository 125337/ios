@interface WAAgentFileStorageHelper : NSObject
+ (void)asyncCopyBrowseInfos:(id)arg1 appID:(id)arg2 completion:(id /* block */)arg3;
+ (id)doCopyFromPath:(id)arg1 fileName:(id)arg2 fileExt:(id)arg3 hintFileSize:(unsigned long long)arg4 appID:(id)arg5;
+ (id)resolveSourcePathForBrowseInfo:(id)arg1;
+ (id)resolveFileNameForBrowseInfo:(id)arg1 srcPath:(id)arg2;
+ (id)resolveFileExtForBrowseInfo:(id)arg1 srcPath:(id)arg2;
@end
