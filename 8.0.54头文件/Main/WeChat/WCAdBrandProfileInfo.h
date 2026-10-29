@interface WCAdBrandProfileInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _openVideoTab; // +0x8
    NSString * _brandUsername; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)brandUsername;
- (void)setBrandUsername:(id)arg1;
- (BOOL)openVideoTab;
- (void)setOpenVideoTab:(BOOL)arg1;
- (void).cxx_destruct;
@end

