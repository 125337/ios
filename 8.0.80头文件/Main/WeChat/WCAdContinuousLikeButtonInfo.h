@interface WCAdContinuousLikeButtonInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _title; // +0x8
    NSString * _titleColorLight; // +0x10
    NSString * _titleColorDark; // +0x18
    NSString * _iconLight; // +0x20
    NSString * _iconDark; // +0x28
    NSString * _bgColorLight; // +0x30
    NSString * _bgColorDark; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchTitleColor;
- (id)fetchIconUrl;
- (id)fetchBgColor;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColorLight;
- (void)setTitleColorLight:(id)arg1;
- (id)titleColorDark;
- (void)setTitleColorDark:(id)arg1;
- (id)iconLight;
- (void)setIconLight:(id)arg1;
- (id)iconDark;
- (void)setIconDark:(id)arg1;
- (id)bgColorLight;
- (void)setBgColorLight:(id)arg1;
- (id)bgColorDark;
- (void)setBgColorDark:(id)arg1;
- (void).cxx_destruct;
@end
