@interface VoiceRecordConfig : NSObject
{
    BOOL _forbidVoiceTrans; // +0x8
    unsigned int _scene; // +0xc
    NSString * _chatName; // +0x10
    id <VoiceRecordAudioService> _audioService; // +0x18
}
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)forbidVoiceTrans;
- (void)setForbidVoiceTrans:(BOOL)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)audioService;
- (void)setAudioService:(id)arg1;
- (void).cxx_destruct;
@end
