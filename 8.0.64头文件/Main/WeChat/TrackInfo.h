@interface TrackInfo : NSObject
{
    unsigned long long _sampleRate; // +0x8
    unsigned long long _channels; // +0x10
}
- (unsigned long long)sampleRate;
- (void)setSampleRate:(unsigned long long)arg1;
- (unsigned long long)channels;
- (void)setChannels:(unsigned long long)arg1;
@end
