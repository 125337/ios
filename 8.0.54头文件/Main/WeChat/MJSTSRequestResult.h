@interface MJSTSRequestResult : MJSpeechRequestResult
{
    NSData * _pcmData; // +0x8
    NSString * _audioFilePath; // +0x10
}
- (id)initWithPCMData:(id)arg1;
- (id)description;
- (id)pcmData;
- (id)audioFilePath;
- (void)setAudioFilePath:(id)arg1;
- (void).cxx_destruct;
@end

