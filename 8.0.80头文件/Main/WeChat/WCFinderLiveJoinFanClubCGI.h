@interface WCFinderLiveJoinFanClubCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    NSData * _liveCookies; // +0x20
    NSData * _rewardExtInfo; // +0x28
    NSString * _comboId; // +0x30
    NSString * _sessionBuffer; // +0x38
}
- (id)initWithFinderTaskId:(id)arg1 comboId:(id)arg2 liveCookies:(id)arg3 rewardExtInfo:(id)arg4 sessionBuffer:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
