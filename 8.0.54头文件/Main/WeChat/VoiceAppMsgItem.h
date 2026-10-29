@interface VoiceAppMsgItem : MMObject <NSCopying>
{
    NSString * _voiceurl; // +0x8
    NSString * _aeskey; // +0x10
    NSString * _voicemd5; // +0x18
    long long _length; // +0x20
    long long _playtime; // +0x28
    long long _format; // +0x30
    NSString * _voice_key_words; // +0x38
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)voiceurl;
- (void)setVoiceurl:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)voicemd5;
- (void)setVoicemd5:(id)arg1;
- (long long)length;
- (void)setLength:(long long)arg1;
- (long long)playtime;
- (void)setPlaytime:(long long)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (id)voice_key_words;
- (void)setVoice_key_words:(id)arg1;
- (void).cxx_destruct;
@end

