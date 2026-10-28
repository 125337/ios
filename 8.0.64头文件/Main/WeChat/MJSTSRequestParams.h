@interface MJSTSRequestParams : MJSpeechRequestParams
{
    MJSpeechAudioData * _audioData; // +0x8
    NSString * _roleID; // +0x10
}
- (id)initWithAudioData:(id)arg1 roleID:(id)arg2;
- (id)description;
- (id)audioData;
- (id)roleID;
- (void).cxx_destruct;
@end
