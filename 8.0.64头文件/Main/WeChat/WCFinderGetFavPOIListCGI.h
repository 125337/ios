@interface WCFinderGetFavPOIListCGI : WCFinderBaseCgi
{
    NSString * _username; // +0x8
    NSData * _lastBuffer; // +0x10
    double _longitude; // +0x18
    double _latitude; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithFinderUsername:(id)arg1 lastBuffer:(id)arg2 longitude:(float)arg3 latitude:(float)arg4 success:(id /* block */)arg5 fail:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
