@interface TingNowPlayingInfoCenter : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver, TingFlowPlayerNotification, TingNowPlayingModule>
{
    NSMutableDictionary * _nowPlayingInfo; // +0x8
    NSDate * _lastCheckNowPlayingInfoTime; // +0x10
    long long _backgroundState; // +0x18
    MPMediaItemArtwork * _defaultArtwork; // +0x20
}
+ (id)handlerArtworkResponseImage:(id)arg1;
+ (id)reportParamWithPlayer:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)activePlayer;
- (id)moduleId;
- (BOOL)canResetNowPlay;
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
- (id)genNowPlayingArtworkForImage:(id)arg1;
- (unsigned long long)__genNowPlayingPlayBackState:(int)arg1;
- (void)iRemoteControlCheckEvent:(id)arg1;
- (void)onPlayingInfoUpdate:(id)arg1;
- (void)flowPlayer:(id)arg1 onPlayingContextUpdated:(id)arg2;
- (void)flowPlayer:(id)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(id)arg3 onEvent:(int)arg4 withContext:(id)arg5;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)setBackgroundState:(long long)arg1;
- (void)checkUpdateProgressChanged:(id)arg1;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (id)lastCheckNowPlayingInfoTime;
- (void)setLastCheckNowPlayingInfoTime:(id)arg1;
- (long long)backgroundState;
- (id)defaultArtwork;
- (void)setDefaultArtwork:(id)arg1;
- (void).cxx_destruct;
@end

