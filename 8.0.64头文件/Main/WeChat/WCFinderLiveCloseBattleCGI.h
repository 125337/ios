@interface WCFinderLiveCloseBattleCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem * _dataItem; // +0x8
    WCFinderContact * _toFinderContact; // +0x10
    NSString * _battleSessionId; // +0x18
    unsigned long long _closeScene; // +0x20
    NSData * _liveCookies; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 toFinderContact:(id)arg3 battleSessionId:(id)arg4 closeScene:(unsigned long long)arg5 liveCookies:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id)battleSessionId;
- (void)setBattleSessionId:(id)arg1;
- (unsigned long long)closeScene;
- (void)setCloseScene:(unsigned long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
