@interface EcsGiftItem : MMObject <NSCopying>
{
    unsigned int _skuPrice; // +0x8
    unsigned int _giftStatus; // +0xc
    unsigned int _canChangeSku; // +0x10
    NSString * _orderId; // +0x18
    NSString * _skuImgUrl; // +0x20
    NSString * _skuTitle; // +0x28
    NSString * _skuSaleParams; // +0x30
    EcsGiftAddress * _address; // +0x38
    NSString * _skuId; // +0x40
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (id)skuImgUrl;
- (void)setSkuImgUrl:(id)arg1;
- (id)skuTitle;
- (void)setSkuTitle:(id)arg1;
- (id)skuSaleParams;
- (void)setSkuSaleParams:(id)arg1;
- (unsigned int)skuPrice;
- (void)setSkuPrice:(unsigned int)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (unsigned int)giftStatus;
- (void)setGiftStatus:(unsigned int)arg1;
- (unsigned int)canChangeSku;
- (void)setCanChangeSku:(unsigned int)arg1;
- (id)skuId;
- (void)setSkuId:(id)arg1;
- (void).cxx_destruct;
@end

