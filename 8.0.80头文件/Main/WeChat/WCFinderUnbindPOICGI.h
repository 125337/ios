@interface WCFinderUnbindPOICGI : WCFinderBaseCgi
{
    NSString * _poiId; // +0x8
    NSString * _finderUsername; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithId:(id)arg1 finderUsername:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
