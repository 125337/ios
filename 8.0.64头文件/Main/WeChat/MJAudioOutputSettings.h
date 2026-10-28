@interface MJAudioOutputSettings : NSObject
{
    unsigned long long _format; // +0x8
    long long _sampleRate; // +0x10
    long long _channelCount; // +0x18
}
- (id)initWithAudioFormat:(unsigned long long)arg1 sampleRate:(long long)arg2 channelCount:(long long)arg3;
- (id)description;
- (unsigned long long)format;
- (long long)sampleRate;
- (long long)channelCount;
@end
