@interface WCFinderFeedVideoFetcher : NSObject <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>
{
    WCFinderFeedContentVM * _contentVM; // +0x8
    id /* block */ _completion; // +0x10
    WCFinderFeedMediaWrap * _currentDownloadingMediaWrap; // +0x18
}
+ (id)fetcherWithContentVM:(id)arg1;
+ (id)localFilePathOfMediaWrap:(id)arg1;
- (id)initWithContentVM:(id)arg1;
- (void)dealloc;
- (void)asyncGetDownloadVideoWithCompletion:(id /* block */)arg1;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)currentDownloadingMediaWrap;
- (void)setCurrentDownloadingMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end
