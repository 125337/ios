@interface WCFinderDataToolLivePhotoDownloadTask : NSObject <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>
{
    NSString * _downloadIdentifier; // +0x8
    WCFinderFeedMediaWrap * _mediaWrap; // +0x10
    id /* block */ _completion; // +0x18
}
- (id)initWithMediaWrap:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)start;
- (void)finishWithSuccess:(BOOL)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (id)downloadIdentifier;
- (void)setDownloadIdentifier:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
