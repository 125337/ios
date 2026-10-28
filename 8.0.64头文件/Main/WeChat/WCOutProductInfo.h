@interface WCOutProductInfo : NSObject
{
    unsigned int _minutes; // +0x8
    NSString * _pId; // +0x10
    NSString * _price; // +0x18
    NSString * _priceExtra; // +0x20
    NSString * _discountWording; // +0x28
    SKProduct * _appSKProduct; // +0x30
    long long _buttonTagID; // +0x38
    NSString * _discountMD5; // +0x40
    NSString * _webPayListUrl; // +0x48
}
- (id)pId;
- (void)setPId:(id)arg1;
- (id)price;
- (void)setPrice:(id)arg1;
- (unsigned int)minutes;
- (void)setMinutes:(unsigned int)arg1;
- (id)priceExtra;
- (void)setPriceExtra:(id)arg1;
- (id)discountWording;
- (void)setDiscountWording:(id)arg1;
- (id)appSKProduct;
- (void)setAppSKProduct:(id)arg1;
- (long long)buttonTagID;
- (void)setButtonTagID:(long long)arg1;
- (id)discountMD5;
- (void)setDiscountMD5:(id)arg1;
- (id)webPayListUrl;
- (void)setWebPayListUrl:(id)arg1;
- (void).cxx_destruct;
@end
