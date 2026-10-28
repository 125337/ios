@interface EcsSkuInfoItem : MMObject <NSCopying>
{
    NSString * _skuImgUrl; // +0x8
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)skuImgUrl;
- (void)setSkuImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
