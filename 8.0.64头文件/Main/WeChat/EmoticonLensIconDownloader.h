@interface EmoticonLensIconDownloader : MMObject <ICdnComMgrExt>
{
    id <EmoticonLensIconDownloaderDelegate> _delegate; // +0x8
    NSMutableDictionary * _downloadingTasks; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startDownloadLensIcon:(id)arg1 filePath:(id)arg2 forLensId:(id)arg3;
- (void)onDownloadError:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadingTasks;
- (void)setDownloadingTasks:(id)arg1;
- (void).cxx_destruct;
@end
