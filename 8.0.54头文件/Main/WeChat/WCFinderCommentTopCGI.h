@interface WCFinderCommentTopCGI : WCFinderBaseCgi
{
    WCFinderComment * _comment; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _userName; // +0x20
    NSString * _sessionBuffer; // +0x28
    NSString * _tid; // +0x30
}
- (id)initWithComment:(id)arg1 tid:(id)arg2 userName:(id)arg3 scene:(unsigned long long)arg4 commentScene:(int)arg5 sessionBuffer:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)comment;
- (void)setComment:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end

