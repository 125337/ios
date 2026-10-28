@interface AudioReceiver : MMUserService <MsgAudioPlayerDelegate, MMServiceProtocol>
{
    id <MsgAudioPlayerProtocol> m_audioPlayer; // +0x8
}
- (id)generatePlayerWithAudioFormat:(unsigned int)arg1;
- (unsigned int)getAudioFormatWithMsg:(id)arg1 path:(id)arg2;
- (void)StartPlay:(id)arg1 Path:(id)arg2;
- (void)StartPlay:(id)arg1 Path:(id)arg2 fromTime:(unsigned int)arg3;
- (void)Pause;
- (void)Resume;
- (BOOL)StopPlay;
- (BOOL)isPlaying;
- (int)getCurrentTimeMs;
- (void)setProgress:(unsigned int)arg1;
- (void)setPlayRate:(double)arg1;
- (double)playRate;
- (void)switchToEarMode:(BOOL)arg1;
- (void)setStopInBackground:(BOOL)arg1;
- (void)notifyOnPlaying:(id)arg1 success:(BOOL)arg2;
- (void)notifyOnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onGetLevelMeterPeak:(float)arg1 playData:(id)arg2;
- (void)audioPlayerDidStartPlaying:(id)arg1;
- (void)audioPlayerDidPaused:(id)arg1;
- (void)audioPlayerDidStop:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)onEarTip;
- (void)audioPlayer:(id)arg1 didChangePeakPower:(float)arg2;
- (void).cxx_destruct;
@end
