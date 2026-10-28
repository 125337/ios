@interface WCFinderProfilePOISearchCGI : WCFinderBaseCgi
{
    NSString * _queryText; // +0x8
    NSString * _finderUserName; // +0x10
    double _longtitude; // +0x18
    double _latitude; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failureBlock; // +0x30
}
- (id)initWithQueryText:(id)arg1 finderUsername:(id)arg2 longtitude:(double)arg3 latitude:(double)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (double)longtitude;
- (void)setLongtitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
