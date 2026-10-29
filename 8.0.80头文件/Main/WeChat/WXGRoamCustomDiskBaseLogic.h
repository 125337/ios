@interface WXGRoamCustomDiskBaseLogic : NSObject
{
    id <WXGRoamCustomDiskBaseLogicDelegate> _delegate; // +0x8
    NSURL * _curURL; // +0x10
}
- (void)deleteDirInner:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)deleteFileInner:(unsigned long long)arg1 filePath:(id)arg2;
- (void)deleteFileListInner:(unsigned long long)arg1 filePathList:(id)arg2;
- (void)fileStreamWriteBeginInner:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)fileStreamWriteEndInner:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteInner:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteOnceInner:(unsigned long long)arg1 remotePath:(id)arg2 buf:(id)arg3;
- (void)getFileInfoInner:(unsigned long long)arg1 filePath:(id)arg2;
- (void)getFileInfoListInner:(unsigned long long)arg1 parentPath:(id)arg2 recursiveDepth:(int)arg3;
- (void)getRoamDiskInfoInner:(unsigned long long)arg1;
- (void)getDirsSizeAsync:(unsigned long long)arg1 dirPaths:(id)arg2;
- (void)createDirInner:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)fileStreamReadInner:(unsigned long long)arg1 context:(id)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamReadBeginInner:(unsigned long long)arg1 remotePath:(id)arg2 readSize:(unsigned long long)arg3;
- (void)downloadFileInner:(unsigned long long)arg1 processId:(long long)arg2 remotePath:(id)arg3 localPath:(id)arg4;
- (void)uploadFileInner:(unsigned long long)arg1 processId:(long long)arg2 localPath:(id)arg3 remotePath:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)curURL;
- (void)setCurURL:(id)arg1;
- (void).cxx_destruct;
@end
