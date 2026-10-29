@interface WXGRoamCustomDiskPortableLogic : WXGRoamCustomDiskBaseLogic
- (void)getRoamDiskInfoInner:(unsigned long long)arg1;
- (void)getFileInfoListInner:(unsigned long long)arg1 parentPath:(id)arg2 recursiveDepth:(int)arg3;
- (void)getFileInfoInner:(unsigned long long)arg1 filePath:(id)arg2;
- (void)deleteFileInner:(unsigned long long)arg1 filePath:(id)arg2;
- (void)deleteFileListInner:(unsigned long long)arg1 filePathList:(id)arg2;
- (void)createDirInner:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)getDirsSizeAsync:(unsigned long long)arg1 dirPaths:(id)arg2;
- (void)deleteDirInner:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)uploadFileInner:(unsigned long long)arg1 processId:(long long)arg2 localPath:(id)arg3 remotePath:(id)arg4;
- (void)downloadFileInner:(unsigned long long)arg1 processId:(long long)arg2 remotePath:(id)arg3 localPath:(id)arg4;
- (void)uploadFileInner:(unsigned long long)arg1 processId:(long long)arg2 localPath:(id)arg3 remotePath:(id)arg4 recursiveDepth:(int)arg5;
- (void)downloadFileInner:(unsigned long long)arg1 processId:(long long)arg2 remotePath:(id)arg3 localPath:(id)arg4 recursiveDepth:(int)arg5;
- (unsigned long long)getFolderSize:(id)arg1;
- (BOOL)getFileInfoListWithParentPath:(id)arg1 recursiveDepth:(int)arg2 fileInfoList:(id)arg3;
@end
