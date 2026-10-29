@interface MallProductItem : NSObject <PBCoding, NSCopying>
{
    unsigned int _type; // +0x8
    NSString * _mallProductInfo; // +0x10
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_mallProductInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)mallProductInfo;
- (void)setMallProductInfo:(id)arg1;
- (void).cxx_destruct;
@end

