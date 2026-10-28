@interface WCCoinGetWeCoinPriceListCgi : WCBaseCgi
{
    unsigned int _diffWecoinCount; // +0x8
    unsigned int _scene; // +0xc
    unsigned long long _businessId; // +0x10
    NSString * _currencyCode; // +0x18
    id <WCCoinGetWeCoinPriceListCgiDelegate> _delegate; // +0x20
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (id)currencyCode;
- (void)setCurrencyCode:(id)arg1;
- (unsigned int)diffWecoinCount;
- (void)setDiffWecoinCount:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
