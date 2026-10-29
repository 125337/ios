@interface WCFinderCheckEmojiCGI : WCFinderBaseCgi
{
    WCFinderCheckEmojiCGIParams * _params; // +0x8
    id /* block */ _success; // +0x10
    id /* block */ _failed; // +0x18
}
- (id)initWithParams:(id)arg1 success:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)_setupRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failed;
- (void)setFailed:(id /* block */)arg1;
- (void).cxx_destruct;
@end
