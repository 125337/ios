@interface MBExternalVideoControl : WCPlayerConfigControlView <WCPlayerConfigDelegate>
{
    BOOL _isUseVideoCache; // +0x8
    BOOL _hasReportedPlayOneS; // +0x9
    BOOL _isPreloadMode; // +0xa
    long long _playID; // +0x10
    NSString * _mediaID; // +0x18
    NSString * _event; // +0x20
    double _lastReportedMs; // +0x28
    double _totalMs; // +0x30
    id /* block */ _onPreloadInvalidBlock; // +0x38
    id /* block */ _onPreloadReadyBlock; // +0x40
    id <IMBPublicServiceDispatcher> _dispatcher; // +0x48
    id /* block */ _returnBlock; // +0x50
}
- (id)initWithDispatcher:(id)arg1 playID:(long long)arg2 mediaID:(id)arg3 returnBlock:(id /* block */)arg4;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onVideoFristFrameRendered;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onPlayerCreated;
- (void)onGetVideoSize:(CGSize)arg1;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)event:(id)arg1;
- (void)reportStart;
- (void)reportUseVideoCacheState;
- (void)reportDownloadFinish;
- (void)reportPreloadEvent:(id)arg1;
- (long long)currentPreloadSource;
- (id)preloadSourceExtJson;
- (id)stringFromWCPlayerErrorType:(unsigned long long)arg1;
- (id)stringFromWCPlayerState:(unsigned long long)arg1;
- (long long)playID;
- (id)mediaID;
- (id)event;
- (BOOL)isUseVideoCache;
- (void)setIsUseVideoCache:(BOOL)arg1;
- (BOOL)hasReportedPlayOneS;
- (void)setHasReportedPlayOneS:(BOOL)arg1;
- (double)lastReportedMs;
- (void)setLastReportedMs:(double)arg1;
- (double)totalMs;
- (void)setTotalMs:(double)arg1;
- (id /* block */)onPreloadInvalidBlock;
- (void)setOnPreloadInvalidBlock:(id /* block */)arg1;
- (id /* block */)onPreloadReadyBlock;
- (void)setOnPreloadReadyBlock:(id /* block */)arg1;
- (BOOL)isPreloadMode;
- (void)setIsPreloadMode:(BOOL)arg1;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (id /* block */)returnBlock;
- (void)setReturnBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
