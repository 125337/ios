@interface WCFinderLiveModifyBattleCGI : WCFinderLiveBaseCgi
{
    unsigned int _battleLayout; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSString * _battleId; // +0x18
    NSData * _liveCookies; // +0x20
    unsigned long long _modifyFlag; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 battleId:(id)arg3 liveCookies:(id)arg4 modifyFlag:(unsigned long long)arg5 battleLayout:(unsigned int)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)battleId;
- (void)setBattleId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)modifyFlag;
- (void)setModifyFlag:(unsigned long long)arg1;
- (unsigned int)battleLayout;
- (void)setBattleLayout:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
