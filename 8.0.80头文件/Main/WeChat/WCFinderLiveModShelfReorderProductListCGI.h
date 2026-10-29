@interface WCFinderLiveModShelfReorderProductListCGI : WCFinderLiveBaseCgi
{
    unsigned int _modCmdId; // +0x8
    NSArray * _reorderedIDUnitList; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFinderTaskId:(id)arg1 reorderedIDUnitList:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)modCmdId;
- (void)setModCmdId:(unsigned int)arg1;
- (id)reorderedIDUnitList;
- (void)setReorderedIDUnitList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
