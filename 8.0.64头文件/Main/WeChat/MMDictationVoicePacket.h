@interface MMDictationVoicePacket : NSObject
{
    unsigned int _seq; // +0x8
    unsigned int _eventId; // +0xc
    NSData * _data; // +0x10
    NSString * _voiceId; // +0x18
}
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (void).cxx_destruct;
@end
