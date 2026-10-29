@interface WATemplateAudioPlayer : MMRootService <MMServiceProtocol>
{
    float _m_lastVolume; // +0x8
    NSMutableArray * _queue; // +0x10
    AVPlayer * _audioPlayer; // +0x18
    MPVolumeView * _m_privateVoulmeView; // +0x20
}
- (id)init;
- (void)play:(id)arg1;
- (void)stop;
- (void)playFinished;
- (BOOL)playNextIfNeed;
- (BOOL)isPlaying;
- (id)m_privateVoulmeView;
- (void)forceSetVolumeView;
- (void)removeVolumeView;
- (void)forceSetSystemVolume;
- (void)setSystemVolume:(float)arg1;
- (void)resumeLastVolumn;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (void)setM_privateVoulmeView:(id)arg1;
- (float)m_lastVolume;
- (void)setM_lastVolume:(float)arg1;
- (void).cxx_destruct;
@end
