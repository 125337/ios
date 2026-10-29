@interface WCFinderLiveGetFloatMsgConfigCGI : WCFinderLiveBaseCgi
{
    id _extraInfo; // +0x8
    NSData * _liveCookies; // +0x10
    NSString * _finderUserName; // +0x18
    NSString * _anchorFinderUserName; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)transferToFinderLiveFloatMsgList:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)anchorFinderUserName;
- (void)setAnchorFinderUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

