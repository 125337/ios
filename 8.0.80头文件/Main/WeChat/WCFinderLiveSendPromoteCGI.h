@interface WCFinderLiveSendPromoteCGI : WCFinderLiveBaseCgi
{
    int _opScene; // +0x8
    unsigned long long _promoteId; // +0x10
    unsigned long long _requestScene; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
+ (id)createSendPromoteCGIWithLiveTaskId:(id)arg1 promoteId:(unsigned long long)arg2 requestScene:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
+ (id)createCancelPromoteCGIWithLiveTaskId:(id)arg1 promoteId:(unsigned long long)arg2 requestScene:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithLiveTaskId:(id)arg1 opScene:(int)arg2 promoteId:(unsigned long long)arg3 requestScene:(unsigned long long)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)promoteId;
- (void)setPromoteId:(unsigned long long)arg1;
- (unsigned long long)requestScene;
- (void)setRequestScene:(unsigned long long)arg1;
- (int)opScene;
- (void)setOpScene:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
