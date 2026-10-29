@interface WCCanvasComponentMusicItem : MMObject <NSCoding, WCAdParserProtocol>
{
    BOOL _isDarkColor; // +0x8
    NSString * _voiceUrl; // +0x10
    NSString * _coverUrl; // +0x18
    NSString * _bgColor; // +0x20
    double _bgColorAlpha; // +0x28
    NSString * _title; // +0x30
    NSString * _subTitle; // +0x38
    double _musicDuration; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)voiceUrl;
- (void)setVoiceUrl:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)bgColorAlpha;
- (void)setBgColorAlpha:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)isDarkColor;
- (void)setIsDarkColor:(BOOL)arg1;
- (double)musicDuration;
- (void)setMusicDuration:(double)arg1;
- (void).cxx_destruct;
@end

