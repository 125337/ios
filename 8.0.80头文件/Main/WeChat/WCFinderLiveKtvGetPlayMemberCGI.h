@interface WCFinderLiveKtvGetPlayMemberCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    long long _cgiRequestScene; // +0x20
    NSData * _reqBuffer; // +0x28
    NSData * _liveCookies; // +0x30
}
- (id)initWithFinderTaskId:(id)arg1 reqBuffer:(id)arg2 liveCookies:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (long long)cgiRequestScene;
- (void)setCgiRequestScene:(long long)arg1;
- (id)reqBuffer;
- (void)setReqBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end
