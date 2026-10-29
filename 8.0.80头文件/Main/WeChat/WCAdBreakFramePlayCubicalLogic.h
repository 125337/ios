@interface WCAdBreakFramePlayCubicalLogic : WCAdBreakFramePlayBaseLogic <WCPlayerDownloaderExt, WCCanvasPageViewControllerExt, WCAdAlphaVideoViewDelegate>
{
    BOOL _intentToPlay; // +0x8
    WCAdBreakFrameView * _adBreakFrameView; // +0x10
    double _coverHideDelayInterval; // +0x18
}
- (id)initWithBreakFrameInfo:(id)arg1 dataItem:(id)arg2 alphaVideoView:(id)arg3 bTimelineScene:(BOOL)arg4 adBreakFrameView:(id)arg5;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)reset;
- (void)onCanvasViewDidBePushed;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlayExit;
- (BOOL)matchBreakFrameVideoWithMediaId:(id)arg1;
- (void)dealloc;
- (double)cubicalCoverHideDelayInterval;
- (id)adBreakFrameView;
- (void)setAdBreakFrameView:(id)arg1;
- (BOOL)intentToPlay;
- (void)setIntentToPlay:(BOOL)arg1;
- (double)coverHideDelayInterval;
- (void)setCoverHideDelayInterval:(double)arg1;
- (void).cxx_destruct;
@end
