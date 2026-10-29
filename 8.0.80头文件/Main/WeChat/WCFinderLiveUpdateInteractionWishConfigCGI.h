@interface WCFinderLiveUpdateInteractionWishConfigCGI : WCFinderLiveBaseCgi
{
    int _opType; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
    InteractionWishConfig * _interactionWishConfig; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 opType:(int)arg3 interactionWishConfig:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)interactionWishConfig;
- (void)setInteractionWishConfig:(id)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (void).cxx_destruct;
@end
