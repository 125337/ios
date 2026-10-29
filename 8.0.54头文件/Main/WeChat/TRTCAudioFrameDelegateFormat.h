@interface TRTCAudioFrameDelegateFormat : NSObject
{
    int _channels; // +0x8
    int _samplesPerCall; // +0xc
    long long _sampleRate; // +0x10
}
- (long long)sampleRate;
- (void)setSampleRate:(long long)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (int)samplesPerCall;
- (void)setSamplesPerCall:(int)arg1;
@end

