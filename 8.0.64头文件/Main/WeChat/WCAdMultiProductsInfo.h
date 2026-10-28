@interface WCAdMultiProductsInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSArray * _imageList; // +0x8
    NSString * _productDesc; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)imageList;
- (void)setImageList:(id)arg1;
- (id)productDesc;
- (void)setProductDesc:(id)arg1;
- (void).cxx_destruct;
@end
