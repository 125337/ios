@interface WCMediaDownloader : NSObject <WCFacadeExt, WCPlayerDownloaderExt>
{
    WCDataItem * _dataItem; // +0x8
    WCMediaItem * _mediaItem; // +0x10
    WCMediaDownloader * _retainedSelf; // +0x18
    id /* block */ _completionHandler; // +0x20
}
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)dealloc;
- (void)_retainSelf;
- (void)_releaseSelf;
- (BOOL)hasDownloaded;
- (void)startDownloadWithCompletionHandler:(id /* block */)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)clear;
- (BOOL)Image_hasDownloaded;
- (void)Image_startDownload;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (BOOL)Video_hasDownloaded;
- (void)Video_startDownload;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (id)dataItem;
- (id)mediaItem;
- (id)retainedSelf;
- (void)setRetainedSelf:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

