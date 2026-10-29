@interface MMConfSDKAudioFormat : NSObject
{
    unsigned int _sampleRate; // +0x8
    unsigned int _channels; // +0xc
    unsigned int _frameDurationMs; // +0x10
}
- (unsigned int)sampleRate;
- (void)setSampleRate:(unsigned int)arg1;
- (unsigned int)channels;
- (void)setChannels:(unsigned int)arg1;
- (unsigned int)frameDurationMs;
- (void)setFrameDurationMs:(unsigned int)arg1;
@end
