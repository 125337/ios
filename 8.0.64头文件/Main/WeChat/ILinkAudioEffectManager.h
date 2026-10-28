@interface ILinkAudioEffectManager : TXAudioEffectManager
- (id)initWithMode;
- (void)startPlayMusic:(id)arg1 onStart:(id /* block */)arg2 onProgress:(id /* block */)arg3 onComplete:(id /* block */)arg4;
- (void)stopPlayMusic:(int)arg1;
- (void)pausePlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)stopAllMusic;
- (void)setAllMusicVolume:(long long)arg1;
@end
