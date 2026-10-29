@interface MMFinderLiveKTVBGMEngine : NSObject
{
    BOOL _isPlaying; // +0x8
    BOOL _isStart; // +0x9
    BOOL _isPlayToSingingEndPosition; // +0xa
    BOOL _isEnd; // +0xb
    BOOL _voiceEarEnable; // +0xc
    BOOL _voiceEarUsable; // +0xd
    BOOL _isBGMMuted; // +0xe
    BOOL _isVoiceMuted; // +0xf
    BOOL _isStartPlaySucc; // +0x10
    int _volumeBGM; // +0x14
    int _volumeVoice; // +0x18
    int _pitchBGM; // +0x1c
    id <MMFinderLiveKTVBGMEngineDelegate> _logicDelegate; // +0x20
    unsigned long long _lastAdjustTimestamp; // +0x28
    MMLiveTaskId * _taskId; // +0x30
    BGMAudioInfo * _bgmAudioInfo; // +0x38
    long long _bgmChnlId; // +0x40
    long long _audioRoute; // +0x48
}
+ (void)setVoiceEarMonitorEnabled:(BOOL)arg1;
+ (void)notifyAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
+ (double)transferPitchValueToPitch:(int)arg1;
+ (BOOL)checkVoiceEarUsabled:(long long)arg1;
+ (double)preferVolumeBGMRatio;
+ (double)preferVolumeVoiceRatio;
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)configAudioParamCacheSettings;
- (void)dealloc;
- (BOOL)prepareWithAudioInfo:(id)arg1;
- (BOOL)start;
- (BOOL)pause;
- (BOOL)resume;
- (BOOL)stop;
- (BOOL)finish;
- (void)updateBGMMute:(BOOL)arg1;
- (long long)getMusicChannel;
- (long long)getSettingMusicChannel;
- (void)setMusicChannel:(long long)arg1 cache:(BOOL)arg2;
- (void)setBGMAbsVomlue:(int)arg1;
- (int)bgmAbsVomlue;
- (void)setHumanVoiceAbsVomlue:(int)arg1;
- (int)humanVoiceAbsVomlue;
- (void)setBgmPitch:(int)arg1;
- (int)bgmPitch;
- (int)minBgmPitch;
- (int)maxBgmPitch;
- (void)enableVoiceEarMonitor:(BOOL)arg1;
- (BOOL)isVoiceEarMonitorEnabled;
- (BOOL)isVoiceEarMonitorUsabled;
- (BOOL)isHeadHeadsetUsabled;
- (void)playBGM:(int)arg1 path:(id)arg2 isPublish:(BOOL)arg3 startBlock:(id /* block */)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)handleForAudioRouteChanged;
- (void)updateVoiceMute:(BOOL)arg1;
- (void)continueCurrSettings;
- (void)clearPlayingState;
- (void)resetBGMVolumnForMuteChanged;
- (void)handlePlayMusicStart:(long long)arg1 channel:(long long)arg2;
- (void)handlePlayMusicProgress:(long long)arg1 allDuration:(long long)arg2 channel:(long long)arg3;
- (void)checkIsPlayToSingEndPosition:(long long)arg1;
- (void)onPlayToSingEndPosition;
- (void)handlePlayMusicEnd:(long long)arg1 channel:(long long)arg2;
- (void)endMusicPlay;
- (void)updateStateAfterPause;
- (void)updateStateAfterResume;
- (void)updateStateAfterStop;
- (void)updateVoiceEarUsable:(BOOL)arg1;
- (void)setVoiceEarMonitorVolume:(int)arg1;
- (unsigned int)playStatus;
- (id)currentLiveTask;
- (id)getAudioMgrInternal;
- (void)checkAudioRouteIsChanged;
- (void)updateAudioRoute;
- (void)recoverAudioSetting:(id)arg1;
- (void)startPlayResultAutoCheck;
- (void)finishPlayResultAutoCheck;
- (void)autoCheckPlayResult;
- (void)cancelPlayResultAutoCheck;
- (id)liveTask;
- (long long)currAudioRoute;
- (id)audioSettingCache;
- (int)actualVolumeBGM;
- (int)actualVolumeVoice;
- (int)actualEarMonitorVolumeVoice;
- (double)autoEndDuration;
- (double)volumeBGMRatio;
- (double)volumeVoiceRatio;
- (int)volumeBGMSum;
- (int)volumeVoiceSum;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (unsigned long long)lastAdjustTimestamp;
- (void)setLastAdjustTimestamp:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)bgmAudioInfo;
- (void)setBgmAudioInfo:(id)arg1;
- (int)volumeBGM;
- (void)setVolumeBGM:(int)arg1;
- (int)volumeVoice;
- (void)setVolumeVoice:(int)arg1;
- (int)pitchBGM;
- (void)setPitchBGM:(int)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (BOOL)isPlayToSingingEndPosition;
- (void)setIsPlayToSingingEndPosition:(BOOL)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (long long)bgmChnlId;
- (void)setBgmChnlId:(long long)arg1;
- (BOOL)voiceEarEnable;
- (void)setVoiceEarEnable:(BOOL)arg1;
- (BOOL)voiceEarUsable;
- (void)setVoiceEarUsable:(BOOL)arg1;
- (long long)audioRoute;
- (void)setAudioRoute:(long long)arg1;
- (BOOL)isBGMMuted;
- (void)setIsBGMMuted:(BOOL)arg1;
- (BOOL)isVoiceMuted;
- (void)setIsVoiceMuted:(BOOL)arg1;
- (BOOL)isStartPlaySucc;
- (void)setIsStartPlaySucc:(BOOL)arg1;
- (void).cxx_destruct;
@end

