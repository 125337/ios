@interface WCCardAvailableSeed : MMObject
{
    unsigned int _shopID; // +0x8
    unsigned int _canMultiSelect; // +0xc
    unsigned int _timeStamp; // +0x10
    unsigned int _onlyInvoice; // +0x14
    NSString * _appID; // +0x18
    NSString * _cardType; // +0x20
    NSString * _cardTpID; // +0x28
    NSString * _signType; // +0x30
    NSString * _cardSign; // +0x38
    NSString * _nonceStr; // +0x40
}
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)shopID;
- (void)setShopID:(unsigned int)arg1;
- (unsigned int)canMultiSelect;
- (void)setCanMultiSelect:(unsigned int)arg1;
- (id)cardType;
- (void)setCardType:(id)arg1;
- (id)cardTpID;
- (void)setCardTpID:(id)arg1;
- (id)signType;
- (void)setSignType:(id)arg1;
- (id)cardSign;
- (void)setCardSign:(id)arg1;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg1;
- (id)nonceStr;
- (void)setNonceStr:(id)arg1;
- (unsigned int)onlyInvoice;
- (void)setOnlyInvoice:(unsigned int)arg1;
- (void).cxx_destruct;
@end
