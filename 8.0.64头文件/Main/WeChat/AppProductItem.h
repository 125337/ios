@interface AppProductItem : NSObject <PBCoding, NSCopying>
{
    unsigned int _type; // +0x8
    NSString * _productInfo; // +0x10
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_productInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (void).cxx_destruct;
@end
