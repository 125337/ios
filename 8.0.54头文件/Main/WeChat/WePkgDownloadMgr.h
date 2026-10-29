@interface WePkgDownloadMgr : MMObject <WePkgDownloaderDelegate>
{
    NSMutableArray * _arrWaitingDownloadList; // +0x8
    WePkgFileDownloadInfo * _currDownladInfo; // +0x10
    WePkgDownloader * _downloader; // +0x18
}
- (id)init;
- (void)addToDownloadList:(id)arg1;
- (void)cancelDownloadIfVersionNotMatch:(id)arg1 Version:(id)arg2;
- (void)clearCurrentDownloadingTask;
- (void)tryNextDownload;
- (void)downloaderDidFinishDownloadFor:(id)arg1 TmpFilePath:(id)arg2 isSuccess:(BOOL)arg3 isLocalValidFile:(BOOL)arg4;
- (int)checkIfFileValidAfterDownloadSuccess:(id)arg1 TmpFilePath:(id)arg2;
- (void).cxx_destruct;
@end

