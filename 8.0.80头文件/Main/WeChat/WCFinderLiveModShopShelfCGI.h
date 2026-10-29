@interface WCFinderLiveModShopShelfCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    FinderCmdItem * _cmdItem; // +0x18
}
- (id)initWithFinderTaskId:(id)arg1 cmdItem:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)cmdItem;
- (void)setCmdItem:(id)arg1;
- (void).cxx_destruct;
@end
