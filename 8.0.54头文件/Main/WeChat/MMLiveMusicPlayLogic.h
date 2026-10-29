@interface MMLiveMusicPlayLogic : NSObject <ILiveTaskMgrExt>
{
    BOOL _isPlaying; // +0x8
    BOOL _hasCreatedTXAudioEffectMgr; // +0x9
    int _volumn; // +0xc
    id <MMLiveMusicPlayLogicDelegate> _logicDelegate; // +0x10
    unsigned long long _lastAdjustTimestamp; // +0x18
    MMLiveMusicDataItem * _currentMusicItem; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    unsigned long long _lastSyncVolumeTime; // +0x30
    TXAudioEffectManager * _audioEffectMgr; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)dealloc;
- (void)playMusic:(id)arg1;
- (void)playMusic:(id)arg1 isPublish:(BOOL)arg2;
- (void)updateStateBeforePlayWithItem:(id)arg1;
- (void)stopPlayCurrentMusic;
- (void)syncBGMInfoForMiniGame:(BOOL)arg1;
- (void)pausePlayCurrentMusic;
- (void)updateStateAfterPause;
- (id)currentLiveTask;
- (void)resumePlayCurrentMusic;
- (void)updateStateAfterResume;
- (void)setCurrentMusicAllVolumn:(int)arg1;
- (void)setCurrentMusicAllVolumn:(int)arg1 forceUpdate:(BOOL)arg2;
- (void)setCurrentMusicAllVolumnWithoutSync:(int)arg1;
- (void)syncBGMWithsuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2 action:(int)arg3;
- (void)syncBGMOnStartWithsuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (BOOL)checkIfRequiredUpdateWithSongOptVersion:(unsigned long long)arg1;
- (BOOL)requirmentToUpdateSong:(id)arg1;
- (BOOL)requirmentToUpdateStatus:(unsigned int)arg1;
- (BOOL)requirmentToUpdateVolume:(int)arg1;
- (unsigned int)playStatus;
- (void)handlePlayMusicItemWillStart:(id)arg1;
- (void)handlePlayMusicItem:(id)arg1 started:(long long)arg2;
- (void)handlePlayMusicItem:(id)arg1 progress:(long long)arg2 allDuration:(long long)arg3;
- (void)handlePlayMusicItem:(id)arg1 completed:(long long)arg2;
- (void)clearPlayingState;
- (void)playMusic:(id)arg1 publish:(BOOL)arg2 startBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)internalPlayMusic:(id)arg1 publish:(BOOL)arg2 startBlock:(id /* block */)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)stopPlayMusic:(id)arg1;
- (void)pausePlayMusic:(id)arg1;
- (void)resumePlayMusic:(id)arg1;
- (id)getAudioMgrInternal;
- (void)onMMLiveFinishedForNotifyOuter;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (unsigned long long)lastAdjustTimestamp;
- (void)setLastAdjustTimestamp:(unsigned long long)arg1;
- (id)currentMusicItem;
- (void)setCurrentMusicItem:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (int)volumn;
- (void)setVolumn:(int)arg1;
- (unsigned long long)lastSyncVolumeTime;
- (void)setLastSyncVolumeTime:(unsigned long long)arg1;
- (BOOL)hasCreatedTXAudioEffectMgr;
- (void)setHasCreatedTXAudioEffectMgr:(BOOL)arg1;
- (id)audioEffectMgr;
- (void)setAudioEffectMgr:(id)arg1;
- (void).cxx_destruct;
@end

