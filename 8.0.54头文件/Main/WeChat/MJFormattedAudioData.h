@interface MJFormattedAudioData : MJSpeechAudioData
{
    long long _sampleRate; // +0x18
}
- (id)initWithData:(id)arg1 encodeType:(long long)arg2 sampleRate:(long long)arg3;
- (id)description;
- (long long)sampleRate;
@end

