@interface WCFinderLiveGenPersonalMsgSessionInfoCGI : WCFinderLiveBaseCgi
{
    unsigned int _sourceType; // +0x8
    NSData * _liveCookies; // +0x10
    NSString * _toUserName; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 toUserName:(id)arg2 sourceType:(unsigned int)arg3 liveCookies:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

