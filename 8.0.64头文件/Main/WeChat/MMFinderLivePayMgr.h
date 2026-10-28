@interface MMFinderLivePayMgr : MMUserService <WCCoinBuyCoinLogicDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _requestId2PayRequests; // +0x8
    MMFinderLivePayRequestObject * _currentBuyCoinPayRequest; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)onServiceClearData;
- (void)startRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)joinFanClubWith:(id)arg1 rewardExtInfo:(id)arg2 logicOberver:(id)arg3 pageSheetProvider:(id)arg4;
- (void)purchaseGameTeamupWith:(id)arg1 rewardExtInfo:(id)arg2 logicOberver:(id)arg3;
- (id)deliveryGiftWith:(id)arg1 rewardExtInfo:(id)arg2 logicOberver:(id)arg3;
- (void)purchaseChargeableLiveWith:(id)arg1 wecoinAmount:(unsigned int)arg2 logicOberver:(id)arg3;
- (void)prepayLiveWithRewardType:(unsigned int)arg1 rewardExtInfo:(id)arg2 taskId:(id)arg3 referenceId:(id)arg4 logicOberver:(id)arg5;
- (void)payForPaidBarrageWithTaskId:(id)arg1 productId:(id)arg2 rewardProductCount:(unsigned int)arg3 rewardAmountInWecoin:(unsigned int)arg4 clientMsgId:(id)arg5 logicOberver:(id)arg6;
- (void)buyCoinWithPayRequest:(id)arg1 shortage:(unsigned int)arg2;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (id)getLiveTask:(id)arg1;
- (id)requestId2PayRequests;
- (void)setRequestId2PayRequests:(id)arg1;
- (id)currentBuyCoinPayRequest;
- (void)setCurrentBuyCoinPayRequest:(id)arg1;
- (void).cxx_destruct;
@end
