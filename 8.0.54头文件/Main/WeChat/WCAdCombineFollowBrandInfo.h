@interface WCAdCombineFollowBrandInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _openType; // +0x8
    NSString * _brandUsername; // +0x10
    NSString * _brandDesc; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)brandUsername;
- (void)setBrandUsername:(id)arg1;
- (id)brandDesc;
- (void)setBrandDesc:(id)arg1;
- (int)openType;
- (void)setOpenType:(int)arg1;
- (void).cxx_destruct;
@end

