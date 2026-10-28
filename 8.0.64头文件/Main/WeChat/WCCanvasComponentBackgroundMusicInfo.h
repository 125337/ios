@interface WCCanvasComponentBackgroundMusicInfo : MMObject <NSCoding, WCAdParserProtocol>
{
    int _autoPlayType; // +0x8
    NSString * _voiceUrl; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)voiceUrl;
- (void)setVoiceUrl:(id)arg1;
- (int)autoPlayType;
- (void)setAutoPlayType:(int)arg1;
- (void).cxx_destruct;
@end
