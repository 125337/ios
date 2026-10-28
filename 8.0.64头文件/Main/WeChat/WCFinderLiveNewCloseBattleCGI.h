@interface WCFinderLiveNewCloseBattleCGI : WCFinderLiveBaseCgi
{
    WCFinderDataItem * _dataItem; // +0x8
    NSString * _battleSessionId; // +0x10
    NSString * _refMicId; // +0x18
    NSData * _liveCookies; // +0x20
    NSString * _vroomId; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 refMicId:(id)arg3 battleSessionId:(id)arg4 liveCookies:(id)arg5 vroomId:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)battleSessionId;
- (void)setBattleSessionId:(id)arg1;
- (id)refMicId;
- (void)setRefMicId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)vroomId;
- (void)setVroomId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
