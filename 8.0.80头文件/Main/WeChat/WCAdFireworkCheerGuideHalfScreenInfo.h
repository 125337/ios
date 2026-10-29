@interface WCAdFireworkCheerGuideHalfScreenInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _icon; // +0x8
    NSString * _iconDark; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _buttonTitle; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)iconDark;
- (void)setIconDark:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end
