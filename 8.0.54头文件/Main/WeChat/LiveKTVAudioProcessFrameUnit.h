@interface LiveKTVAudioProcessFrameUnit : NSObject
{
    int _channelCnt; // +0x8
    int _sampleRate; // +0xc
    int _frameDuration; // +0x10
    unsigned long long _audioFormat; // +0x18
    NSData * _inBufferData; // +0x20
}
+ (id)genInFrameUnit:(id)arg1 channels:(int)arg2 sampleRate:(int)arg3 frameDuration:(int)arg4 audioFormat:(unsigned long long)arg5;
- (short *)inBuffer;
- (int)bufferLengthInShort;
- (short *)outBuffer;
- (int)channelCnt;
- (void)setChannelCnt:(int)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)frameDuration;
- (void)setFrameDuration:(int)arg1;
- (unsigned long long)audioFormat;
- (void)setAudioFormat:(unsigned long long)arg1;
- (id)inBufferData;
- (void)setInBufferData:(id)arg1;
- (void).cxx_destruct;
@end

