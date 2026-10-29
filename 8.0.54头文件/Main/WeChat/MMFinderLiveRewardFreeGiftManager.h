@interface MMFinderLiveRewardFreeGiftManager : NSObject
{
    NSMutableSet * _usedFreeGiftIdSet; // +0x8
    NSMutableArray * _freeGiftArray; // +0x10
    MMFinderLiveRewardFreeGift * _latestLocalInsertFreeGift; // +0x18
    FinderLiveFreeGiftPackageInfo * _latestFreeGiftPackageInfo; // +0x20
}
- (id)init;
- (void)syncServerFreeGiftPackageInfo:(id)arg1;
- (void)insertFreeGiftIfNeeded:(id)arg1;
- (void)markFreeGiftDidSent:(id)arg1 count:(unsigned long long)arg2;
- (void)unmarkFreeGiftDidSent:(id)arg1 giftIds:(id)arg2;
- (id)getNextSendableFreeGift;
- (id)createRewardItemFromFreeGift:(id)arg1;
- (id)createBatchInfoFromFreeGift:(id)arg1;
- (id)handleFreeGiftWithCurrentPackageItems:(id)arg1;
- (BOOL)isFreeGiftAlreadyUsed:(id)arg1;
- (void)rebuildFreeGiftArray;
- (void)insertLocalReceivedFreeGiftArrayIfNeeded;
- (id)usedFreeGiftIdSet;
- (void)setUsedFreeGiftIdSet:(id)arg1;
- (id)freeGiftArray;
- (void)setFreeGiftArray:(id)arg1;
- (id)latestLocalInsertFreeGift;
- (void)setLatestLocalInsertFreeGift:(id)arg1;
- (id)latestFreeGiftPackageInfo;
- (void)setLatestFreeGiftPackageInfo:(id)arg1;
- (void).cxx_destruct;
@end

