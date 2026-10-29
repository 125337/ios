@interface WCGetFinderPOIListCGI : WCFinderBaseCgi
{
    unsigned int _pullType; // +0x8
    NSData * _lastBuffer; // +0x10
    NSString * _finderUsername; // +0x18
    double _longitude; // +0x20
    double _latitude; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failureBlock; // +0x38
}
- (id)initWithPullType:(unsigned int)arg1 lastBuffer:(id)arg2 finderUsername:(id)arg3 longitude:(float)arg4 latitude:(float)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)pullType;
- (void)setPullType:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
