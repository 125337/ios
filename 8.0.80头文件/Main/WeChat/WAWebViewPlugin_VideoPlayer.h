@interface WAWebViewPlugin_VideoPlayer : WAWebViewPlugin_embedView <WAVideoPlayerViewDelegate, WAMediaCastingAirPlayDetectorDelegate, WABGAudioMinimizationHostPlayerProtocol, IWAWebViewPlugin_VideoPlayer>
{
    BOOL _didAppear; // +0x8
    Class VideoClass; // +0x10
    CGPoint _contentOffset; // +0x18
    CGRect _webViewFrame; // +0x28
    BOOL _tabBarVisible; // +0x48
    BOOL _scrollEnabled; // +0x49
    BOOL _statusBarBlack; // +0x4a
    long long _contentInsetAdjustmentBehavior; // +0x50
    unsigned int _delayFullScreenViewID; // +0x58
    BOOL _statusBarHidden; // +0x5c
    BOOL _isInVideoFullScreen; // +0x5d
    BOOL _isInBackground; // +0x5e
    BOOL _isRunningInSheetModeBeforeFullScreen; // +0x5f
    unsigned int _currentFullScrennViewID; // +0x60
    UISlider * _volumeViewSlider; // +0x68
    WAMediaCastingAirPlayDetector * _airPlayDetector; // +0x70
    long long _lastOrientation; // +0x78
}
+ (long long)getDirection:(long long)arg1;
- (id)init;
- (void)registerAirPlayDetectorDelegate;
- (void)unregisterAirPlayDectorDelegate;
- (void)dealloc;
- (void)initVolumeViewSilderIfNeeded;
- (void)onWeAppWillEnterBackground:(id)arg1;
- (void)onWeAppDidEnterBackground:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)onWeAppEnterForeground:(id)arg1;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleVideoAppear;
- (void)handleVideoDisappear;
- (void)disableFullScreen;
- (id)insertVideo:(id)arg1 pos:(CGRect)arg2 videoId:(unsigned int)arg3 parentId:(unsigned int)arg4 referrerPolicyType:(unsigned long long)arg5 backgroundColor:(id)arg6;
- (BOOL)removeVideoPlayer:(unsigned int)arg1;
- (id)getVideoPlayer:(unsigned int)arg1;
- (void)onVolumeChange:(double)arg1;
- (id)getVolumeSlider;
- (BOOL)activeAudioModule:(BOOL)arg1 identifier:(id)arg2 listener:(id)arg3;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)videoPlayerView:(id)arg1 onVideoStateChange:(long long)arg2;
- (id)getWAVC;
- (BOOL)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (void)_sendVideoBackgroundPlaybackChangeEvent:(BOOL)arg1 videoPlayerId:(long long)arg2 data:(id)arg3;
- (id)minimizationItemInfoWithVideoView:(id)arg1;
- (long long)forceInterfaceOrientation;
- (void)enableFullScreen:(BOOL)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)enableWebViewScroll:(BOOL)arg1;
- (id)getPlaybackVideoSnapshot;
- (id)getCurrentSnapshot;
- (void)snapshotVideoBegin;
- (void)snapshotVideoEnd;
- (void)pauseVideoTemp:(BOOL)arg1;
- (void)pauseVideoTemp:(BOOL)arg1 needFloat:(BOOL)arg2;
- (BOOL)isForground;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(BOOL)arg2;
- (void)didRotate:(id)arg1;
- (id)getOrientationStr;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (BOOL)isBackgroundPlaybackActive;
- (id)currentBgVideoView;
- (BOOL)isPlaying:(id)arg1;
- (void)updateBackgroundPlayback:(id)arg1 videoId:(unsigned int)arg2;
- (void)requestBackgroundPlayback:(id)arg1 videoId:(unsigned int)arg2;
- (id)minimizationHostId;
- (void)exitBackgroundPlayback:(id)arg1 videoId:(unsigned int)arg2 needClearBgInfo:(BOOL)arg3;
- (void)clearBGMinimizationInfo:(id)arg1;
- (void)onVideoPauseByInterrupt:(id)arg1;
- (void)onVideoPlayByResume:(id)arg1;
- (void)onMinimizeTaskClosed:(id)arg1;
- (void)onMinimizeTaskStateChangeToMaximized:(id)arg1;
- (BOOL)isInVideoFullScreen;
- (void)setIsInVideoFullScreen:(BOOL)arg1;
- (id)volumeViewSlider;
- (void)setVolumeViewSlider:(id)arg1;
- (id)airPlayDetector;
- (void)setAirPlayDetector:(id)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (unsigned int)currentFullScrennViewID;
- (void)setCurrentFullScrennViewID:(unsigned int)arg1;
- (BOOL)isRunningInSheetModeBeforeFullScreen;
- (void)setIsRunningInSheetModeBeforeFullScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
