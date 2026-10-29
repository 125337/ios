@interface WAWebViewPlugin_LivePlayer : WAWebViewPlugin_embedView <TXLivePlayJSAdapterDelegate, WAMediaCastingAirPlayDetectorDelegate, WABGAudioMinimizationHostPlayerProtocol, IWAWebViewPlugin_LivePlayer>
{
    CGRect _webViewFrame; // +0x8
    BOOL _tabBarVisible; // +0x28
    CGPoint _contentOffset; // +0x30
    BOOL _statusBarBlack; // +0x40
    BOOL _scrollEnabled; // +0x41
    BOOL _isInLiveFullScreen; // +0x42
    BOOL _isInBackground; // +0x43
    long long _lastOrientation; // +0x48
    NSMutableDictionary * _playerDic; // +0x50
    id /* block */ _operateCallback; // +0x58
    WAMediaCastingAirPlayDetector * _airPlayDetector; // +0x60
}
- (id)init;
- (void)onWeAppWillEnterBackground;
- (void)onWeAppDidEnterBackground;
- (void)onWeAppEnterForeground;
- (void)onAppEnterForeground;
- (void)dealloc;
- (unsigned int)insertLivePlayer:(unsigned int)arg1 parentId:(unsigned int)arg2 pos:(CGRect)arg3 configs:(id)arg4;
- (void)updateLivePlayer:(unsigned int)arg1 configs:(id)arg2 pos:(CGRect)arg3;
- (void)updateLivePlayer:(unsigned int)arg1 configs:(id)arg2;
- (void)operateLivePlayer:(unsigned int)arg1 type:(id)arg2 data:(id)arg3 completion:(id /* block */)arg4;
- (void)onLivePlayerCallBack:(BOOL)arg1 errNo:(long long)arg2 errMsg:(id)arg3;
- (void)_sendLiveBackgroundPlaybackChangeEvent:(BOOL)arg1 liveId:(long long)arg2;
- (id)minimizationItemInfoWithLivePlayer:(id)arg1;
- (void)snapshotLivePlayer:(unsigned int)arg1 needCompress:(BOOL)arg2 isSnapshotStream:(BOOL)arg3 finish:(id /* block */)arg4;
- (BOOL)removeLivePlayer:(unsigned int)arg1;
- (id)getLivePlayerWithPlayerId:(unsigned int)arg1;
- (void)onAudioVolumeEvaluation:(unsigned int)arg1 volume:(int)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(id)arg2 playerId:(unsigned int)arg3 param:(id)arg4;
- (void)onVideoEvent:(id)arg1 playerId:(unsigned int)arg2;
- (void)onPlayNetStatus:(id)arg1 playerId:(unsigned int)arg2;
- (void)enableFullScreen:(BOOL)arg1 orientation:(long long)arg2 playerId:(unsigned int)arg3;
- (void)disableFullScreen;
- (void)onPlayerEvent:(id)arg1 param:(id)arg2;
- (void)onPlayerEvent:(id)arg1 param:(id)arg2 toWebview:(BOOL)arg3;
- (void)onInsertLogView:(unsigned int)arg1;
- (CGRect)fullScreenFrame;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)didRotate:(id)arg1;
- (id)getOrientationStr;
- (id)getWebViewController;
- (void)registerAirPlayDetectorDelegate;
- (void)unregisterAirPlayDectorDelegate;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(BOOL)arg2;
- (void)willEnterBackgroundPlayback:(id)arg1 playerId:(unsigned int)arg2;
- (void)requestBackgroundPlayback:(id)arg1 playerId:(unsigned int)arg2;
- (void)exitBackgroundPlayback:(id)arg1 playerId:(unsigned int)arg2 needClearBgInfo:(BOOL)arg3;
- (BOOL)isPlaying:(id)arg1;
- (void)onMinimizeTaskClosed:(id)arg1;
- (void)onMinimizeTaskStateChangeToMaximized:(id)arg1;
- (BOOL)isInLiveFullScreen;
- (void)setIsInLiveFullScreen:(BOOL)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (id)playerDic;
- (void)setPlayerDic:(id)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (id /* block */)operateCallback;
- (void)setOperateCallback:(id /* block */)arg1;
- (id)airPlayDetector;
- (void)setAirPlayDetector:(id)arg1;
- (void).cxx_destruct;
@end

