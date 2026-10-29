@interface WXAudioEffectManager : NSObject <TRTCAudioEffectDelegate>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    NSObject<OS_dispatch_queue> * _delegateQueue; // +0x10
    void * _manager; // +0x18
    NSMutableDictionary * _audioEffectMap; // +0x20
    void * _audioEngine; // +0x28
    id <WXAudioEffectManagerDelegate> _delegate; // +0x30
    shared_ptr<wxvoipsdk::TRTCAudioEffectCallback> _callback; // +0x38
}
- (id)initWithQueue:(id)arg1 delegateQueue:(id)arg2;
- (void)enableVoiceEarMonitor:(BOOL)arg1;
- (void)setVoiceEarMonitorVolume:(long long)arg1;
- (void)setVoiceVolume:(long long)arg1;
- (void)startPlayMusic:(id)arg1 onStart:(id /* block */)arg2 onProgress:(id /* block */)arg3 onComplete:(id /* block */)arg4;
- (void)stopPlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)setMusicPublishVolume:(int)arg1 volume:(long long)arg2;
- (void)setMusicPlayoutVolume:(int)arg1 volume:(long long)arg2;
- (void)setAllMusicVolume:(long long)arg1;
- (long long)getMusicCurrentPosInMS:(int)arg1;
- (void)seekMusicToPosInMS:(int)arg1 pts:(long long)arg2;
- (long long)getMusicDurationInMS:(id)arg1;
- (void *)audioEngine;
- (void)stopAll;
- (void)stopAllAudioEffects;
- (void)setAllAudioEffectsVolume:(long long)arg1;
- (void)pauseAll;
- (void)resumeAll;
- (void)_startPlayMusic:(long long)arg1 params:(id)arg2 onStart:(id /* block */)arg3 onProgress:(id /* block */)arg4 onComplete:(id /* block */)arg5;
- (void)_stopPlayMusic:(long long)arg1;
- (void)_pausePlayMusic:(long long)arg1;
- (void)_resumePlayMusic:(long long)arg1;
- (void)_setAllMusicVolume:(long long)arg1;
- (void)_setMusicPublishVolume:(long long)arg1 volume:(long long)arg2;
- (void)_setMusicPlayoutVolume:(long long)arg1 volume:(long long)arg2;
- (long long)_getMusicCurrentPosInMS:(long long)arg1;
- (void)_seekMusicToPosInBytes:(long long)arg1 position:(long long)arg2;
- (void)_seekMusicToPosInMS:(long long)arg1 pts:(long long)arg2;
- (void)asyncRun:(id /* block */)arg1;
- (void)asyncDelegateRun:(id /* block */)arg1;
- (void)syncRun:(id /* block */)arg1;
- (void)dispatchOnQueue:(id)arg1 block:(id /* block */)arg2 isAsync:(BOOL)arg3;
- (void)logApi:(id)arg1;
- (void)onBgmPlayStart:(long long)arg1 code:(long long)arg2 reason:(id)arg3;
- (void)onBgmPlayProgress:(long long)arg1 currentTime:(long long)arg2 totalTime:(long long)arg3;
- (void)onBgmPlayEnd:(long long)arg1 code:(long long)arg2 reason:(id)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1;
- (void *)manager;
- (void)setManager:(void *)arg1;
- (shared_ptr<wxvoipsdk::TRTCAudioEffectCallback>)callback;
- (void)setCallback:(shared_ptr<wxvoipsdk::TRTCAudioEffectCallback>)arg1;
- (id)audioEffectMap;
- (void)setAudioEffectMap:(id)arg1;
- (void)setAudioEngine:(void *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

