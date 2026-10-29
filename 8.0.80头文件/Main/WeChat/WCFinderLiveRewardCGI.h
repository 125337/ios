@interface WCFinderLiveRewardCGI : WCFinderLiveBaseCgi
{
    BOOL _comboFinished; // +0x8
    unsigned int _rewardProductCount; // +0xc
    unsigned int _rewardAmountInWecoin; // +0x10
    int _rewardType; // +0x14
    unsigned int _source; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    WCFinderDataItem * _dataItem; // +0x30
    NSString * _rewardRecipientUserName; // +0x38
    NSString * _rewardComboId; // +0x40
    NSString * _rewardProductId; // +0x48
    NSString * _styleId; // +0x50
    NSString * _rewardRequestId; // +0x58
    NSData * _liveCookies; // +0x60
    NSString * _sessionBuffer; // +0x68
    NSData * _rewardExtInfo; // +0x70
    NSMutableArray * _prepareBuf; // +0x78
    PackageResourceInfo_ProductBatchInfo * _batchInfo; // +0x80
    NSArray * _batchRewardItems; // +0x88
    unsigned long long _batchTotalAmountInWecoin; // +0x90
    id /* block */ _batchSuccessBlock; // +0x98
    id /* block */ _batchFailBlock; // +0xa0
}
- (id)initWithFinderTaskId:(id)arg1 rewardParams:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 rewardType:(int)arg3 rewardRecipientUserName:(id)arg4 rewardComboId:(id)arg5 rewardProductId:(id)arg6 styleId:(id)arg7 rewardProductCount:(unsigned int)arg8 rewardAmountInWecoin:(unsigned int)arg9 requestId:(id)arg10 comboFinished:(BOOL)arg11 sessionBuffer:(id)arg12 rewardExtInfo:(id)arg13 rewardPrepareBuff:(id)arg14 batchInfo:(id)arg15 source:(unsigned int)arg16 successBlock:(id /* block */)arg17 failBlock:(id /* block */)arg18;
- (id)initBatchWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 rewardRecipientUserName:(id)arg3 batchRewardItems:(id)arg4 totalAmountInWecoin:(unsigned long long)arg5 requestId:(id)arg6 sessionBuffer:(id)arg7 batchSuccessBlock:(id /* block */)arg8 batchFailBlock:(id /* block */)arg9;
- (void)createRequestWithLiveTask:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)rewardRecipientUserName;
- (void)setRewardRecipientUserName:(id)arg1;
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
- (id)rewardRequestId;
- (void)setRewardRequestId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (BOOL)comboFinished;
- (void)setComboFinished:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (int)rewardType;
- (void)setRewardType:(int)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (id)prepareBuf;
- (void)setPrepareBuf:(id)arg1;
- (id)batchInfo;
- (void)setBatchInfo:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (id)batchRewardItems;
- (void)setBatchRewardItems:(id)arg1;
- (unsigned long long)batchTotalAmountInWecoin;
- (void)setBatchTotalAmountInWecoin:(unsigned long long)arg1;
- (id /* block */)batchSuccessBlock;
- (void)setBatchSuccessBlock:(id /* block */)arg1;
- (id /* block */)batchFailBlock;
- (void)setBatchFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
