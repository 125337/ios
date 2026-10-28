@interface WCFinderModMentionOpLogCGI : WCFinderBaseCgi
{
    BOOL _silent; // +0x8
    unsigned long long _svrMentionID; // +0x10
    NSString * _finderUsername; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithSvrMentionID:(unsigned long long)arg1 finderUsername:(id)arg2 silent:(BOOL)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)svrMentionID;
- (void)setSvrMentionID:(unsigned long long)arg1;
- (BOOL)silent;
- (void)setSilent:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
