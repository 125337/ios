@interface WavAudioPlayer : CommonPlayer <SimpleAudioBufferDelegate>
{
    unsigned int _m_currentReadPos; // +0x8
    unsigned int _m_bitsPerChannel; // +0xc
    unsigned int _m_framesPerPacket; // +0x10
    unsigned int _m_channesPerFrame; // +0x14
    SimpleAudioPlayer * _m_audioPlayer; // +0x18
    id <AudioDataRead> _m_audioData; // +0x20
    double _m_sampleRateForBuffer; // +0x28
    NSRecursiveLock * _dataLock; // +0x30
}
- (void)setSampleRate:(double)arg1;
- (id)init;
- (id)initWithSampleRate:(double)arg1 bitsPerChannel:(unsigned int)arg2 framesPerPacket:(unsigned int)arg3 channelsPerFrame:(unsigned int)arg4;
- (void)updatePath:(id)arg1;
- (void)updateData:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (BOOL)isPlaying;
- (unsigned int)fillPcmBuffer:(short *)arg1 bufferSize:(unsigned int)arg2;
- (double)simpleRateForBuffer;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (void)onAudioBufferPlayEnd;
- (id)m_audioPlayer;
- (void)setM_audioPlayer:(id)arg1;
- (id)m_audioData;
- (void)setM_audioData:(id)arg1;
- (unsigned int)m_currentReadPos;
- (void)setM_currentReadPos:(unsigned int)arg1;
- (double)m_sampleRateForBuffer;
- (void)setM_sampleRateForBuffer:(double)arg1;
- (unsigned int)m_bitsPerChannel;
- (void)setM_bitsPerChannel:(unsigned int)arg1;
- (unsigned int)m_framesPerPacket;
- (void)setM_framesPerPacket:(unsigned int)arg1;
- (unsigned int)m_channesPerFrame;
- (void)setM_channesPerFrame:(unsigned int)arg1;
- (id)dataLock;
- (void)setDataLock:(id)arg1;
- (void).cxx_destruct;
@end
