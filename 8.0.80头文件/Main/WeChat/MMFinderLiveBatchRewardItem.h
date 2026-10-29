@interface MMFinderLiveBatchRewardItem : NSObject
{
    FinderLiveBatchRewardItem * _batchItem; // +0x8
    FinderLiveGiftStarGiftUnlockInfo * _unlockInfo; // +0x10
    MMFinderLiveRewardGiftItem * _giftItem; // +0x18
}
+ (id)resolveGiftItemWithUnlockInfo:(id)arg1 batchItem:(id)arg2;
+ (id)matchedIn:(id)arg1 comboId:(id)arg2;
- (id)initWithBatchItem:(id)arg1 unlockInfo:(id)arg2;
- (id)rewardProductId;
- (unsigned int)rewardProductCount;
- (id)comboId;
- (id)batchItem;
- (id)unlockInfo;
- (id)giftItem;
- (void).cxx_destruct;
@end
