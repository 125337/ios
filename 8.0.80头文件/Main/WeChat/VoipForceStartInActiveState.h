@interface VoipForceStartInActiveState : MMUserService <MMServiceProtocol>
{
    VoipForceStartObject * _m_audioObject; // +0x8
    VoipForceStartObject * _m_videoObject; // +0x10
}
- (id)init;
- (void)setCanStartInUnactive:(BOOL)arg1;
- (void)updateVoipAudioStartBlock:(id /* block */)arg1;
- (BOOL)startAudio;
- (void)updateVoipVideoStartBlock:(id /* block */)arg1;
- (void)startVideo;
- (id)m_audioObject;
- (void)setM_audioObject:(id)arg1;
- (id)m_videoObject;
- (void)setM_videoObject:(id)arg1;
- (void).cxx_destruct;
@end
