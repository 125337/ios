@interface TXAudioEffectManager : NSObject
{
    weak_ptr<liteav::manager::AudioEffectManagerInterface> _effectManager; // +0x8
    shared_ptr<MusicPreloadObserverAdapter> _preloadObserversAdapter; // +0x18
    shared_ptr<MusicPlayObserverAdapter> _playObserversAdapter; // +0x28
    NSMutableArray * _effectIds; // +0x38
    id <TXAudioEffectManagerDelegate> _delegate; // +0x40
}
- (id)initWithEffectManager:(shared_ptr<liteav::manager::AudioEffectManagerInterface>)arg1;
- (void)enableVoiceEarMonitor:(BOOL)arg1;
- (void)setVoiceEarMonitorVolume:(long long)arg1;
- (void)setVoiceReverbType:(long long)arg1;
- (void)setVoiceChangerType:(long long)arg1;
- (void)setVoiceVolume:(long long)arg1;
- (void)setVoicePitch:(double)arg1;
- (void)startPlayMusic:(id)arg1 onStart:(id /* block */)arg2 onProgress:(id /* block */)arg3 onComplete:(id /* block */)arg4;
- (void)stopPlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)setMusicPublishVolume:(int)arg1 volume:(long long)arg2;
- (void)setMusicPlayoutVolume:(int)arg1 volume:(long long)arg2;
- (void)setAllMusicVolume:(long long)arg1;
- (void)setMusicPitch:(int)arg1 pitch:(double)arg2;
- (void)setMusicSpeedRate:(int)arg1 speedRate:(double)arg2;
- (long long)getMusicCurrentPosInMS:(int)arg1;
- (void)seekMusicToPosInMS:(int)arg1 pts:(long long)arg2;
- (long long)getMusicDurationInMS:(id)arg1;
- (long long)getMusicTrackCount:(int)arg1;
- (void)setMusicTrack:(int)arg1 track:(long long)arg2;
- (void)setMusicScratchSpeedRate:(int)arg1 speedRate:(double)arg2;
- (void)preloadMusic:(id)arg1 onProgress:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)getMetadataValue:(int)arg1 key:(id)arg2;
- (void)_startPlayMusic:(long long)arg1 param:(id)arg2 onStart:(id /* block */)arg3 onProgress:(id /* block */)arg4 onComplete:(id /* block */)arg5;
- (void)_stopPlayMusic:(long long)arg1;
- (void)_pausePlayMusic:(long long)arg1;
- (void)_resumePlayMusic:(long long)arg1;
- (void)_setMusicPublishVolume:(long long)arg1 volume:(long long)arg2;
- (void)_setMusicPlayoutVolume:(long long)arg1 volume:(long long)arg2;
- (void)_setMusicPitch:(long long)arg1 pitch:(double)arg2;
- (void)_setMusicSpeedRate:(long long)arg1 speedRate:(double)arg2;
- (long long)_getMusicCurrentPosInMS:(long long)arg1;
- (void)_seekMusicToPosInMS:(long long)arg1 pts:(long long)arg2;
- (void)_setMusicScratchSpeedRate:(long long)arg1 speedRate:(double)arg2;
- (void)_preloadMusic:(id)arg1 onProgress:(id /* block */)arg2 onError:(id /* block */)arg3;
- (long long)_getMusicTrackCount:(long long)arg1;
- (void)_setMusicTrack:(long long)arg1 track:(long long)arg2;
- (void)stopAll;
- (void)pauseAll;
- (void)resumeAll;
- (long long)legacyBGMID;
- (void)playBGM:(id)arg1 withBeginNotify:(id /* block */)arg2 withProgressNotify:(id /* block */)arg3 andCompleteNotify:(id /* block */)arg4;
- (void)stopBGM;
- (void)pauseBGM;
- (void)resumeBGM;
- (long long)getBGMDuration:(id)arg1;
- (int)setBGMPosition:(long long)arg1;
- (void)setBGMVolume:(long long)arg1;
- (void)setBGMPlayoutVolume:(long long)arg1;
- (void)setBGMPublishVolume:(long long)arg1;
- (long long)newEffectIDFrom:(long long)arg1;
- (void)playAudioEffect:(id)arg1 volume:(int)arg2 onFinished:(id /* block */)arg3;
- (void)stopAudioEffect:(int)arg1;
- (void)stopAllAudioEffects;
- (void)setAudioEffectVolume:(int)arg1 volume:(int)arg2;
- (void)setAllAudioEffectsVolume:(int)arg1;
- (void)pauseAudioEffect:(int)arg1;
- (void)resumeAudioEffect:(int)arg1;
- (id)effectIds;
- (void)setEffectIds:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
