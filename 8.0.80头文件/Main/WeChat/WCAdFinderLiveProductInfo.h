@interface WCAdFinderLiveProductInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _numberRequestParams; // +0x8
    NSString * _finderLiveProductId; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidForRequest;
- (BOOL)isValidForJump;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)finderLiveProductId;
- (void)setFinderLiveProductId:(id)arg1;
- (void).cxx_destruct;
@end
