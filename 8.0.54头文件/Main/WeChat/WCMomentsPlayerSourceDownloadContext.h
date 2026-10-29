@interface WCMomentsPlayerSourceDownloadContext : NSObject
{
    BOOL _isPreload; // +0x8
    BOOL _isDownloading; // +0x9
    BOOL _isDownloadMoovReady; // +0xa
    BOOL _isDownloadCompleted; // +0xb
    WCDownloadArgsWrap * _downloadArgs; // +0x10
    WCMomentsPlayerSourceDetermination * _sourceDetermination; // +0x18
    NSDate * _downloadStartTime; // +0x20
    NSDate * _downloadEndTime; // +0x28
    CdnComVideoProcessInfo * _downloadProgressInfoWhenMoovReady; // +0x30
    CdnDownloadTaskInfo * _downloadTaskInfoWhenStopped; // +0x38
    CdnProgressInfo * _downloadProgressInfoWhenPreloadCompleted; // +0x40
}
- (id)downloadArgs;
- (void)setDownloadArgs:(id)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (id)sourceDetermination;
- (void)setSourceDetermination:(id)arg1;
- (id)downloadStartTime;
- (void)setDownloadStartTime:(id)arg1;
- (id)downloadEndTime;
- (void)setDownloadEndTime:(id)arg1;
- (id)downloadProgressInfoWhenMoovReady;
- (void)setDownloadProgressInfoWhenMoovReady:(id)arg1;
- (id)downloadTaskInfoWhenStopped;
- (void)setDownloadTaskInfoWhenStopped:(id)arg1;
- (id)downloadProgressInfoWhenPreloadCompleted;
- (void)setDownloadProgressInfoWhenPreloadCompleted:(id)arg1;
- (BOOL)isDownloading;
- (void)setIsDownloading:(BOOL)arg1;
- (BOOL)isDownloadMoovReady;
- (void)setIsDownloadMoovReady:(BOOL)arg1;
- (BOOL)isDownloadCompleted;
- (void)setIsDownloadCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

