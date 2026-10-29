@interface MMFinderLivePayRequestObject : NSObject <WCCoinConsumeLogicDelegate>
{
    BOOL _skipBuyCoinConfirmation; // +0x8
    BOOL _performBalanceCheck; // +0x9
    BOOL _differentialTopUp; // +0xa
    unsigned int _wecoinAmount; // +0xc
    int _rechargeScene; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSString * _requestId; // +0x20
    unsigned long long _sendRequestTime; // +0x28
    NSString * _requestBillNo; // +0x30
    NSData * _requestBuffer; // +0x38
    NSData * _rewardExtInfo; // +0x40
    NSError * _requestError; // +0x48
    NSString * _comboId; // +0x50
    id /* block */ _completionBlock; // +0x58
    id <MMFinderLivePayMgrExt> _logicOberver; // +0x60
    id <MMPageSheetProvider> _buyCoinFromPage; // +0x68
    id <MMPageSheetProvider> _consumeFromPage; // +0x70
    NSString * _referenceId; // +0x78
}
- (id)init;
- (void)initDefaultData;
- (void)start;
- (unsigned long long)buyCoinBusinessId;
- (void)retrieveBillToPayWithBlock:(id /* block */)arg1;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (id)description;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (unsigned long long)sendRequestTime;
- (void)setSendRequestTime:(unsigned long long)arg1;
- (id)requestBillNo;
- (void)setRequestBillNo:(id)arg1;
- (id)requestBuffer;
- (void)setRequestBuffer:(id)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (id)requestError;
- (void)setRequestError:(id)arg1;
- (unsigned int)wecoinAmount;
- (void)setWecoinAmount:(unsigned int)arg1;
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)logicOberver;
- (void)setLogicOberver:(id)arg1;
- (id)buyCoinFromPage;
- (void)setBuyCoinFromPage:(id)arg1;
- (id)consumeFromPage;
- (void)setConsumeFromPage:(id)arg1;
- (BOOL)skipBuyCoinConfirmation;
- (void)setSkipBuyCoinConfirmation:(BOOL)arg1;
- (BOOL)performBalanceCheck;
- (void)setPerformBalanceCheck:(BOOL)arg1;
- (id)referenceId;
- (void)setReferenceId:(id)arg1;
- (BOOL)differentialTopUp;
- (void)setDifferentialTopUp:(BOOL)arg1;
- (int)rechargeScene;
- (void)setRechargeScene:(int)arg1;
- (void).cxx_destruct;
@end
