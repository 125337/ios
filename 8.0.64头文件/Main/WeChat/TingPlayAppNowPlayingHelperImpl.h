@interface TingPlayAppNowPlayingHelperImpl : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver, TingApiPlayTaskListenerBridgeDelegate, TingNowPlayingModule>
{
    id <TingPlayAppConfig> _playAppConfig; // +0x8
    UnitRCWeakPtr * _playApp; // +0x10
    NSString * _curListenId; // +0x18
    NSMutableDictionary * _nowPlayingInfo; // +0x20
    NSDate * _lastCheckNowPlayingInfoTime; // +0x28
    long long _backgroundState; // +0x30
    MPMediaItemArtwork * _defaultArtwork; // +0x38
    TingApiPlayTaskListenerBridge * _listenerBridge; // +0x40
}
+ (id)handlerArtworkResponseImage:(id)arg1;
+ (id)reportParamWithPlayApp:(id)arg1;
- (id)initWithPlayAppConfig:(id)arg1 playApp:(id)arg2;
- (void)dealloc;
- (id)playTask;
- (void)resumePlayer;
- (void)pausePlayer;
- (id)moduleId;
- (BOOL)canResetNowPlay;
- (BOOL)canUpdateNowPlayingInfoCenter;
- (void)resetRemoteControlAndPlayingInfo;
- (void)resetRemoteControlAndPlayingInfoWithPlayingItem:(id)arg1;
- (long long)onPlayCommand:(id)arg1;
- (long long)onPauseCommand:(id)arg1;
- (long long)onPlayPauseCommand:(id)arg1;
- (long long)onChangePlaybackPositionCommand:(id)arg1;
- (long long)onNextTrackCommand:(id)arg1;
- (long long)onPrevTrackCommand:(id)arg1;
- (void)registerCommandCenterActions;
- (void)refreshRemoteControlButtonStatus:(int)arg1;
- (void)registerMPRemoteCommand:(id)arg1 action:(SEL)arg2;
- (void)setMPRemoteCommand:(id)arg1 actionHandler:(id /* block */)arg2;
- (long long)onHandleMPRemoteCommandClicked:(id)arg1;
- (void)updateNowPlayingInfoIfNeedWithPlayingItem:(id)arg1 playTask:(id)arg2;
- (void)onNowPlayingInfoUpdated:(id)arg1;
- (id)nowPlayingInfoWithPlayingItem:(id)arg1 playTask:(id)arg2;
- (id)nowPlayingInfoWithPlayingItemBase:(id)arg1 playTask:(id)arg2;
- (id)genNowPlayingArtworkForImage:(id)arg1;
- (unsigned long long)__genNowPlayingPlayBackState:(int)arg1;
- (void)iRemoteControlCheckEvent:(id)arg1;
- (void)iRemoteControlCheckPluginOn;
- (void)iRemoteControlCheckPluginOff;
- (void)onRemoteControlCheckPluginOn;
- (void)onRemoteControlCheckPluginOff;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)setBackgroundState:(long long)arg1;
- (void)onPlayingInfoUpdate:(id)arg1;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (id)playApp;
- (void)setPlayApp:(id)arg1;
- (id)curListenId;
- (void)setCurListenId:(id)arg1;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (id)lastCheckNowPlayingInfoTime;
- (void)setLastCheckNowPlayingInfoTime:(id)arg1;
- (long long)backgroundState;
- (id)defaultArtwork;
- (void)setDefaultArtwork:(id)arg1;
- (id)listenerBridge;
- (void)setListenerBridge:(id)arg1;
- (void).cxx_destruct;
@end
