@interface WCAdSliderCardProductInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSArray * _productList; // +0x8
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)productList;
- (void)setProductList:(id)arg1;
- (void).cxx_destruct;
@end
