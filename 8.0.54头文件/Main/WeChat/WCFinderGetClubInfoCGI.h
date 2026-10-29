@interface WCFinderGetClubInfoCGI : WCFinderBaseCgi
{
    int _role; // +0x8
    NSString * _chatroomId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithChatroom:(id)arg1 role:(int)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (id)chatroomId;
- (void)setChatroomId:(id)arg1;
- (int)role;
- (void)setRole:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

