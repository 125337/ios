@interface WXGRoamCustomDiskBridge : NSObject <CustomRoamDiskBase, WXGRoamCustomDiskBaseLogicDelegate>
{
    CustomRoamDiskCallback * _diskCb; // +0x8
    AffRoamCommonDeviceInfo * _deviceInfo; // +0x10
    WXGRoamCustomDiskBaseLogic * _processLogic; // +0x18
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x20
    NSMutableArray * _transferQueuePool; // +0x28
    NSURL * _curURL; // +0x30
}
- (void)setCallback:(id)arg1;
- (void)initializeAsync:(unsigned long long)arg1 commonInfo:(id)arg2 specialInfoPb:(id)arg3;
- (void)uninitAsync:(unsigned long long)arg1;
- (void)getRoamDiskInfoAsync:(unsigned long long)arg1;
- (void)getFileInfoListAsync:(unsigned long long)arg1 parentPath:(id)arg2 recursiveDepth:(int)arg3;
- (void)getFileInfoAsync:(unsigned long long)arg1 filePath:(id)arg2;
- (void)deleteFileAsync:(unsigned long long)arg1 filePath:(id)arg2;
- (void)deleteFileListAsync:(unsigned long long)arg1 filePathList:(id)arg2;
- (void)createDirAsync:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)getDirsSizeAsync:(unsigned long long)arg1 dirPaths:(id)arg2;
- (void)deleteDirAsync:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)uploadFileAsync:(unsigned long long)arg1 invokeId:(unsigned long long)arg2 localPath:(id)arg3 remotePath:(id)arg4;
- (void)downloadFileAsync:(unsigned long long)arg1 invokeId:(unsigned long long)arg2 remotePath:(id)arg3 localPath:(id)arg4;
- (void)fileStreamWriteOnceAsync:(unsigned long long)arg1 remotePath:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteBeginAsync:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)fileStreamWriteAsync:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamWriteEndAsync:(unsigned long long)arg1 context:(id)arg2 buf:(id)arg3;
- (void)fileStreamReadBeginAsync:(unsigned long long)arg1 remotePath:(id)arg2 readSize:(unsigned long long)arg3;
- (void)fileStreamReadAsync:(unsigned long long)arg1 context:(id)arg2 readSize:(unsigned long long)arg3;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)arg1 err:(int)arg2 info:(id)arg3;
- (void)onGetFileInfoComplete:(unsigned long long)arg1 err:(int)arg2 fileInfo:(id)arg3;
- (void)onGetFileInfoListComplete:(unsigned long long)arg1 err:(int)arg2 fileInfoList:(id)arg3;
- (void)onGetDirsSizeComplete:(unsigned long long)arg1 error:(int)arg2 dirSize:(id)arg3;
- (void)onDeleteFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteFileListComplete:(unsigned long long)arg1 overallErr:(int)arg2 errList:(id)arg3;
- (void)onCreateDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileProgressEvent:(long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDownloadFileProgressEvent:(long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)bridgeQueue;
- (id)transferQueuePool;
- (id)diskCb;
- (void)setDiskCb:(id)arg1;
- (id)deviceInfo;
- (void)setDeviceInfo:(id)arg1;
- (id)processLogic;
- (void)setProcessLogic:(id)arg1;
- (void)setBridgeQueue:(id)arg1;
- (void)setTransferQueuePool:(id)arg1;
- (id)curURL;
- (void)setCurURL:(id)arg1;
- (void).cxx_destruct;
@end

