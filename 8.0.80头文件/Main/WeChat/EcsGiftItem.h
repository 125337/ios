@interface EcsGiftItem : MMObject <NSCopying>
{
    unsigned int _skuPrice; // +0x8
    unsigned int _giftStatus; // +0xc
    unsigned int _canChangeSku; // +0x10
    unsigned int _statusStyle; // +0x14
    unsigned int _statusVersion; // +0x18
    unsigned int _deliveryMethod; // +0x1c
    NSString * _orderId; // +0x20
    NSString * _skuImgUrl; // +0x28
    NSString * _skuTitle; // +0x30
    NSString * _skuSaleParams; // +0x38
    EcsGiftAddress * _address; // +0x40
    NSString * _skuId; // +0x48
    NSString * _statusWording; // +0x50
    NSString * _detailStatusWording; // +0x58
    NSString * _presentCntWording; // +0x60
    EcsSecretPresentInfo * _secretPresentInfo; // +0x68
    NSString * _skuTitleTagName; // +0x70
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
- (id)statusWording;
- (void)setStatusWording:(id)arg1;
- (unsigned int)statusStyle;
- (void)setStatusStyle:(unsigned int)arg1;
- (unsigned int)statusVersion;
- (void)setStatusVersion:(unsigned int)arg1;
- (id)detailStatusWording;
- (void)setDetailStatusWording:(id)arg1;
- (id)presentCntWording;
- (void)setPresentCntWording:(id)arg1;
- (unsigned int)deliveryMethod;
- (void)setDeliveryMethod:(unsigned int)arg1;
- (id)secretPresentInfo;
- (void)setSecretPresentInfo:(id)arg1;
- (id)skuTitleTagName;
- (void)setSkuTitleTagName:(id)arg1;
- (void).cxx_destruct;
@end
