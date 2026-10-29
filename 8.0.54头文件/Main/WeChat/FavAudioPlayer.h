@interface FavAudioPlayer : MMUserService <WCAudioModuleDelegate, AudioPlayerDelegate, MMServiceProtocol>
{
    FavAudioInfo * m_curAudioInfo; // +0x8
    FavAudioInfo * m_lastAudioInfo; // +0x10
    unsigned int m_uiAudioOffset; // +0x18
    int m_playStat; // +0x1c
    MMTimer * m_playTimer; // +0x20
    NSDate * m_lastStartTime; // +0x28
    unsigned int m_uiLastPlayedTime; // +0x30
    id <AudioPlayerProtocol> _audioPlayer; // +0x38
}
- (id)init;
- (id)generatePlayerWithFormat:(unsigned int)arg1;
- (void)SetAndPlayFavAudio:(id)arg1;
- (void)SetAndPlayFavAudio:(id)arg1 startFromOffsetms:(unsigned int)arg2;
- (void)StartPlayFromOffsetms:(unsigned int)arg1;
- (void)setProgress:(unsigned int)arg1;
- (BOOL)StopPlay;
- (BOOL)PausePlay;
- (BOOL)ReStartPlay;
- (BOOL)isPlaying;
- (int)getPlayStat;
- (id)getCurAudioInfo;
- (double)getAudioOffset;
- (void)audioPlayerBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)onBeginPlaying;
- (void)onEndPlaying;
- (void)onPlayError;
- (void)stopTimer;
- (void)startTimer;
- (void)onAudioPlaying;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (id)m_lastStartTime;
- (void)setM_lastStartTime:(id)arg1;
- (id)m_curAudioInfo;
- (void)setM_curAudioInfo:(id)arg1;
- (id)m_lastAudioInfo;
- (void)setM_lastAudioInfo:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (void).cxx_destruct;
@end

