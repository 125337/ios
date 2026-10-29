@interface WCGetFinderRelativePoiListCGI : WCFinderBaseCgi
{
    NSData * _lastBuffer; // +0x8
    NSString * _finderUsername; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithLastBuffer:(id)arg1 finderUsername:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

