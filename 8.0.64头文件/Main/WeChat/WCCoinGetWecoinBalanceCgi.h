@interface WCCoinGetWecoinBalanceCgi : WCBaseCgi
{
    id /* block */ _callback; // +0x8
}
- (id)init;
- (void)getWecoinBalance:(id /* block */)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
