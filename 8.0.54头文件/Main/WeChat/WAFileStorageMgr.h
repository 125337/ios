@interface WAFileStorageMgr : MMUserService <WAFileSpaceTraceLogicScanDataSource, WAAppTaskMgrExt, MMServiceProtocol>
{
    WAFileSpaceTraceLogic * _usrFileTraceLogic; // +0x8
    NSObject<OS_dispatch_queue> * _fileTraceQueue; // +0x10
    unsigned long long _usrFileTraceScanFrequency; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
    NSMutableDictionary * _dicFileStorageInfo; // +0x28
    NSMutableDictionary * _dicAppHasReportTempLimit; // +0x30
}
+ (id)getFormatPathWithMediaIdentifier:(id)arg1;
+ (id)getTempVideoPathWithMediaIdentifier:(id)arg1;
- (void)checkAndClearUsrStoreAndStorageData;
- (unsigned long long)getUsrStoreDataSpaceWithAppId:(id)arg1;
- (void)clearUsrSpaceOfAppId:(id)arg1;
- (void)clearStoreSpaceOfAppId:(id)arg1;
- (void)clearOpenDataSpaceOfAppId:(id)arg1;
- (void)clearStorageSpaceOfAppId:(id)arg1;
- (void)clearSinglePageSpaceOfAppId:(id)arg1;
- (void)clearWxPrivateSpaceOfAppId:(id)arg1;
- (void)insertIntoSortedArray:(id)arg1 withItem:(id)arg2;
- (void)removeGeneratedKeysFromKeychainWithAppId:(id)arg1;
- (void)initFileTraceLogic;
- (BOOL)isScanning;
- (void)addUsrFileStatWithFilePath:(id)arg1 appId:(id)arg2;
- (void)asyncScanFile;
- (void)addUsrFileStatWithDirectory:(id)arg1 appId:(id)arg2;
- (void)addUsrFileStatWithFileSize:(unsigned long long)arg1 appId:(id)arg2;
- (void)removeUsrFileStatWithFileSize:(unsigned long long)arg1 appId:(id)arg2;
- (void)removeUsrItemAndUpdateTotalSize:(id)arg1;
- (unsigned long long)usrFileSizeOfappId:(id)arg1;
- (void)saveStatus;
- (id)appIdsThatHaveDirectoryWithPrefix:(id)arg1;
- (id)directoryOfAppId:(id)arg1 prefix:(id)arg2;
- (unsigned long long)scanIntervalWithPrefix:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getQueue;
- (id)usrRealPath:(id)arg1 appID:(id)arg2 error:(id *)arg3;
- (void)saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 usrPath:(id)arg3 handler:(id /* block */)arg4;
- (void)saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 handler:(id /* block */)arg3;
- (void)removeSavedFileWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(id /* block */)arg3;
- (void)getSavedFileListWithAppID:(id)arg1 handler:(id /* block */)arg2;
- (void)getSavedFileInfoWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(id /* block */)arg3;
- (void)getFileInfoWithAppID:(id)arg1 localID:(id)arg2 digestAlgorithm:(id)arg3 handler:(id /* block */)arg4;
- (void)readFileToBase64WithAppID:(id)arg1 localID:(id)arg2 handler:(id /* block */)arg3;
- (void)writeFileFromBase64WithAppID:(id)arg1 localID:(id)arg2 base64:(id)arg3 handler:(id /* block */)arg4;
- (void)readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)writeFileDataWithAppID:(id)arg1 localID:(id)arg2 isAppend:(BOOL)arg3 data:(id)arg4 handler:(id /* block */)arg5;
- (void)unzipWithAppID:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3 handler:(id /* block */)arg4;
- (void)unzipAsTempWithAppID:(id)arg1 localID:(id)arg2 handler:(id /* block */)arg3;
- (void)readZipEntryWithAppID:(id)arg1 localID:(id)arg2 entries:(id)arg3 needReadAll:(BOOL)arg4 globalEncoding:(id)arg5 handler:(id /* block */)arg6;
- (void)reportFileSizeByAppId:(id)arg1;
- (void)workThread_saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 usrPath:(id)arg3 handler:(id /* block */)arg4;
- (void)workThread_saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 handler:(id /* block */)arg3;
- (void)workThread_removeSavedFileWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(id /* block */)arg3;
- (void)workThread_getSavedFileListWithAppID:(id)arg1 handler:(id /* block */)arg2;
- (void)workThread_getSavedFileInfoWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(id /* block */)arg3;
- (void)workThread_getFileInfoWithAppID:(id)arg1 localID:(id)arg2 digestAlgorithm:(id)arg3 handler:(id /* block */)arg4;
- (void)workThread_updateFileStorageConfigWithAppID:(id)arg1;
- (id)getFileStorageInfoWithAppID:(id)arg1;
- (void)workthread_readFileToBase64WithAppID:(id)arg1 localID:(id)arg2 handler:(id /* block */)arg3;
- (void)workthread_writeFileFromBase64WithAppID:(id)arg1 localID:(id)arg2 base64:(id)arg3 handler:(id /* block */)arg4;
- (void)workthread_readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (BOOL)haveFreeSpace:(id)arg1 writeSize:(long long)arg2 localID:(id)arg3 error:(id *)arg4;
- (void)workthread_writeFileDataWithAppID:(id)arg1 localID:(id)arg2 isAppend:(BOOL)arg3 data:(id)arg4 handler:(id /* block */)arg5;
- (void)workThread_reportFileSizeByAppId:(id)arg1;
- (void)workThread_unzipWithAppID:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3 handler:(id /* block */)arg4;
- (void)workThread_readZipEntryWithAppID:(id)arg1 localID:(id)arg2 entries:(id)arg3 needReadAll:(BOOL)arg4 globalEncoding:(id)arg5 handler:(id /* block */)arg6;
- (void)workThread_unzipAsTempWithAppID:(id)arg1 localID:(id)arg2 handler:(id /* block */)arg3;
- (id)moveFolderFilesToTemp:(id)arg1 withAppID:(id)arg2;
- (BOOL)moveFolderFiles:(id)arg1 intoFolder:(id)arg2 error:(id *)arg3;
- (void)workthread_removeSinglePageDirWithAppID:(id)arg1;
- (BOOL)setReportFlag:(id)arg1;
- (void)clearReportFlag:(id)arg1;
- (id)decodeData:(id)arg1 withEncoding:(id)arg2;
- (id)getZipEntryDicOfCurrentFile:(id)arg1 length:(unsigned int)arg2 position:(unsigned int)arg3 encoding:(id)arg4;
- (void)onAppTaskDidFinishColdLaunchWithAppId:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void).cxx_destruct;
@end

