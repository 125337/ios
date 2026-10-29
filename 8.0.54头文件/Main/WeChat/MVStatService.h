@interface MVStatService : MMUserService <MMServiceProtocol>
{
    BOOL _needRefreshSameSongSessionidAfterMusicStop; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _playSameSongSessionId; // +0x18
    NSString * _editSessionId; // +0x20
    MVStat22259 * _editInfo; // +0x28
    double _lastTotalDuration; // +0x30
    double _lastStartTimestamp; // +0x38
    NSString * _musicId; // +0x40
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)refreshSessionIdWithMusicId:(id)arg1;
- (void)enterPlayer;
- (void)exitPlayer;
- (void)beginEditWithMusicInfo:(id)arg1 songId:(id)arg2 partNum:(int)arg3 createType:(unsigned long long)arg4;
- (void)onMusicPlayWithMusicid:(id)arg1;
- (void)onMusicPause;
- (void)onMusicStop;
- (unsigned int)totalMusicPlayDurationWhenEnterWithMusicid:(id)arg1;
- (unsigned int)totalMusicPlayDurationWhenExitWithMusicid:(id)arg1;
- (unsigned int)p_totalMusicPlayDuration;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)playSameSongSessionId;
- (void)setPlaySameSongSessionId:(id)arg1;
- (id)editSessionId;
- (void)setEditSessionId:(id)arg1;
- (id)editInfo;
- (void)setEditInfo:(id)arg1;
- (double)lastTotalDuration;
- (void)setLastTotalDuration:(double)arg1;
- (double)lastStartTimestamp;
- (void)setLastStartTimestamp:(double)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (BOOL)needRefreshSameSongSessionidAfterMusicStop;
- (void)setNeedRefreshSameSongSessionidAfterMusicStop:(BOOL)arg1;
- (void).cxx_destruct;
@end

