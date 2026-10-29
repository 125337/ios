@interface WCAdColorInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _color; // +0x8
    NSString * _colorDark; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)uiColor;
- (id)color;
- (void)setColor:(id)arg1;
- (id)colorDark;
- (void)setColorDark:(id)arg1;
- (void).cxx_destruct;
@end

