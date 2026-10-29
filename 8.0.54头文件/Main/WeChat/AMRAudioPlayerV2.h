@interface AMRAudioPlayerV2 : CommonPlayer <SimpleAudioBufferDelegate>
{
    int _m_currentPcmBytePos; // +0x8
    AMRDecodeFloat * m_decoder; // +0x10
    SimpleAudioPlayer * _m_audioPlayer; // +0x18
    id <AudioDataRead> _m_audioData; // +0x20
}
- (void)dealloc;
- (void)updatePath:(id)arg1;
- (void)updateData:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (void)prepareDecoder;
- (unsigned int)fillPcmBuffer:(short *)arg1 bufferSize:(unsigned int)arg2;
- (void)onAudioBufferPlayEnd;
- (double)simpleRateForBuffer;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (AMRDecodeFloat *)m_decoder;
- (void)setM_decoder:(AMRDecodeFloat *)arg1;
- (id)m_audioPlayer;
- (void)setM_audioPlayer:(id)arg1;
- (id)m_audioData;
- (void)setM_audioData:(id)arg1;
- (int)m_currentPcmBytePos;
- (void)setM_currentPcmBytePos:(int)arg1;
- (void).cxx_destruct;
@end

