@interface WCAdWeWorkProfileInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _weWorkTailName; // +0x8
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)weWorkTailName;
- (void)setWeWorkTailName:(id)arg1;
- (void).cxx_destruct;
@end

