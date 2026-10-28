@interface WCCanvasComponentHalfRandomCardPreAnimInfo : MMObject <NSCoding>
{
    NSString * _cardImg; // +0x8
    NSString * _title; // +0x10
    NSString * _subTitle; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)cardImg;
- (void)setCardImg:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (void).cxx_destruct;
@end
