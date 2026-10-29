@interface WCFinderLiveEntranceNavCGI : WCFinderLiveBaseCgi
{
    unsigned int _requestScene; // +0x8
    FinderClientStatus * _clientStatus; // +0x10
    FinderLiveClientStatus * _liveClientStatus; // +0x18
    double _longitude; // +0x20
    double _latitude; // +0x28
    NSData * _liveCookies; // +0x30
    NSArray * _readObjectIds; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failureBlock; // +0x48
}
- (id)initWithLiveTaskId:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 clientStatus:(id)arg4 liveClientStatus:(id)arg5 liveCookies:(id)arg6 readObjectIds:(id)arg7 requestScene:(unsigned int)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (id)liveClientStatus;
- (void)setLiveClientStatus:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)readObjectIds;
- (void)setReadObjectIds:(id)arg1;
- (unsigned int)requestScene;
- (void)setRequestScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
