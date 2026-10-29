@interface V2TXLiveAudioFrameObserverFormat : NSObject
{
    int _sampleRate; // +0x8
    int _channel; // +0xc
    int _samplesPerCall; // +0x10
    long long _mode; // +0x18
}
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channel;
- (void)setChannel:(int)arg1;
- (int)samplesPerCall;
- (void)setSamplesPerCall:(int)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
@end
