@interface WCFinderMsgGetMsgSessionCGI : WCFinderBaseCgi
{
    NSMutableArray * _sessionItemArray; // +0x8
    id /* block */ _sucBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
- (id)initWithSessionItemArray:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)sessionItemArray;
- (void)setSessionItemArray:(id)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
