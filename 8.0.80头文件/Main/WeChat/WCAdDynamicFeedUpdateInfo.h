@interface WCAdDynamicFeedUpdateInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _numberRequestParams; // +0x8
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (void).cxx_destruct;
@end
