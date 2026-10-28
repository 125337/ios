@interface TingNowPlayingInfoCenter : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver, TingFlowPlayerNotification, TingNowPlayingInfoCenterDelegate, TingLyricDataServiceListener, TingNowPlayingModule>
{
    id <TingNowPlayingInfoCenterDelegate> _delegate; // +0x8
    NSString * _curListenId; // +0x10
    TingLyricItem * _curLyricItem; // +0x18
    NSMutableDictionary * _nowPlayingInfo; // +0x20
    NSDate * _lastCheckNowPlayingInfoTime; // +0x28
    long long _backgroundState; // +0x30
    MPMediaItemArtwork * _defaultArtwork; // +0x38
}
+ (id)handlerArtworkResponseImage:(id)arg1;
+ (id)reportParamWithPlayer:(id)arg1;
- (id)init;
- (id)defaultArtwork;
- (void)dealloc;
- (id)activePlayer;
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
- (void)updateNowPlayingInfoIfNeedWithPlayingItem:(id)arg1 player:(id)arg2;
- (void)onNowPlayingInfoUpdated:(id)arg1;
- (id)nowPlayingInfoWithPlayingItem:(id)arg1 player:(id)arg2;
- (id)nowPlayingInfoWithPlayingItemBase:(id)arg1 player:(id)arg2;
- (id)genNowPlayingArtworkForImage:(id)arg1;
- (unsigned long long)__genNowPlayingPlayBackState:(int)arg1;
- (void)iRemoteControlCheckEvent:(id)arg1;
- (void)iRemoteControlCheckPluginOn;
- (void)iRemoteControlCheckPluginOff;
- (void)onRemoteControlCheckPluginOn;
- (void)onRemoteControlCheckPluginOff;
- (void)onPlayingInfoUpdate:(id)arg1;
- (void)flowPlayer:(id)arg1 onItemLoaded:(id)arg2;
- (void)flowPlayer:(id)arg1 onPlayingContextUpdated:(id)arg2;
- (void)flowPlayer:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)flowPlayer:(id)arg1 listenId:(id)arg2 lyricItem:(id)arg3;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)setBackgroundState:(long long)arg1;
- (void)checkUpdateProgressChanged:(id)arg1;
- (void)forceUpdateNowPlayingInfo;
- (void)onLyricTextChange:(id)arg1 lyricItem:(id)arg2;
- (void)resetLyric;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)curListenId;
- (void)setCurListenId:(id)arg1;
- (id)curLyricItem;
- (void)setCurLyricItem:(id)arg1;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (id)lastCheckNowPlayingInfoTime;
- (void)setLastCheckNowPlayingInfoTime:(id)arg1;
- (long long)backgroundState;
- (void)setDefaultArtwork:(id)arg1;
- (void).cxx_destruct;
@end
