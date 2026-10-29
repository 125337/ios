@interface PersonalHotwordASRSnapshot : NSObject
{
    unsigned int _scene; // +0x8
    NSString * _voiceId; // +0x10
    NSString * _asrText; // +0x18
    NSString * _contextKey; // +0x20
}
- (id)initWithVoiceId:(id)arg1 scene:(unsigned int)arg2 asrText:(id)arg3 contextKey:(id)arg4;
- (id)voiceId;
- (unsigned int)scene;
- (id)asrText;
- (id)contextKey;
- (void).cxx_destruct;
@end
