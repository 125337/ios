@interface MJTTSRequestResult : MJSpeechRequestResult
{
    NSData * _responseData; // +0x8
    NSData * _pcmData; // +0x10
    NSString * _audioFilePath; // +0x18
    long long _audioSampleRate; // +0x20
    NSDictionary * _extraInfos; // +0x28
}
- (id)initWithResponseData:(id)arg1;
- (id)initWithResponseData:(id)arg1 extraInfos:(id)arg2;
- (id)description;
- (id)responseData;
- (id)pcmData;
- (void)setPcmData:(id)arg1;
- (id)audioFilePath;
- (void)setAudioFilePath:(id)arg1;
- (long long)audioSampleRate;
- (void)setAudioSampleRate:(long long)arg1;
- (id)extraInfos;
- (void).cxx_destruct;
@end
