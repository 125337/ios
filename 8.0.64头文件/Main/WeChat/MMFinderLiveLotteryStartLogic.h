@interface MMFinderLiveLotteryStartLogic : NSObject <WCCoinConsumeLogicDelegate>
{
    BOOL _saveToLotteryPanel; // +0x8
    id /* block */ _loadingBlock; // +0x10
    id /* block */ _stopLoadingBlock; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    NSString * _billNo; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithTaskId:(id)arg1;
- (void)startLotteryWithCreateInfo:(id)arg1 saveToLotteryPanel:(BOOL)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)consumeCoinWithBillNo:(id)arg1 respBuff:(id)arg2 totalWecoinAmount:(long long)arg3;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (id)liveTask;
- (void)pollingLotteryGiftPackageOrderBillStatus;
- (id /* block */)loadingBlock;
- (void)setLoadingBlock:(id /* block */)arg1;
- (id /* block */)stopLoadingBlock;
- (void)setStopLoadingBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (BOOL)saveToLotteryPanel;
- (void)setSaveToLotteryPanel:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
