@interface MJSpeechAudioData : NSObject
{
    NSData * _data; // +0x8
    unsigned long long _format; // +0x10
    long long _sampleRate; // +0x18
    long long _channelCount; // +0x20
}
- (id)initWithData:(id)arg1 format:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 format:(unsigned long long)arg2 sampleRate:(long long)arg3 channelCount:(long long)arg4;
- (id)description;
- (id)data;
- (unsigned long long)format;
- (long long)sampleRate;
- (long long)channelCount;
- (void).cxx_destruct;
@end
