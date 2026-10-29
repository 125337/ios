@interface WCFinderGetLiveRealnameLikeListCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    unsigned long long _objectId; // +0x20
    NSData * _lastBuffer; // +0x28
    NSString * _finderUsername; // +0x30
}
- (id)initWithFinderTaskId:(id)arg1 objectId:(unsigned long long)arg2 lastBuffer:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithFinderTaskId:(id)arg1 objectId:(unsigned long long)arg2 finderUsername:(id)arg3 scene:(unsigned int)arg4 lastBuffer:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
