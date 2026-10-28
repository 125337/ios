@interface WCAdWeGameGiftTagInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _icon; // +0x8
    NSString * _descText; // +0x10
    NSString * _clickText; // +0x18
    NSString * _clickTextColor; // +0x20
    NSString * _clickTextColorDark; // +0x28
    NSString * _clickIconLight; // +0x30
    NSString * _clickIconDark; // +0x38
    WCAdCardBtnInfo * _clickActionInfo; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)clickText;
- (void)setClickText:(id)arg1;
- (id)clickTextColor;
- (void)setClickTextColor:(id)arg1;
- (id)clickTextColorDark;
- (void)setClickTextColorDark:(id)arg1;
- (id)clickIconLight;
- (void)setClickIconLight:(id)arg1;
- (id)clickIconDark;
- (void)setClickIconDark:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
