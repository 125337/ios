@interface MMFinderLiveKSKitAudioEngine : NSObject <MMFinderLiveKTVScorerDelegate, MMFinderLiveKTVBGMEngineDelegate, MMFinderLiveKTVProcesserDelegate, MMFinderLiveChorusBGMEngineDelegate, MMFinderLiveKTVAudioSettingEngineDelegate, MMFinderLiveKTVStateExt, MMLiveTaskMgrExt>
{
    BOOL _isSinging; // +0x8
    BOOL _isSingingStart; // +0x9
    BOOL _isSingBySelf; // +0xa
    BOOL _isPause; // +0xb
    BOOL _useTSKScorer; // +0xc
    BOOL _openA2dpBluetoothMode; // +0xd
    BOOL _useMMKProcesser; // +0xe
    BOOL _useTSKProcesser; // +0xf
    BOOL _useMMKScorer; // +0x10
    BOOL _asMajor; // +0x11
    BOOL _enableTestInput; // +0x12
    BOOL _isCurrInValidTimeRange; // +0x13
    BOOL _isMicMuted; // +0x14
    BOOL _supportSing; // +0x15
    BOOL _useAd2pBluetooth; // +0x16
    BOOL _hasToastForAd2pBluetooth; // +0x17
    BOOL _isBGMPublishDelayEnabled; // +0x18
    BOOL _enterChorusNetworkCheckPeriod; // +0x19
    BOOL _isMinorPaused; // +0x1a
    BOOL _isInLive; // +0x1b
    int _lastTimePosition; // +0x1c
    int _lastBGMTimePosition; // +0x20
    int _pcmFrameSize; // +0x24
    int _wonderfulBeginTime; // +0x28
    int _wonderfulEndTime; // +0x2c
    MMFinderLiveKSKitMusicSong * _currMusicSong; // +0x30
    long long _currSingMode; // +0x38
    id <MMLiveUniqueTaskId> _taskId; // +0x40
    MMFinderLiveKTVBox * _ktvBox; // +0x48
    MMFinderLiveKTVAudioSettingEngine * _audioSettingEngine; // +0x50
    MMFinderLiveKTVBGMEngine * _bgmEngine; // +0x58
    MMFinderLiveChorusBGMEngine * _chorusBGMEngine; // +0x60
    MMFinderLiveKTVAudioEffectBaseProcesser * _mainProcesser; // +0x68
    MMFinderLiveKTVAudioEffectBaseProcesser * _voiceEarProcesser; // +0x70
    NSMutableArray * _processerList; // +0x78
    NSMutableArray * _scorerList; // +0x80
    MMFinderLiveKTVBaseScorer * _mainScorer; // +0x88
    MMFinderLiveKTVBaseScorer * _remoteLyricParseScorer; // +0x90
    unsigned long long _currFrameSeq; // +0x98
    double _lastTimeInterval; // +0xa0
    NSData * _testPCMData; // +0xa8
    MMLiveStorageCleanupPinningToken * _songResourcesPinningToken; // +0xb0
    FinderLiveKtvSongScoreReportRequest_ScoreInfo * _singingScoreInfo; // +0xb8
    NSRecursiveLock * _scoreInfoLock; // +0xc0
    FinderLiveKtvSongScoreReportRequest_ExtReportInfo * _singingExtReportInfo; // +0xc8
    MMFinderLiveKTVReporter * _reporter; // +0xd0
    unsigned long long _lastAudioPts; // +0xd8
    unsigned long long _ntpSeq; // +0xe0
}
+ (void)notifyAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
+ (id)createDefaultAudioSettingCache;
+ (unsigned long long)transferSingStartRetToPlayErrorType:(long long)arg1;
+ (BOOL)isAudioSessionCategoryNeedForbidModifyOptionsForA2dp:(id)arg1;
+ (BOOL)checkBgmVolumeIsValid:(int)arg1;
+ (BOOL)checkBgmPitchIsValid:(int)arg1;
+ (BOOL)checkBgmChanelIsValid:(int)arg1;
+ (void)recordSingingPersistTime:(unsigned int)arg1 byAudioRoute:(long long)arg2 toSingExtReportInfo:(id)arg3;
- (id)initWithTaskId:(id)arg1 supportSing:(BOOL)arg2;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)enterLive;
- (void)startSingBySelf:(id)arg1 force:(BOOL)arg2 mode:(long long)arg3 asMajor:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)startSong:(id)arg1 force:(BOOL)arg2 scoreEngineFlag:(unsigned int)arg3 completion:(id /* block */)arg4;
- (long long)stopSing:(id)arg1 force:(BOOL)arg2 notify:(BOOL)arg3;
- (void)pauseCurrSong;
- (void)resumeCurrSong;
- (void)finishScore:(id /* block */)arg1;
- (void)onAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
- (int)getSingingScoreEngineFlag;
- (int)getSingingReverbEngineFlag;
- (id)getSingingFrameUnitParam;
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
- (BOOL)actualVoiceEarMonitorEnable;
- (BOOL)isHeadHeadsetUsabled;
- (BOOL)isCurrNeedLimitScore;
- (void)updateBGMMute:(BOOL)arg1;
- (void)updateCurrInValidTimeRange:(BOOL)arg1;
- (void)updateIsMicMuted;
- (int)currActualVolumeVoice;
- (void)onBaseAdapterAudioSessionCategoryDidSet:(id)arg1;
- (void)clearDatasForExitKTV;
- (void)clearDatasForExitLive;
- (unsigned int)currAudioType;
- (void)seekToPosition:(int)arg1;
- (void)onJumpToWonderfulPositionBegin:(int)arg1 end:(int)arg2;
- (int)checkAndUpdateWonderfulSegmentIfNeed:(id)arg1;
- (void)setBgmPlayoutVolume:(long long)arg1 business:(long long)arg2;
- (void)unSetBgmPlayoutVolume:(long long)arg1;
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
- (void)updateAd2pBlueToothToastFlag:(BOOL)arg1;
- (id)liveTask;
- (id)finderTaskId;
- (id)currUniqueId;
- (id)supportedReverbTypes;
- (BOOL)useMultiProcesser;
- (id)ktvReporter;
- (unsigned long long)viewScene;
- (BOOL)isSingingSongAsMinor:(id)arg1;
- (BOOL)isListeningSong:(id)arg1;
- (BOOL)isMajorSingAsLeadSinger;
- (BOOL)isSupportEnterLive;
- (void)createSoloSingEngine;
- (BOOL)startSoloSingEngine;
- (void)createChorusSingEngine;
- (BOOL)startChorusSingEngine;
- (BOOL)startSingEngine;
- (long long)startEngineSinging;
- (void)stopEngingSinging;
- (void)checkAndAdjustAudioSettingForSingBegin;
- (void)checkAndAdjustBGMSettingForSingBegin;
- (void)updateChorusEngineState;
- (void)destroyChorusBGMEngineIfNeed;
- (void)enableAudioCustomProcess;
- (void)initAudioSettingEngine;
- (void)destroyAudioSettingEngine;
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
- (void)updateBluetoothStrategy;
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
- (void)onLiveTrtcCapturedAudioFrame:(id)arg1;
- (void)onLiveTrtcLocalProcessedAudioFrame:(id)arg1;
- (long long)audioFrameSendTimeCollectInterval;
- (void)onLiveTrtcVoiceEarMonitorAudioFrame:(id)arg1;
- (void)increaseTimePositionOffset:(int)arg1;
- (void)initTimePositionIfNeed:(int)arg1;
- (void)adjustTimePositionIfNeed:(int)arg1;
- (void)updateTimePosition:(int)arg1 notify:(BOOL)arg2;
- (void)scorer:(id)arg1 didGetNewScore:(int)arg2 sentenceIndex:(int)arg3 totalScore:(int)arg4;
- (BOOL)checkScoreAtSentenceIndexNeedIgnore:(int)arg1;
- (void)scorer:(id)arg1 didFinishWithTotalScore:(int)arg2 averageScore:(double)arg3;
- (void)scorer:(id)arg1 targetHitIn:(int)arg2 duration:(int)arg3 isHit:(BOOL)arg4 noteHeight:(float)arg5 noteValue:(float)arg6;
- (BOOL)isScorerNeedIgnoreFrameProcess;
- (double)getValidVolumnThreshold;
- (BOOL)isProcesserNeedIgnoreFrameProcess;
- (void)onBGMProgressUpdateFromSingBySelf:(int)arg1;
- (void)onBGMProgressUpdate:(int)arg1;
- (BOOL)onAudioSettingCheckCurrentIsSinging;
- (void)onVoiceEarMonitorEnableChanged:(BOOL)arg1;
- (void)onVoiceEarMonitorUsableChanged:(BOOL)arg1;
- (void)onBluetoothHeadsetAvailableChanged:(BOOL)arg1;
- (void)onPlayBGMProgress:(long long)arg1 allDuration:(long long)arg2;
- (void)onPlayBGMToSingingEnd;
- (void)onPlayBGMEnd;
- (void)onPlayBGMStart:(long long)arg1 audioInfo:(id)arg2;
- (void)onPlayBGMStartSucc;
- (void)onPlayBGMStartFail;
- (void)onPlayBGMPaused;
- (void)onPlayBGMResumed:(long long)arg1;
- (void)onPlayBGMStoped;
- (void)onBgmPitchChanged:(int)arg1;
- (void)checkBlueToothHeadSetWithAd2pAvailable;
- (void)onSingingAudioRouteChangedTo:(long long)arg1 from:(long long)arg2 persist:(unsigned int)arg3;
- (void)onChorusBGM:(id)arg1 requireLoadMusic:(id)arg2;
- (void)onChorusBGMStart:(id)arg1 audioInfo:(id)arg2;
- (void)onChorusBGMToSingingEnd:(id)arg1;
- (void)onChorusBGMEnd:(id)arg1;
- (void)onChorusBGMUpdate:(id)arg1 progress:(long long)arg2 allDuration:(long long)arg3;
- (void)onChorusBGMPaused:(id)arg1;
- (void)onChorusBGMResumed:(id)arg1 progress:(long long)arg2;
- (void)onChorusBGMStoped:(id)arg1 bgmAudioInfo:(id)arg2 role:(unsigned long long)arg3 singingEnd:(BOOL)arg4 songEnd:(BOOL)arg5;
- (void)onChorusBGMProcessError:(id)arg1 errCode:(long long)arg2;
- (void)enableBGMPublishDelay:(BOOL)arg1;
- (void)onChorusBGMPitchChanged:(int)arg1;
- (void)onChorusBGMVolumeChanged:(int)arg1;
- (void)onChorusBGMChannelChanged:(long long)arg1;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 majorBgmVolumeChanged:(int)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 majorBgmChannelChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 majorBgmPitchChanged:(int)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 wonderfulPositionBeginUpdated:(int)arg3 end:(int)arg4;
- (void)checkAndResetForWonderfulPosition;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)enterNetworkCheckPeriodForExitChorusMinor;
- (void)exitNetworkCheckPeriodForExitChorusMinor;
- (void)exitChorusMinorAfterNetworkCheck;
- (void)updateScoreInfo:(id)arg1;
- (void)recordNewScore:(int)arg1 sentenceIndex:(int)arg2 totalScore:(int)arg3;
- (void)recordSingingProgress:(int)arg1;
- (void)recordSingEnd:(id)arg1 sentenceCnt:(unsigned int)arg2;
- (id)getScoreInfo;
- (void)createSingingExtReportInfo;
- (void)recordAudioRouteChangeTo:(long long)arg1 from:(long long)arg2 lastPersist:(unsigned int)arg3;
- (void)updateFinalSingingExtReportInfo;
- (void)debug_initTestPCMIfNeed:(id)arg1;
- (void)debug_modifyFrameDataIfNeed:(id)arg1;
- (BOOL)isSinging;
- (void)setIsSinging:(BOOL)arg1;
- (BOOL)isSingingStart;
- (void)setIsSingingStart:(BOOL)arg1;
- (BOOL)isSingBySelf;
- (void)setIsSingBySelf:(BOOL)arg1;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg1;
- (id)currMusicSong;
- (void)setCurrMusicSong:(id)arg1;
- (int)lastTimePosition;
- (void)setLastTimePosition:(int)arg1;
- (BOOL)useTSKScorer;
- (void)setUseTSKScorer:(BOOL)arg1;
- (BOOL)openA2dpBluetoothMode;
- (void)setOpenA2dpBluetoothMode:(BOOL)arg1;
- (long long)currSingMode;
- (void)setCurrSingMode:(long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)ktvBox;
- (void)setKtvBox:(id)arg1;
- (id)audioSettingEngine;
- (void)setAudioSettingEngine:(id)arg1;
- (id)bgmEngine;
- (void)setBgmEngine:(id)arg1;
- (id)chorusBGMEngine;
- (void)setChorusBGMEngine:(id)arg1;
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
- (BOOL)asMajor;
- (void)setAsMajor:(BOOL)arg1;
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
- (id)singingExtReportInfo;
- (void)setSingingExtReportInfo:(id)arg1;
- (BOOL)supportSing;
- (void)setSupportSing:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)useAd2pBluetooth;
- (void)setUseAd2pBluetooth:(BOOL)arg1;
- (BOOL)hasToastForAd2pBluetooth;
- (void)setHasToastForAd2pBluetooth:(BOOL)arg1;
- (BOOL)isBGMPublishDelayEnabled;
- (void)setIsBGMPublishDelayEnabled:(BOOL)arg1;
- (int)wonderfulBeginTime;
- (void)setWonderfulBeginTime:(int)arg1;
- (int)wonderfulEndTime;
- (void)setWonderfulEndTime:(int)arg1;
- (BOOL)enterChorusNetworkCheckPeriod;
- (void)setEnterChorusNetworkCheckPeriod:(BOOL)arg1;
- (unsigned long long)lastAudioPts;
- (void)setLastAudioPts:(unsigned long long)arg1;
- (unsigned long long)ntpSeq;
- (void)setNtpSeq:(unsigned long long)arg1;
- (BOOL)isMinorPaused;
- (void)setIsMinorPaused:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (void).cxx_destruct;
@end
