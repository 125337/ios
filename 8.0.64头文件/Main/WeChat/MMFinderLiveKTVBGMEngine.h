@interface MMFinderLiveKTVBGMEngine : NSObject
{
    BOOL _isPlaying; // +0x8
    BOOL _isStart; // +0x9
    BOOL _isStartPlaySucc; // +0xa
    BOOL _isPlayToSingingEndPosition; // +0xb
    BOOL _isEnd; // +0xc
    BOOL _isBGMMuted; // +0xd
    int _volumeBGM; // +0x10
    int _pitchBGM; // +0x14
    id <MMFinderLiveKTVBGMEngineDelegate> _logicDelegate; // +0x18
    unsigned long long _lastAdjustTimestamp; // +0x20
    BGMAudioInfo * _bgmAudioInfo; // +0x28
    MMLiveTaskId * _taskId; // +0x30
    long long _bgmChnlId; // +0x38
}
+ (double)transferPitchValueToPitch:(int)arg1;
+ (double)preferVolumeBGMRatio;
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
- (void)setBgmPitch:(int)arg1;
- (int)bgmPitch;
- (int)minBgmPitch;
- (int)maxBgmPitch;
- (void)playBGM:(int)arg1 path:(id)arg2 isPublish:(BOOL)arg3 startBlock:(id /* block */)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)seekToPosition:(int)arg1;
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
- (unsigned int)playStatus;
- (id)currentLiveTask;
- (id)getAudioMgrInternal;
- (void)startPlayResultAutoCheck;
- (void)finishPlayResultAutoCheck;
- (void)autoCheckPlayResult;
- (void)cancelPlayResultAutoCheck;
- (id)liveTask;
- (id)audioSettingCache;
- (int)actualVolumeBGM;
- (double)autoEndDuration;
- (double)volumeBGMRatio;
- (int)volumeBGMSum;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (unsigned long long)lastAdjustTimestamp;
- (void)setLastAdjustTimestamp:(unsigned long long)arg1;
- (id)bgmAudioInfo;
- (void)setBgmAudioInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (BOOL)isStartPlaySucc;
- (void)setIsStartPlaySucc:(BOOL)arg1;
- (BOOL)isPlayToSingingEndPosition;
- (void)setIsPlayToSingingEndPosition:(BOOL)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (long long)bgmChnlId;
- (void)setBgmChnlId:(long long)arg1;
- (int)volumeBGM;
- (void)setVolumeBGM:(int)arg1;
- (int)pitchBGM;
- (void)setPitchBGM:(int)arg1;
- (BOOL)isBGMMuted;
- (void)setIsBGMMuted:(BOOL)arg1;
- (void).cxx_destruct;
@end
