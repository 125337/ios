@interface ChatBotVoiceInfo : NSObject
{
    BOOL _isSelected; // +0x8
    unsigned int _trimberType; // +0xc
    NSString * _voiceId; // +0x10
    NSString * _fileId; // +0x18
    NSString * _name; // +0x20
    NSString * _voiceUrl; // +0x28
}
- (id)initWithPB:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)trimberType;
- (void)setTrimberType:(unsigned int)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)voiceUrl;
- (void)setVoiceUrl:(id)arg1;
- (void).cxx_destruct;
@end
