@interface TingPlayAppNowPlayingHelperImpl : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver, TingApiPlayTaskListenerBridgeDelegate, TingNowPlayingModule, TingLyricDataServiceListener>
{
    BOOL _disableRemoteNextPrev; // +0x8
    BOOL _disableRemoteSeek; // +0x9
    BOOL _onlyResumeWhenPaused; // +0xa
    BOOL _shouldResumeOnPluginReconnect; // +0xb
    BOOL _shouldPauseOnPluginDisconnect; // +0xc
    id <ITingPlayAppConfig> _playAppConfig; // +0x10
    UnitRCWeakPtr * _playApp; // +0x18
    NSString * _curListenId; // +0x20
    id /* block */ _customNowPlayingInfoBlock; // +0x28
    NSMutableDictionary * _nowPlayingInfo; // +0x30
    NSDate * _lastCheckNowPlayingInfoTime; // +0x38
    long long _backgroundState; // +0x40
    MPMediaItemArtwork * _defaultArtwork; // +0x48
    TingApiPlayTaskListenerBridge * _listenerBridge; // +0x50
    TingLyricItem * _curLyricItem; // +0x58
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
- (void)onLyricTextChange:(id)arg1 lyricItem:(id)arg2;
- (void)playApp:(id)arg1 listenId:(id)arg2 lyricItem:(id)arg3;
- (void)resetLyric;
- (void)forceUpdateNowPlayingInfo;
- (void)iRemoteControlCheckEvent:(id)arg1;
- (void)iRemoteControlCheckPluginOn;
- (void)iRemoteControlCheckPluginOff;
- (void)onRemoteControlCheckPluginOn;
- (void)onRemoteControlCheckPluginOff;
- (void)onTingPlayTaskPlayingContextUpdated:(id)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
- (void)onProgressChanged:(long long)arg1 displayTimeMs:(long long)arg2 duration:(long long)arg3;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)setBackgroundState:(long long)arg1;
- (void)onPlayingInfoUpdate:(id)arg1;
- (void)onDestroy;
- (id)playAppConfig;
- (void)setPlayAppConfig:(id)arg1;
- (id)playApp;
- (void)setPlayApp:(id)arg1;
- (id)curListenId;
- (void)setCurListenId:(id)arg1;
- (BOOL)disableRemoteNextPrev;
- (void)setDisableRemoteNextPrev:(BOOL)arg1;
- (BOOL)disableRemoteSeek;
- (void)setDisableRemoteSeek:(BOOL)arg1;
- (BOOL)onlyResumeWhenPaused;
- (void)setOnlyResumeWhenPaused:(BOOL)arg1;
- (BOOL)shouldResumeOnPluginReconnect;
- (void)setShouldResumeOnPluginReconnect:(BOOL)arg1;
- (BOOL)shouldPauseOnPluginDisconnect;
- (void)setShouldPauseOnPluginDisconnect:(BOOL)arg1;
- (id /* block */)customNowPlayingInfoBlock;
- (void)setCustomNowPlayingInfoBlock:(id /* block */)arg1;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (id)lastCheckNowPlayingInfoTime;
- (void)setLastCheckNowPlayingInfoTime:(id)arg1;
- (long long)backgroundState;
- (id)defaultArtwork;
- (void)setDefaultArtwork:(id)arg1;
- (id)listenerBridge;
- (void)setListenerBridge:(id)arg1;
- (id)curLyricItem;
- (void)setCurLyricItem:(id)arg1;
- (void).cxx_destruct;
@end
