@interface WCPayLQTClickPurchaseCgi : WCPayBaseCgi
{
    id <WCPayLQTClickPurchaseCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithDelegate:(id)arg1 request:(id)arg2 useCache:(BOOL)arg3;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (id)processCacheDataBeforeSetAsResponse:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
