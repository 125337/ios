@interface WCFinderPlayLiveWithoutLoginScanQRCodeCGI : WCFinderLiveBaseCgi
{
    NSString * _finderUsername; // +0x8
    unsigned long long _objectId; // +0x10
    unsigned long long _liveId; // +0x18
    NSString * _token; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithFinderUsrName:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 token:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

