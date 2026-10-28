@interface WAJSContextPlugin_operateMusic : WAJSContextPluginBase <IMusicPlayerExt, IRemoteControlMusicPlayerExt, IWAJSContextPlugin_operateMusic>
{
    NSString * _currentMusic; // +0x8
}
- (id)init;
- (void)playMusic:(id)arg1;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (void)pauseMusic;
- (void)resumeMusic;
- (void)stopMusic;
- (void)seekPlay:(float)arg1;
- (double)getDuration;
- (id)generateMusicId:(id)arg1;
- (id)getCurrentMusicId;
- (BOOL)monopolizeMusicPlayer;
- (BOOL)curPlayerIsPlaying;
- (void)setMusicMinimizationViewVisibleIfOccupied:(BOOL)arg1;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (id)currentMusic;
- (void)setCurrentMusic:(id)arg1;
- (void).cxx_destruct;
@end
