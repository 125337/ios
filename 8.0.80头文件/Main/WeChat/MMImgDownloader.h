@interface MMImgDownloader : NSObject
{
    id <MMImgDownloaderDelegate> _delegate; // +0x8
}
- (BOOL)canDownloadItem:(id)arg1;
- (void)initDownloadItem:(id)arg1;
- (void)startDownloadImage:(id)arg1 bHD:(BOOL)arg2;
- (void)stopDownloadImage:(id)arg1;
- (void)startDownloadVideo:(id)arg1 bHD:(BOOL)arg2 bSave:(BOOL)arg3 bSilent:(BOOL)arg4;
- (void)stopDownloadVideo:(id)arg1;
- (void)silentImageDownloadTasks:(id)arg1;
- (void)silentDownloadToBackupDevice:(id)arg1;
- (unsigned long long)downloadStatusForItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
