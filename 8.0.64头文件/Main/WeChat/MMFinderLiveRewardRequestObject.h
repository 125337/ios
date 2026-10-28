@interface MMFinderLiveRewardRequestObject : NSObject <WCCoinConsumeLogicDelegate>
{
    BOOL _comboFinished; // +0x8
    unsigned int _rewardProductCount; // +0xc
    unsigned int _rewardAmountInWecoin; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    WCFinderContact * _rewardRecipientContact; // +0x20
    MMFinderLiveRewardGiftItem * _rewardGiftItem; // +0x28
    NSString * _requestId; // +0x30
    NSString * _rewardComboId; // +0x38
    NSString * _rewardProductId; // +0x40
    NSString * _styleId; // +0x48
    unsigned long long _sendRequestTime; // +0x50
    NSString * _rewardBillNo; // +0x58
    NSData * _rewardRequestBuffer; // +0x60
    NSData * _rewardExtInfo; // +0x68
    NSError * _requestError; // +0x70
    id /* block */ _completionBlock; // +0x78
    id /* block */ _successCompletion; // +0x80
    id /* block */ _freeGiftFailedBlock; // +0x88
    NSMutableArray * _rewardPrepareBuff; // +0x90
    PackageResourceInfo_ProductBatchInfo * _batchInfo; // +0x98
}
- (void)startRewardRequest;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidCancel:(id)arg1;
- (id)description;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)rewardRecipientContact;
- (void)setRewardRecipientContact:(id)arg1;
- (id)rewardGiftItem;
- (void)setRewardGiftItem:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)rewardComboId;
- (void)setRewardComboId:(id)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (id)styleId;
- (void)setStyleId:(id)arg1;
- (unsigned int)rewardProductCount;
- (void)setRewardProductCount:(unsigned int)arg1;
- (unsigned int)rewardAmountInWecoin;
- (void)setRewardAmountInWecoin:(unsigned int)arg1;
- (unsigned long long)sendRequestTime;
- (void)setSendRequestTime:(unsigned long long)arg1;
- (BOOL)comboFinished;
- (void)setComboFinished:(BOOL)arg1;
- (id)rewardBillNo;
- (void)setRewardBillNo:(id)arg1;
- (id)rewardRequestBuffer;
- (void)setRewardRequestBuffer:(id)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (id)requestError;
- (void)setRequestError:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)successCompletion;
- (void)setSuccessCompletion:(id /* block */)arg1;
- (id /* block */)freeGiftFailedBlock;
- (void)setFreeGiftFailedBlock:(id /* block */)arg1;
- (id)rewardPrepareBuff;
- (void)setRewardPrepareBuff:(id)arg1;
- (id)batchInfo;
- (void)setBatchInfo:(id)arg1;
- (void).cxx_destruct;
@end
