@interface MMWebViewPlugin_NativeVideo : MMWebViewPlugin_NativeView <MMWebNativeVideoPlayerDelegate, WCFinderMPVideoInteractionKeyExt>
{
    NSMutableDictionary * m_viewsDict; // +0x8
    NSMutableDictionary * m_contextDict; // +0x10
    MMUIButton * m_exitFullscreenBtn; // +0x18
    long long m_lastOrientation; // +0x20
    BOOL m_shouldForbidWebViewBottomBar; // +0x28
    BOOL m_isVideoInFullScreen; // +0x29
    NSMutableDictionary * _dictLocalFinderPlayInfos; // +0x30
    NSMutableDictionary * _dictLocalFinderFeedInfos; // +0x38
}
+ (unsigned int)playerCountGlobal;
- (id)init;
- (void)dealloc;
- (void)resetAllStatus;
- (void)insertPlayerView:(id)arg1 jsContext:(id)arg2 errMsg:(id *)arg3;
- (void)updateVideoWithParamsDict:(id)arg1 errMsg:(id *)arg2;
- (void)updatePlayerConfigWithParamsDict:(id)arg1 playerView:(id)arg2 errMsg:(id *)arg3;
- (void)updateFrame:(CGRect)arg1 animDuration:(double)arg2 view:(id)arg3;
- (id)getVideoPlayer:(unsigned int)arg1;
- (id)genPlayerViewWithViewId:(unsigned int)arg1;
- (BOOL)shouldForbidWebViewBottomBar;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
- (void)onVideoBeginPlay:(unsigned int)arg1;
- (void)onVideoCurrTimeChanged:(double)arg1 totalDuration:(double)arg2 viewId:(unsigned int)arg3;
- (void)onVideoDidPlayToEndTime:(unsigned int)arg1;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2 params:(id)arg3;
- (void)onPlayerSeekCompelete:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoBufferingPercent:(double)arg1 viewId:(unsigned int)arg2;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(id)arg2 viewId:(unsigned int)arg3;
- (BOOL)isNeedInfoLogForEvent:(id)arg1;
- (void)dispatchEvent:(id)arg1 params:(id)arg2 toViewId:(unsigned int)arg3;
- (void)dispatchEvent:(id)arg1 params:(id)arg2 toViewId:(unsigned int)arg3 onlyToWebCompt:(BOOL)arg4;
- (void)dispatchEventToAllViews:(id)arg1 params:(id)arg2;
- (void)dispatchEventToAllViews:(id)arg1 params:(id)arg2 onlyToWebCompt:(BOOL)arg3;
- (void)play:(unsigned int)arg1;
- (void)pause:(unsigned int)arg1;
- (void)stop:(unsigned int)arg1;
- (void)seek:(unsigned int)arg1 pos:(float)arg2;
- (void)setPlayBackRate:(double)arg1 viewId:(unsigned int)arg2;
- (BOOL)isPlaying:(unsigned int)arg1;
- (id)playContextOfViewId:(unsigned int)arg1;
- (void)removePlayerView:(unsigned int)arg1;
- (void)pauseAllVideosAndResumeWhenAppear;
- (void)resumeAllVideosWhenAppear;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (BOOL)handleFullScreenPluginEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (BOOL)handleLifeCyclePluginEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (BOOL)handleOtherPluginEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (void)setExitFullscreenBtnHidden:(BOOL)arg1 image:(id)arg2 frame:(CGRect)arg3;
- (void)initExitFullscreenBtnIfNeed;
- (void)onExitFullscreenBtnClicked;
- (void)didRotate:(id)arg1;
- (int)orientationForJSAPI:(long long)arg1;
- (void)onBrightnessDidChange:(id)arg1;
- (void)onVolumeDidChange:(id)arg1;
- (void)onAppResignActive;
- (void)onAppBecomeActive;
- (void)onVideoFullScreenStateChangedTo:(BOOL)arg1;
- (id)takeVideoSnapshot:(unsigned int)arg1;
- (BOOL)isActive;
- (void)exchangeFinderData:(id)arg1 jsEvent:(id)arg2;
- (void)pushPlayerView:(unsigned int)arg1 localId:(id)arg2 jsEvent:(id)arg3 extInfo:(id)arg4;
- (void)changeFeedLikeStatusWithJSON:(id)arg1 isLike:(BOOL)arg2;
- (void)changeFeedFavStatusWithJSON:(id)arg1 isFav:(BOOL)arg2;
- (id)MPVideoFinderInfoWithLocalFeedId:(id)arg1;
- (void)finderMPVideoInteractionUpdate:(id)arg1;
- (id)dictLocalFinderPlayInfos;
- (void)setDictLocalFinderPlayInfos:(id)arg1;
- (id)dictLocalFinderFeedInfos;
- (void)setDictLocalFinderFeedInfos:(id)arg1;
- (void).cxx_destruct;
@end
