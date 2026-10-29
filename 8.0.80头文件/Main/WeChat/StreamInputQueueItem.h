@interface StreamInputQueueItem : MMObject
{
    unsigned int _inputId; // +0x8
    unsigned int _offset; // +0xc
    unsigned int _length; // +0x10
    unsigned int _endFlag; // +0x14
    unsigned int _sequence; // +0x18
    unsigned int _inputLanguageType; // +0x1c
    NSString * _sessionId; // +0x20
    NSString * _voiceId; // +0x28
    NSData * _voiceData; // +0x30
    NSData * _pcmVoiceData; // +0x38
}
- (id)initWithItem:(id)arg1;
- (id)description;
- (unsigned int)inputId;
- (void)setInputId:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)length;
- (void)setLength:(unsigned int)arg1;
- (unsigned int)endFlag;
- (void)setEndFlag:(unsigned int)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (id)voiceData;
- (void)setVoiceData:(id)arg1;
- (id)pcmVoiceData;
- (void)setPcmVoiceData:(id)arg1;
- (unsigned int)inputLanguageType;
- (void)setInputLanguageType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
