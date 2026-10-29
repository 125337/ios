@interface AudioReceiver : MMUserService <MsgAudioPlayerDelegate, MMServiceProtocol>
{
    id <MsgAudioPlayerProtocol> m_audioPlayer; // +0x8
}
- (id)generatePlayerWithAudioFormat:(unsigned int)arg1;
- (unsigned int)getAudioFormatWithMsg:(id)arg1 path:(id)arg2;
- (BOOL)StartPlay:(id)arg1;
- (BOOL)StartPlay:(id)arg1 Path:(id)arg2;
- (BOOL)StartPlay:(id)arg1 Path:(id)arg2 Resume:(BOOL)arg3;
- (void)AsyncStartPlay:(id)arg1 Path:(id)arg2 Resume:(BOOL)arg3;
- (BOOL)StopPlay;
- (BOOL)isPlaying;
- (int)getCurrentTimeMs;
- (void)setProgress:(unsigned int)arg1;
- (void)notifyOnPlaying:(id)arg1 success:(BOOL)arg2;
- (void)notifyOnEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onGetLevelMeterPeak:(float)arg1 playData:(id)arg2;
- (void)audioPlayerBeginPlaying:(id)arg1 success:(BOOL)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onEarTip;
- (void)audioPlayer:(id)arg1 didChangePeakPower:(float)arg2;
- (void).cxx_destruct;
@end

