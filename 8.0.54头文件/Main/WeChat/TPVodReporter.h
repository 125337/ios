@interface TPVodReporter : TPBaseReporter
{
    BOOL _playDone; // +0x8
    BOOL _seeking; // +0x9
    BOOL _buffering; // +0xa
    BOOL _pausing; // +0xb
    float _playSpeed; // +0xc
    int _seekBufferingTotalCount; // +0x10
    int _seekTotalCount; // +0x14
    int _bufferingTotalCount; // +0x18
    TPPlayerLogContext * _logCtx; // +0x20
    long long _prepapreTimeSinceBootMs; // +0x28
    long long _playerFirstStartTimeSinceBootMs; // +0x30
    long long _pauseBeginTimeSinceBootMs; // +0x38
    long long _pauseTotalDurationMs; // +0x40
    NSMutableDictionary * _selectTrackInfos; // +0x48
    long long _seekStartTimeSinceBootMs; // +0x50
    long long _seekBufferingTotalDurationMs; // +0x58
    long long _bufferingStartTimeSinceBootMs; // +0x60
    long long _bufferingTotalDurationMs; // +0x68
}
- (id)init;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (id)eventHandlerTable;
- (id)invocationWithMethod:(SEL)arg1;
- (void)onPrepareEnd:(id)arg1;
- (void)onPlayerStart:(id)arg1;
- (void)onPlayerPause:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)handlePlayerEnd:(id)arg1;
- (void)reportVodEndEvent:(id)arg1;
- (id)getTPGeneralPlayFlowParams:(id)arg1;
- (id)getTPDynamicStatisticParams:(id)arg1;
- (void)fillVodEndEventParmas:(id)arg1 withGeneralPlayFlowParams:(id)arg2 withErrorCode:(long long)arg3;
- (void)reportVodFlowEvent:(id)arg1;
- (void)fillVodFlowEventParmasWithRunTimeParams:(id)arg1;
- (void)fillVodFlowEventParmas:(id)arg1 withGeneralPlayFlowParams:(id)arg2;
- (void)fillVodFlowEventParmas:(id)arg1 withDynamicStatisticParams:(id)arg2;
- (void)onSeekStart:(id)arg1;
- (void)onSeekEnd:(id)arg1;
- (void)onBufferStart:(id)arg1;
- (void)onBufferEnd:(id)arg1;
- (void)onSelectTrackStart:(id)arg1;
- (void)onSelectTrackEnd:(id)arg1;
- (void)onSetPlaySpeed:(id)arg1;
- (void)onDrmInfo:(id)arg1;
- (void)onAppForeGround:(id)arg1;
- (void)onAppBackGround:(id)arg1;
- (BOOL)isPlayDone;
- (void)setPlayDone:(BOOL)arg1;
- (BOOL)isSeeking;
- (void)setSeeking:(BOOL)arg1;
- (BOOL)isBuffering;
- (void)setBuffering:(BOOL)arg1;
- (BOOL)isPausing;
- (void)setPausing:(BOOL)arg1;
- (id)logCtx;
- (void)setLogCtx:(id)arg1;
- (long long)prepapreTimeSinceBootMs;
- (void)setPrepapreTimeSinceBootMs:(long long)arg1;
- (long long)playerFirstStartTimeSinceBootMs;
- (void)setPlayerFirstStartTimeSinceBootMs:(long long)arg1;
- (long long)pauseBeginTimeSinceBootMs;
- (void)setPauseBeginTimeSinceBootMs:(long long)arg1;
- (long long)pauseTotalDurationMs;
- (void)setPauseTotalDurationMs:(long long)arg1;
- (float)playSpeed;
- (void)setPlaySpeed:(float)arg1;
- (id)selectTrackInfos;
- (void)setSelectTrackInfos:(id)arg1;
- (long long)seekStartTimeSinceBootMs;
- (void)setSeekStartTimeSinceBootMs:(long long)arg1;
- (int)seekBufferingTotalCount;
- (void)setSeekBufferingTotalCount:(int)arg1;
- (long long)seekBufferingTotalDurationMs;
- (void)setSeekBufferingTotalDurationMs:(long long)arg1;
- (int)seekTotalCount;
- (void)setSeekTotalCount:(int)arg1;
- (long long)bufferingStartTimeSinceBootMs;
- (void)setBufferingStartTimeSinceBootMs:(long long)arg1;
- (int)bufferingTotalCount;
- (void)setBufferingTotalCount:(int)arg1;
- (long long)bufferingTotalDurationMs;
- (void)setBufferingTotalDurationMs:(long long)arg1;
- (void).cxx_destruct;
@end

