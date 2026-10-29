@interface WCFinderPrepareFeedVideoTask : NSObject <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>
{
    BOOL _isCompleted; // +0x8
    NSString * _tid; // +0x10
    WCFinderFeedMediaWrap * _mediaWrap; // +0x18
    WCPlayerView * _playerView; // +0x20
    id /* block */ _progressBlock; // +0x28
    id /* block */ _onVideoReady; // +0x30
    id /* block */ _onFailed; // +0x38
}
- (id)initWithMediaWrap:(id)arg1 playerView:(id)arg2 progressBlock:(id /* block */)arg3 onVideoReady:(id /* block */)arg4 onFailed:(id /* block */)arg5;
- (void)dealloc;
- (void)start;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)onVideoReady;
- (void)setOnVideoReady:(id /* block */)arg1;
- (id /* block */)onFailed;
- (void)setOnFailed:(id /* block */)arg1;
- (BOOL)isCompleted;
- (void)setIsCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
