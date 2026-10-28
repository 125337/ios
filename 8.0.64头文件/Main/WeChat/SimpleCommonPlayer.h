@interface SimpleCommonPlayer : CommonPlayer <AVAudioPlayerDelegate>
{
    AVAudioPlayer * _m_audioPlayer; // +0x8
}
- (void)updatePath:(id)arg1;
- (void)updateData:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (void)setVolume:(float)arg1;
- (double)duration;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (id)m_audioPlayer;
- (void)setM_audioPlayer:(id)arg1;
- (void).cxx_destruct;
@end
