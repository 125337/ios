@interface MMFinderLiveChorusBGMEngine : NSObject <ITXChorusPlayerDelegate>
{
    BOOL _isPrepared; // +0x8
    BOOL _isInvokeStart; // +0x9
    BOOL _isStart; // +0xa
    BOOL _isPlaying; // +0xb
    BOOL _isPlayToSingingEndPosition; // +0xc
    BOOL _isEnd; // +0xd
    BOOL _isBGMMuted; // +0xe
    int _volumeBGM; // +0x10
    int _actualBGMVolumeValue; // +0x14
    int _pitchBGM; // +0x18
    id <MMFinderLiveChorusBGMEngineDelegate> _logicDelegate; // +0x20
    unsigned long long _chorusRole; // +0x28
    NSString * _currRequireLoadMusicId; // +0x30
    ChorusBGMAudioInfo * _bgmAudioInfo; // +0x38
    MMLiveTaskId * _taskId; // +0x40
    TXChorusMusicPlayer * _chorusMusicPlayer; // +0x48
    long long _musicChannel; // +0x50
    long long _currProgressMs; // +0x58
}
+ (id)generateChorusTrtcParams:(id)arg1 bgmUserInfo:(id)arg2;
+ (id)genTrtcParamBGMUserId:(unsigned int)arg1;
+ (double)preferVolumeBGMRatio;
+ (double)transferPitchValueToPitch:(int)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initChorusMusicPlayer;
- (void)configAudioParamCacheSettings;
- (void)continueCurrSetting;
- (void)updateChorusRole:(unsigned long long)arg1;
- (BOOL)prepareWithAudioInfo:(id)arg1;
- (BOOL)start;
- (BOOL)stop;
- (BOOL)pause;
- (BOOL)resume;
- (BOOL)seek:(long long)arg1;
- (void)switchMusicChannel:(long long)arg1 cache:(BOOL)arg2 checkRepeat:(BOOL)arg3;
- (long long)getMusicChannel;
- (long long)getSettingMusicChannel;
- (void)setBGMAbsVolume:(int)arg1;
- (void)setActualBGMAbsVolume:(int)arg1 checkRepeat:(BOOL)arg2;
- (int)bgmAbsVolume;
- (void)updateBGMMute:(BOOL)arg1;
- (void)setBgmPitch:(int)arg1 checkRepeat:(BOOL)arg2;
- (int)bgmPitch;
- (int)minBgmPitch;
- (int)maxBgmPitch;
- (BOOL)loadExternalMusic;
- (long long)getCurrentTXChorusRole;
- (void)clearPlayingState;
- (void)onPlayToSingEndPosition;
- (void)endMusicPlay;
- (void)updateRequireLoadMusicId:(id)arg1;
- (void)updateChorusBGMVolume;
- (void)autoCheckStoppedAbnormally;
- (void)cancelAbnormalStopAutoCheck;
- (void)checkStoppedAbnormally;
- (double)abnormalStopCheckDelayTime;
- (id)liveTask;
- (double)autoEndDuration;
- (id)audioSettingCache;
- (int)actualVolumeBGM;
- (double)volumeBGMRatio;
- (int)volumeBGMSum;
- (BOOL)isCurrSingerRole;
- (void)onChorusError:(long long)arg1 errMsg:(id)arg2;
- (void)onNetworkQualityUpdated:(long long)arg1 rtt:(unsigned int)arg2 loss:(unsigned int)arg3;
- (void)onChorusRequireLoadMusic:(id)arg1;
- (void)onChorusMusicLoadSucceed:(id)arg1 lyricList:(id)arg2 pitchList:(id)arg3;
- (void)onChorusStarted;
- (void)onChorusPaused;
- (void)onChorusResumed;
- (void)onChorusStopped;
- (void)onChorusEnded;
- (void)onMusicProgressUpdated:(long long)arg1 durationMs:(long long)arg2;
- (void)onVoicePitchUpdated:(int)arg1 hasVoice:(BOOL)arg2 progressMs:(long long)arg3;
- (void)onVoiceScoreUpdated:(int)arg1 averageScore:(int)arg2;
- (void)shouldDecryptAudioData:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (unsigned long long)chorusRole;
- (void)setChorusRole:(unsigned long long)arg1;
- (id)currRequireLoadMusicId;
- (void)setCurrRequireLoadMusicId:(id)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (id)bgmAudioInfo;
- (void)setBgmAudioInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)chorusMusicPlayer;
- (void)setChorusMusicPlayer:(id)arg1;
- (long long)musicChannel;
- (void)setMusicChannel:(long long)arg1;
- (BOOL)isInvokeStart;
- (void)setIsInvokeStart:(BOOL)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isPlayToSingingEndPosition;
- (void)setIsPlayToSingingEndPosition:(BOOL)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (long long)currProgressMs;
- (void)setCurrProgressMs:(long long)arg1;
- (int)volumeBGM;
- (void)setVolumeBGM:(int)arg1;
- (int)actualBGMVolumeValue;
- (void)setActualBGMVolumeValue:(int)arg1;
- (BOOL)isBGMMuted;
- (void)setIsBGMMuted:(BOOL)arg1;
- (int)pitchBGM;
- (void)setPitchBGM:(int)arg1;
- (void).cxx_destruct;
@end
