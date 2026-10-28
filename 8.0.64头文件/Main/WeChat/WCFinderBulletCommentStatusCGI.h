@interface WCFinderBulletCommentStatusCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithObjectId:(unsigned long long)arg1 refBulletCommentId:(unsigned long long)arg2 action:(long long)arg3 finderUsername:(id)arg4 nonceID:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
