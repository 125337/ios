@interface WCAdPagInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _pagUrl; // +0x8
    NSString * _pagMD5; // +0x10
    double _width; // +0x18
    double _height; // +0x20
    NSString * _pagThumbUrl; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isValidWithThumb;
- (id)pagUrl;
- (void)setPagUrl:(id)arg1;
- (id)pagMD5;
- (void)setPagMD5:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (id)pagThumbUrl;
- (void)setPagThumbUrl:(id)arg1;
- (void).cxx_destruct;
@end

