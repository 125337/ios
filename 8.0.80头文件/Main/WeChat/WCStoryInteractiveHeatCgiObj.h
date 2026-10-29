@interface WCStoryInteractiveHeatCgiObj : WCStoryBaseCGIObj
{
    id /* block */ _dbSyncBlock; // +0x8
    id /* block */ _successBlcok; // +0x10
    id /* block */ _failBlock; // +0x18
    NSArray * _tidArray; // +0x20
}
- (id)initWithDataItemTidArray:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)dbSyncBlock;
- (void)setDbSyncBlock:(id /* block */)arg1;
- (id /* block */)successBlcok;
- (void)setSuccessBlcok:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)tidArray;
- (void)setTidArray:(id)arg1;
- (void).cxx_destruct;
@end
