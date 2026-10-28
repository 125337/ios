@interface SilkAudioPlayerV2 : CommonPlayer <SimpleAudioBufferDelegate>
{
    int _m_sampleRate; // +0x8
    int _m_currentPcmBytePos; // +0xc
    AudioDecoder * m_decoder; // +0x10
    SimpleAudioPlayer * _m_audioPlayer; // +0x18
    id <AudioDataRead> _m_audioData; // +0x20
}
- (void)dealloc;
- (id)init;
- (void)updatePath:(id)arg1;
- (void)updateData:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (double)duration;
- (void)prepareSilkBuffer;
- (unsigned int)fillPcmBuffer:(short *)arg1 bufferSize:(unsigned int)arg2;
- (void)onAudioBufferPlayEnd;
- (double)simpleRateForBuffer;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (AudioDecoder *)m_decoder;
- (void)setM_decoder:(AudioDecoder *)arg1;
- (id)m_audioPlayer;
- (void)setM_audioPlayer:(id)arg1;
- (id)m_audioData;
- (void)setM_audioData:(id)arg1;
- (int)m_sampleRate;
- (void)setM_sampleRate:(int)arg1;
- (int)m_currentPcmBytePos;
- (void)setM_currentPcmBytePos:(int)arg1;
- (void).cxx_destruct;
@end
