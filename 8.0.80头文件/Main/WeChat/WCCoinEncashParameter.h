@interface WCCoinEncashParameter : MMObject
{
    unsigned long long _businessId; // +0x8
    long long _incomeBalance; // +0x10
    WecoinTaxCutEntranceInfo * _taxCutInfo; // +0x18
    RealNameAuthInfo * _authInfo; // +0x20
}
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (long long)incomeBalance;
- (void)setIncomeBalance:(long long)arg1;
- (id)taxCutInfo;
- (void)setTaxCutInfo:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (void).cxx_destruct;
@end
