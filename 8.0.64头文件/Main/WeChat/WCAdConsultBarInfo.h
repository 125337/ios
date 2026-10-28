@interface WCAdConsultBarInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _title; // +0x8
    WCAdColorInfo * _titleColor; // +0x10
    NSString * _consultText; // +0x18
    WCAdColorInfo * _consultTextColor; // +0x20
    NSString * _iconDark; // +0x28
    NSString * _iconLight; // +0x30
    WCAdCardBtnInfo * _titleJumpActionInfo; // +0x38
    WCAdCardBtnInfo * _consultButtonJumpActionInfo; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchTitleColor;
- (id)fetchConsultTextColor;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)consultText;
- (void)setConsultText:(id)arg1;
- (id)consultTextColor;
- (void)setConsultTextColor:(id)arg1;
- (id)iconDark;
- (void)setIconDark:(id)arg1;
- (id)iconLight;
- (void)setIconLight:(id)arg1;
- (id)titleJumpActionInfo;
- (void)setTitleJumpActionInfo:(id)arg1;
- (id)consultButtonJumpActionInfo;
- (void)setConsultButtonJumpActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
