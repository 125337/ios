@interface WCFinderContactTagOptionCGI : WCFinderBaseCgi
{
    NSString * _wxUsername; // +0x8
    unsigned long long _optionType; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithWxUsername:(id)arg1 optionType:(unsigned long long)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)wxUsername;
- (void)setWxUsername:(id)arg1;
- (unsigned long long)optionType;
- (void)setOptionType:(unsigned long long)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
