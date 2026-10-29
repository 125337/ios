@interface WCFinderCommentCGI : WCFinderBaseCgi
{
    unsigned int _bypassBufferType; // +0x8
    WCFinderComment * _comment; // +0x10
    NSString * _replayUserName; // +0x18
    unsigned long long _objectID; // +0x20
    unsigned long long _rootCommentID; // +0x28
    NSString * _username; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
    unsigned long long _scene; // +0x48
    NSString * _nonceID; // +0x50
    NSString * _sessionBuffer; // +0x58
    NSData * _bypassBuffer; // +0x60
}
- (id)initCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (id)initCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 bypassBufferType:(unsigned int)arg7 bypassBuffer:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)internalInitCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 bypassBufferType:(int)arg7 bypassBuffer:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createPostRequest;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)replayUserName;
- (void)setReplayUserName:(id)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (unsigned long long)rootCommentID;
- (void)setRootCommentID:(unsigned long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned int)bypassBufferType;
- (void)setBypassBufferType:(unsigned int)arg1;
- (id)bypassBuffer;
- (void)setBypassBuffer:(id)arg1;
- (void).cxx_destruct;
@end
