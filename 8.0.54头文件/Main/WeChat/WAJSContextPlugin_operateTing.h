@interface WAJSContextPlugin_operateTing : WAJSContextPluginBase <TingFlowPlayerNotification, IWAJSContextPlugin_operateMusic>
{
    NSString * _curClientId; // +0x8
    NSMutableSet * _setMusicWhiteListAppid; // +0x10
}
- (id)init;
- (void)playMusic:(id)arg1 referrer:(id)arg2;
- (BOOL)canAccessCurPlayer;
- (BOOL)curPlayerTaskActive;
- (BOOL)curPlayerIsPlaying;
- (BOOL)isWeAppAudioPlaying;
- (BOOL)isWeAppAudioPlayingWithClientId:(id)arg1;
- (id)currentPlayingInfo;
- (id)currentPlayingPlayerState;
- (void)operateMusic:(id)arg1 param:(id)arg2;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (void)pauseMusic;
- (void)stopMusic;
- (void)resumeMusic;
- (void)seekPlay:(float)arg1;
- (double)getDuration;
- (id)getCurrentMusicId;
- (BOOL)monopolizeMusicPlayer;
- (void)setMusicMinimizationViewVisibleIfOccupied:(BOOL)arg1;
- (id)generateMusicId:(id)arg1 appTask:(id)arg2;
- (void)flowPlayer:(id)arg1 onPlayingContextUpdated:(id)arg2;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3 onEvent:(int)arg4 withContext:(id)arg5 withEventContext:(id)arg6 error:(id)arg7;
- (void)onTingRecieveNextTrackControl;
- (void)onTingRecievePreTrackControl;
- (void)initConfigedMusicAppId;
- (id)curClientId;
- (void)setCurClientId:(id)arg1;
- (id)setMusicWhiteListAppid;
- (void)setSetMusicWhiteListAppid:(id)arg1;
- (void).cxx_destruct;
@end

