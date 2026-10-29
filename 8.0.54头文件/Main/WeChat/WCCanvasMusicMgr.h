@interface WCCanvasMusicMgr : NSObject <IMusicPlayerExt, VoiceComponentExt>
{
    BOOL _isCanvasPageVisible; // +0x8
    BOOL _isActive; // +0x9
    NSMutableDictionary * _musicPlayDic; // +0x10
    MMTimer * _playMonitorTimer; // +0x18
    NSString * _pausedMusicIdWhenNotVisible; // +0x20
    unsigned long long _lastSeekTimestampMs; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)resignActive;
- (void)becomeActive;
- (void)setIsCanvasPageVisible:(BOOL)arg1;
- (void)tryToPauseWhenDisappear;
- (void)tryToResumeWhenAppear;
- (void)setMusicComponentItem:(id)arg1 andMusicInfo:(id)arg2 andDefaultDuration:(double)arg3 forMusicId:(id)arg4;
- (void)removeMusic:(id)arg1;
- (void)playMusic:(id)arg1;
- (void)playOrResumeMusic:(id)arg1;
- (void)pauseMusic:(id)arg1;
- (void)stopMusic:(id)arg1;
- (void)seekMusic:(id)arg1 seekTime:(double)arg2;
- (void)stopAllMusic;
- (void)stopCurrentPlayer;
- (long long)getPlayState:(id)arg1;
- (double)getDuration:(id)arg1;
- (double)getCurrentTime:(id)arg1;
- (BOOL)isPlaying:(id)arg1;
- (BOOL)isCanvasMusicPlaying;
- (id)getAllMusicPlayInfo;
- (id)getMusicPlayInfo:(id)arg1;
- (BOOL)hasMusicPlayInfo:(id)arg1;
- (id)getCurrentPlayerMusicId;
- (long long)getCurrentPlayerPlayState;
- (id)getMusicPlayInfoForCurrentPlayer;
- (BOOL)hasMusicPlayInfoForCurrentPlayer;
- (BOOL)isCurrentPlayer:(id)arg1;
- (void)notifyMusicPlayStatusChanged:(id)arg1 playState:(long long)arg2;
- (void)notifyMusicPlayTimeChanged:(id)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)notifyMusicPlayError:(id)arg1 errorInfo:(id)arg2;
- (void)notifyVoiceComponentHasPlayWithSound:(id)arg1;
- (void)checkAndUpdatePlayState;
- (void)checkAndSetupPlayMonitorTimer;
- (void)checkPlayerStartTime;
- (BOOL)isPlayingState:(long long)arg1;
- (BOOL)isPendingToPlayWhenVisible:(id)arg1;
- (void)startPlayer:(id)arg1;
- (void)stopPlayer;
- (void)pausePlayer;
- (void)resumePlayer;
- (void)seekPlayer:(double)arg1 playAuto:(BOOL)arg2;
- (void)onMusicPlayStatusChanged;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)setupPlayMonitorTimer;
- (void)stopPlayMonitorTimer;
- (void)onPlayMonitorTimerFired;
- (BOOL)isCanvasPageVisible;
- (id)musicPlayDic;
- (void)setMusicPlayDic:(id)arg1;
- (id)playMonitorTimer;
- (void)setPlayMonitorTimer:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (id)pausedMusicIdWhenNotVisible;
- (void)setPausedMusicIdWhenNotVisible:(id)arg1;
- (unsigned long long)lastSeekTimestampMs;
- (void)setLastSeekTimestampMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

