@interface MMFinderLiveKTVBaseScorer : NSObject
{
    BOOL _initSucc; // +0x8
    BOOL _isFinishScoring; // +0x9
    id <MMFinderLiveKTVScorerDelegate> _scorerDelegate; // +0x10
    __sFILE * _recordDumpFile; // +0x18
    LiveKTVScorerInitParam * _settingParam; // +0x20
    MMFinderLiveKSKitMusicSong * _song; // +0x28
    id /* block */ _finishScoreCompletion; // +0x30
    NSRecursiveLock * _audioScoreLock; // +0x38
}
- (id)initWithParam:(id)arg1;
- (void)initDefaultDatas;
- (void)dealloc;
- (BOOL)startScoreWithSong:(id)arg1;
- (BOOL)stopScore;
- (void)process:(id)arg1;
- (BOOL)finishScore:(id /* block */)arg1;
- (id)parseMusicNotes;
- (void)enableRatioReduce:(BOOL)arg1;
- (void)setKeyShift:(int)arg1;
- (BOOL)checkNeedIgnoreFrameProcess:(id)arg1;
- (void)onSongStartScore;
- (void)onSongStopScore;
- (BOOL)debugDumpSwitch;
- (BOOL)isStart;
- (void)createRecordDumpFile;
- (void)closeRecordDumpFile;
- (void)debug_dump:(char *)arg1 size:(int)arg2;
- (id)scorerDelegate;
- (void)setScorerDelegate:(id)arg1;
- (BOOL)initSucc;
- (void)setInitSucc:(BOOL)arg1;
- (__sFILE *)recordDumpFile;
- (void)setRecordDumpFile:(__sFILE *)arg1;
- (id)settingParam;
- (void)setSettingParam:(id)arg1;
- (id)song;
- (void)setSong:(id)arg1;
- (BOOL)isFinishScoring;
- (void)setIsFinishScoring:(BOOL)arg1;
- (id /* block */)finishScoreCompletion;
- (void)setFinishScoreCompletion:(id /* block */)arg1;
- (id)audioScoreLock;
- (void)setAudioScoreLock:(id)arg1;
- (void).cxx_destruct;
@end
