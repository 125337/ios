@interface WCFinderDeleteCommentCGI : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    WCFinderComment * _comment; // +0x10
    NSString * _tid; // +0x18
    id /* block */ _successful; // +0x20
    id /* block */ _failure; // +0x28
    unsigned long long _rootCommentID; // +0x30
    unsigned long long _scene; // +0x38
    NSString * _sessionBuffer; // +0x40
}
- (id)initWithComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 scene:(unsigned long long)arg4 sessionBuffer:(id)arg5 commentScene:(int)arg6 successful:(id /* block */)arg7 failure:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (unsigned long long)rootCommentID;
- (void)setRootCommentID:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
