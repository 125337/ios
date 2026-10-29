@interface TingAudioPlayer : TingBizPlayer <IWCAudioPlayerExt>
{
    WCAudioPlayer * _player; // +0x8
}
- (id)player;
- (id)audioInfo;
- (int)playerKernelType;
- (id)view;
- (void)prepareToPlay;
- (void)play;
- (void)reset;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)seekToTime:(double)arg1;
- (BOOL)canSeek;
- (double)duration;
- (double)currentTime;
- (double)displayTime;
- (double)bufferedTime;
- (void)setPlayRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)wcAudioPlayer:(id)arg1 onEvent:(unsigned long long)arg2 audioInfo:(id)arg3 error:(id)arg4;
- (void)wcAudioPlayer:(id)arg1 currentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end
