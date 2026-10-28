@interface QBCommonFile : NSObject
{
    NSMutableDictionary * _fileListInfoDic; // +0x8
    NSMutableDictionary * _fileObserverInfo; // +0x10
    QBASINetworkQueue * _networkQueue; // +0x18
    long long _fileCountForDownload; // +0x20
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x28
}
+ (id)sharedInstance;
+ (void)downloadFilesWithModuleName:(id)arg1;
+ (void)listenOnUpdateForFile:(id)arg1 withNotificationName:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
+ (BOOL)shouldDownloadFiles;
+ (id)md5WithModuleName:(id)arg1;
- (id)init;
- (BOOL)saveFileListInfo;
- (void)saveCommonFilesWithRsp:(id)arg1;
- (id)fileInfoArrayWithModuleName:(id)arg1;
- (id)filePathWithName:(id)arg1;
- (id)fileInfoSnapshot;
- (BOOL)saveFileInfoSnapshot:(id)arg1;
- (void)downloadCommonFiles;
- (void)removeSnapshotWithFileName:(id)arg1;
- (id)md5ForData:(id)arg1;
- (void)filesDownloadDidFinished;
- (void)notifyTheObserverWithFileName:(id)arg1;
- (void)commonFileGetComplete:(id)arg1;
- (void)commonFileGetFailed:(id)arg1;
- (void).cxx_destruct;
- (id)fileListInfoDic;
- (void)setFileListInfoDic:(id)arg1;
- (id)fileObserverInfo;
- (void)setFileObserverInfo:(id)arg1;
- (id)networkQueue;
- (void)setNetworkQueue:(id)arg1;
- (long long)fileCountForDownload;
- (void)setFileCountForDownload:(long long)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
@end
