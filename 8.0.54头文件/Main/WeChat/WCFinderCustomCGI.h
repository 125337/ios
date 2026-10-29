@interface WCFinderCustomCGI : WCFinderBaseCgi
{
    id /* block */ _errorInterceptor; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
}
- (id)initCustomCGINumber:(unsigned long long)arg1 moduleName:(id)arg2 request:(id)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (id)initCustomCGINumber:(unsigned long long)arg1 moduleName:(id)arg2 request:(id)arg3 setFinderBaseRequestBlock:(id /* block */)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)errorInterceptor;
- (void)setErrorInterceptor:(id /* block */)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

