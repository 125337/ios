@interface WCFinderGetFavListCgi : WCFinderBaseCgi
{
    id /* block */ _completionBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithUserName:(id)arg1 lastBuffer:(id)arg2 clientStatus:(id)arg3 completion:(id /* block */)arg4 failed:(id /* block */)arg5;
- (id)initWithUserName:(id)arg1 lastBuffer:(id)arg2 tabType:(int)arg3 clientStatus:(id)arg4 topicId:(unsigned long long)arg5 completion:(id /* block */)arg6 failed:(id /* block */)arg7;
- (id)initWithUserName:(id)arg1 lastBuffer:(id)arg2 tabType:(int)arg3 clientStatus:(id)arg4 scene:(int)arg5 completion:(id /* block */)arg6 failed:(id /* block */)arg7;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

