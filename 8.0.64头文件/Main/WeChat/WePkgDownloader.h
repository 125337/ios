@interface WePkgDownloader : MMObject
{
    WePkgFileDownloadInfo * _downloadInfo; // +0x8
    id <WePkgDownloaderDelegate> _delegate; // +0x10
    NSURLSessionDownloadTask * _downloadTask; // +0x18
}
- (id)initWithPkgDownloadInfo:(id)arg1 delegate:(id)arg2;
- (id)getFilePathIfAlreadyDownloaded;
- (void)startDownload;
- (void)handleDownloadEndForUrl:(id)arg1 storeIn:(id)arg2 andResponse:(id)arg3 andError:(id)arg4;
- (void)applyPatchIfNeed:(id)arg1 completion:(id /* block */)arg2;
- (int)applyBsPatch:(id)arg1 oldFile:(id)arg2 newFile:(id)arg3;
- (void)cancelDownload;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg1;
- (void).cxx_destruct;
@end
