@interface MMFinderLiveKSKitAudioEngine : NSObject <MMFinderLiveKTVScorerDelegate, TRTCAudioFrameDelegate, MMFinderLiveKTVBGMEngineDelegate, MMFinderLiveKTVProcesserDelegate>
{
    BOOL _isSinging; // +0x8
    BOOL _isPause; // +0x9
    BOOL _useTSKScorer; // +0xa
    BOOL _useMMKProcesser; // +0xb
    BOOL _useTSKProcesser; // +0xc
    BOOL _useMMKScorer; // +0xd
    BOOL _isSingBySelf; // +0xe
    BOOL _enableTestInput; // +0xf
    BOOL _isCurrInValidTimeRange; // +0x10
    BOOL _isMicMuted; // +0x11
    BOOL _supportSing; // +0x12
    int _lastTimePosition; // +0x14
    int _lastBGMTimePosition; // +0x18
    int _pcmFrameSize; // +0x1c
    MMFinderLiveKSKitMusicSong * _currMusicSong; // +0x20
    id <MMLiveUniqueTaskId> _taskId; // +0x28
    MMFinderLiveKTVBox * _ktvBox; // +0x30
    MMFinderLiveKTVBGMEngine * _bgmEngine; // +0x38
    MMFinderLiveKTVAudioEffectBaseProcesser * _mainProcesser; // +0x40
    MMFinderLiveKTVAudioEffectBaseProcesser * _voiceEarProcesser; // +0x48
    NSMutableArray * _processerList; // +0x50
    NSMutableArray * _scorerList; // +0x58
    MMFinderLiveKTVBaseScorer * _mainScorer; // +0x60
    MMFinderLiveKTVBaseScorer * _remoteLyricParseScorer; // +0x68
    unsigned long long _currFrameSeq; // +0x70
    double _lastTimeInterval; // +0x78
    NSData * _testPCMData; // +0x80
    MMLiveStorageCleanupPinningToken * _songResourcesPinningToken; // +0x88
    FinderLiveKtvSongScoreReportRequest_ScoreInfo * _singingScoreInfo; // +0x90
    NSRecursiveLock * _scoreInfoLock; // +0x98
    MMFinderLiveKTVReporter * _reporter; // +0xa0
}
+ (void)notifyAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
+ (id)createDefaultAudioSettingCache;
+ (unsigned long long)transferSingStartRetToPlayErrorType:(long long)arg1;
- (id)initWithTaskId:(id)arg1 supportSing:(BOOL)arg2;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)startSingBySelf:(id)arg1 force:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startSong:(id)arg1 force:(BOOL)arg2 scoreEngineFlag:(unsigned int)arg3 completion:(id /* block */)arg4;
- (long long)stopSing:(id)arg1 force:(BOOL)arg2;
- (void)pauseCurrSong;
- (void)resumeCurrSong;
- (void)finishScore:(id /* block */)arg1;
- (void)onAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (id)getAllMusicNotesForCurrSong;
- (id)getAllLyricSentencesForCurrSong;
- (void)loadAudioParamSettingCache;
- (void)configEngingSwitchs;
- (void)configSupportUtils;
- (void)setAccompanyVomlueRatio:(float)arg1;
- (float)accompanyVomlueRatioVar;
- (void)setHumanVoiceRatio:(float)arg1;
- (float)humanVoiceRatioVar;
- (void)setAccompanyOrOrigin:(long long)arg1;
- (long long)musicChannel;
- (void)setOptimizeReverbType:(unsigned long long)arg1;
- (unsigned long long)optimizeReverbItemVar;
- (void)setToneShift:(int)arg1;
- (int)toneShiftVar;
- (int)minToneShift;
- (int)maxToneShift;
- (void)enableVoiceEarMonitor:(BOOL)arg1;
- (BOOL)isVoiceEarMonitorEnabled;
- (BOOL)isVoiceEarMonitorUsabled;
- (BOOL)isHeadHeadsetUsabled;
- (BOOL)isCurrNeedLimitScore;
- (void)updateBGMMute:(BOOL)arg1;
- (void)updateCurrInValidTimeRange:(BOOL)arg1;
- (void)updateIsMicMuted;
- (int)currActualVolumeVoice;
- (void)updateCurrMusicSong:(id)arg1;
- (void)prepareSingingData:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)clearSingingData;
- (void)innerStopSing;
- (void)recoverAudioSetting;
- (void)onScoreFinish:(int)arg1 avgScore:(int)arg2 allSentenceCnt:(unsigned int)arg3;
- (void)notifySingingStart;
- (void)notifySingingStop:(id)arg1;
- (void)notifySingingEnd:(id)arg1;
- (void)notifySongEnd:(id)arg1;
- (void)increaseFrameSeq;
- (id)liveTask;
- (id)finderTaskId;
- (id)currUniqueId;
- (id)supportedReverbTypes;
- (BOOL)useMultiProcesser;
- (id)ktvReporter;
- (unsigned long long)viewScene;
- (void)createSingEngine;
- (long long)startEngineSinging;
- (void)stopEngingSinging;
- (void)checkAndAdjustBGMSettingForSingBegin;
- (void)enableAudioCustomProcess;
- (void)disableAudioCustomProcess;
- (void)initAudioScorer;
- (void)initDebugDatas;
- (void)startAudioScorer;
- (void)stopAudioScorer;
- (void)startLyricParseScorer:(unsigned int)arg1;
- (void)stopLyricParseScorer;
- (void)initLyricParseScorer:(unsigned int)arg1;
- (BOOL)isScorer:(id)arg1 fitWithEngineFlag:(unsigned int)arg2;
- (void)processScore:(char *)arg1 inSize:(int)arg2 timeOffsetMS:(double)arg3;
- (void)updateScoreStrategy;
- (void)startAudioEffectProcesser;
- (void)stopAudioEffectProcesser;
- (void)initAudioEffectProcesser;
- (void)processEffect:(id)arg1;
- (id)getAudioProcesser;
- (void)processFrameEffect:(id)arg1 byProcesser:(id)arg2;
- (long long)convertSampleRateToTrtcSampleRate:(int)arg1;
- (void)startVoiceEarEffectProcesser;
- (void)stopVoiceEarEffectProcesser;
- (void)initVoiceEarEffectProcesser;
- (void)processVoiceEarEffect:(id)arg1;
- (void)onCapturedAudioFrame:(id)arg1;
- (void)onVoiceEarMonitorAudioFrame:(id)arg1;
- (void)increaseTimePositionOffset:(int)arg1;
- (void)initTimePositionIfNeed:(int)arg1;
- (void)adjustTimePositionIfNeed:(int)arg1;
- (void)updateTimePosition:(int)arg1 notify:(BOOL)arg2;
- (void)scorer:(id)arg1 didGetNewScore:(int)arg2 sentenceIndex:(int)arg3 totalScore:(int)arg4;
- (void)scorer:(id)arg1 didFinishWithTotalScore:(int)arg2 averageScore:(double)arg3;
- (void)scorer:(id)arg1 targetHitIn:(int)arg2 duration:(int)arg3 isHit:(BOOL)arg4 noteHeight:(float)arg5 noteValue:(float)arg6;
- (BOOL)isScorerNeedIgnoreFrameProcess;
- (double)getValidVolumnThreshold;
- (BOOL)isProcesserNeedIgnoreFrameProcess;
- (void)onPlayBGMProgress:(long long)arg1 allDuration:(long long)arg2;
- (void)onBGMProgressUpdate:(int)arg1;
- (void)onPlayBGMToSingingEnd;
- (void)onPlayBGMEnd;
- (void)onPlayBGMStart:(long long)arg1;
- (void)onPlayBGMStartSucc;
- (void)onPlayBGMStartFail;
- (void)onPlayBGMPaused;
- (void)onPlayBGMResumed:(long long)arg1;
- (void)onPlayBGMStoped;
- (void)onVoiceEarMonitorEnableChanged:(BOOL)arg1;
- (void)onVoiceEarMonitorUsableChanged:(BOOL)arg1;
- (void)onBgmPitchChanged:(int)arg1;
- (void)updateScoreInfo:(id)arg1;
- (void)recordNewScore:(int)arg1 sentenceIndex:(int)arg2 totalScore:(int)arg3;
- (void)recordSingingProgress:(int)arg1;
- (void)recordSingEnd:(id)arg1 sentenceCnt:(unsigned int)arg2;
- (id)getScoreInfo;
- (void)debug_initTestPCMIfNeed:(id)arg1;
- (void)debug_modifyFrameDataIfNeed:(id)arg1;
- (BOOL)isSinging;
- (void)setIsSinging:(BOOL)arg1;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg1;
- (id)currMusicSong;
- (void)setCurrMusicSong:(id)arg1;
- (int)lastTimePosition;
- (void)setLastTimePosition:(int)arg1;
- (BOOL)useTSKScorer;
- (void)setUseTSKScorer:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)ktvBox;
- (void)setKtvBox:(id)arg1;
- (id)bgmEngine;
- (void)setBgmEngine:(id)arg1;
- (BOOL)useMMKProcesser;
- (void)setUseMMKProcesser:(BOOL)arg1;
- (BOOL)useTSKProcesser;
- (void)setUseTSKProcesser:(BOOL)arg1;
- (id)mainProcesser;
- (void)setMainProcesser:(id)arg1;
- (id)voiceEarProcesser;
- (void)setVoiceEarProcesser:(id)arg1;
- (id)processerList;
- (void)setProcesserList:(id)arg1;
- (BOOL)useMMKScorer;
- (void)setUseMMKScorer:(BOOL)arg1;
- (id)scorerList;
- (void)setScorerList:(id)arg1;
- (id)mainScorer;
- (void)setMainScorer:(id)arg1;
- (id)remoteLyricParseScorer;
- (void)setRemoteLyricParseScorer:(id)arg1;
- (BOOL)isSingBySelf;
- (void)setIsSingBySelf:(BOOL)arg1;
- (unsigned long long)currFrameSeq;
- (void)setCurrFrameSeq:(unsigned long long)arg1;
- (double)lastTimeInterval;
- (void)setLastTimeInterval:(double)arg1;
- (int)lastBGMTimePosition;
- (void)setLastBGMTimePosition:(int)arg1;
- (int)pcmFrameSize;
- (void)setPcmFrameSize:(int)arg1;
- (BOOL)enableTestInput;
- (void)setEnableTestInput:(BOOL)arg1;
- (id)testPCMData;
- (void)setTestPCMData:(id)arg1;
- (id)songResourcesPinningToken;
- (void)setSongResourcesPinningToken:(id)arg1;
- (BOOL)isCurrInValidTimeRange;
- (void)setIsCurrInValidTimeRange:(BOOL)arg1;
- (BOOL)isMicMuted;
- (void)setIsMicMuted:(BOOL)arg1;
- (id)singingScoreInfo;
- (void)setSingingScoreInfo:(id)arg1;
- (id)scoreInfoLock;
- (void)setScoreInfoLock:(id)arg1;
- (BOOL)supportSing;
- (void)setSupportSing:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

