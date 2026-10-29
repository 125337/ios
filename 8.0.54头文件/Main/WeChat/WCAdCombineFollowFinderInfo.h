@interface WCAdCombineFollowFinderInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _finderUsername; // +0x8
    NSString * _finderDesc; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderDesc;
- (void)setFinderDesc:(id)arg1;
- (void).cxx_destruct;
@end

