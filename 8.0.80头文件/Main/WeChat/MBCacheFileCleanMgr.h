@interface MBCacheFileCleanMgr : MMUserService <MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _workQueue; // +0x8
    MBFileSpaceTraceLogic * _fileTraceLogic; // +0x10
    unsigned long long _scanPhase; // +0x18
    unsigned long long _maxTotalFileSize; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)addTempFileStatWithPath:(id)arg1 bizName:(id)arg2;
- (void)removeTempFileStatWithFileSize:(unsigned long long)arg1 bizName:(id)arg2;
- (unsigned long long)tempFileSizeOfBizName:(id)arg1;
- (BOOL)isTempFileSizeExceedForBiz:(id)arg1 withFileSize:(unsigned long long)arg2;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (void)setupMaxTotalFileSize;
- (BOOL)isTotalFileSizeExceed;
- (BOOL)isSingleAppTempSizeExceedSize:(unsigned long long)arg1 bizName:(id)arg2;
- (BOOL)isTotalFileSizeExceedHalfMax;
- (void)asyncScanFiles;
- (void)asyncCleanFilesWithCompletion:(id /* block */)arg1;
- (void)asyncCleanFilesForApp:(id)arg1;
- (void)asyncCleanFilesToMakeEnoughSpaceForBizName:(id)arg1 completion:(id /* block */)arg2;
- (id)statusFilePath;
- (void)loadStatus;
- (void)saveStatus;
- (unsigned long long)currentTotalFileSize;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withBizName:(id)arg3;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withBizName:(id)arg3;
- (void)setTotalFileSize:(unsigned long long)arg1 totalFileNum:(unsigned int)arg2 contentModifyTime:(unsigned int)arg3 scanTime:(unsigned int)arg4 withBizName:(id)arg5;
- (id)allBizNameInStatus;
- (id)bizItemInStatus:(id)arg1;
- (id)arrSortBizItemFromStatus;
- (void)workThread_scanFiles;
- (void)innerScanFiles;
- (id)scanRootDir;
- (void)removeBizItemNotHasFolder:(id)arg1;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)arg1 tempDirPath:(id)arg2;
- (void)workthread_cleanGlobalFilesWithCompletion:(id /* block */)arg1;
- (void)workthread_cleanFilesForApp:(id)arg1;
- (void)workthread_cleanFilesToMakeEnoughSpaceForBizName:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isBizRunning:(id)arg1;
- (unsigned int)getModifyTimeWithPath:(id)arg1;
- (void)fileStatWithPath:(id)arg1 getCreateTime:(unsigned int *)arg2 modifyTime:(unsigned int *)arg3 fileSize:(unsigned long long *)arg4;
- (id)subFolderNamesWithPath:(id)arg1;
- (void)scanFolder:(id)arg1 getTotalFileSize:(unsigned long long *)arg2 totalFileNum:(unsigned int *)arg3;
- (void)onBizPause:(id)arg1;
- (void)onBizDestory:(id)arg1;
- (unsigned long long)scanPhase;
- (void)setScanPhase:(unsigned long long)arg1;
- (unsigned long long)maxTotalFileSize;
- (void)setMaxTotalFileSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
