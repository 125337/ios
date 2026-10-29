@interface MBLocalFileStorageMgr : MMUserService <MBFileSpaceTraceLogicScanDataSource, MMServiceProtocol>
{
    MBFileSpaceTraceLogic * _usrFileTraceLogic; // +0x8
    NSObject<OS_dispatch_queue> * _fileTraceQueue; // +0x10
    unsigned long long _usrFileTraceScanFrequency; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
    NSMutableDictionary * _dicFileStorageInfo; // +0x28
}
- (void)initFileTraceLogic;
- (BOOL)isScanning;
- (void)addUsrFileStatWithFilePath:(id)arg1 bizName:(id)arg2;
- (void)asyncScanFile;
- (void)addUsrFileStatWithDirectory:(id)arg1 bizName:(id)arg2;
- (void)addUsrFileStatWithFileSize:(unsigned long long)arg1 bizName:(id)arg2;
- (void)removeUsrFileStatWithFileSize:(unsigned long long)arg1 bizName:(id)arg2;
- (void)removeUsrItemAndUpdateTotalSize:(id)arg1;
- (unsigned long long)usrFileSizeOfbizName:(id)arg1;
- (void)saveStatus;
- (id)bizNamesThatHaveDirectoryWithPrefix:(id)arg1;
- (id)directoryOfBizName:(id)arg1 prefix:(id)arg2;
- (unsigned long long)scanIntervalWithPrefix:(id)arg1;
- (void)checkAndClearUsrStoreAndStorageData;
- (unsigned long long)getUsrStoreDataSpaceWithBizName:(id)arg1;
- (void)clearUsrSpaceOfBizName:(id)arg1;
- (void)clearStoreSpaceOfBizName:(id)arg1;
- (void)insertIntoSortedArray:(id)arg1 withItem:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBizDestory:(id)arg1;
- (id)getQueue;
- (id)getFileStorageInfoWithBizName:(id)arg1;
- (id)usrRealPath:(id)arg1 bizName:(id)arg2 error:(id *)arg3;
- (id)readFileDataWithBizName:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 error:(id *)arg5;
- (id)workthread_readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 error:(id *)arg5;
- (id)writeFileDataWithBizName:(id)arg1 localID:(id)arg2 isAppend:(BOOL)arg3 data:(id)arg4;
- (id)workthread_writeFileDataWithBizName:(id)arg1 localID:(id)arg2 isAppend:(BOOL)arg3 data:(id)arg4;
- (BOOL)haveFreeSpace:(id)arg1 writeSize:(long long)arg2 localID:(id)arg3 error:(id *)arg4;
- (id)saveFileWithBizNama:(id)arg1 tempPath:(id)arg2 usrLocalID:(id)arg3;
- (id)workThread_saveFileWithBizName:(id)arg1 tempPath:(id)arg2 usrLocalID:(id)arg3;
- (id)unzipForNative:(id)arg1 filePath:(id)arg2 targetDirectory:(id)arg3;
- (id)unzipWithBizName:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3;
- (id)workThread_unzipWithBizName:(id)arg1 filePath:(id)arg2 targetDirectory:(id)arg3;
- (BOOL)moveFolderFiles:(id)arg1 intoFolder:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@end
