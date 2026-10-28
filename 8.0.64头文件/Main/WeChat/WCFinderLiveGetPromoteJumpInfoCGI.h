@interface WCFinderLiveGetPromoteJumpInfoCGI : WCFinderLiveBaseCgi
{
    unsigned int _type; // +0x8
    NSString * _jumpId; // +0x10
    NSData * _jumpInfoBuffer; // +0x18
    NSData * _sessionBuffer; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 type:(unsigned int)arg2 jumpId:(id)arg3 jumpInfoBuffer:(id)arg4 sessionBuffer:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (id)getUxInfoData;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)jumpId;
- (void)setJumpId:(id)arg1;
- (id)jumpInfoBuffer;
- (void)setJumpInfoBuffer:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
