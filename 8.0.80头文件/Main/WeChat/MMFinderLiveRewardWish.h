@interface MMFinderLiveRewardWish : NSObject
{
    MMFinderLiveRewardGiftItem * _giftItem; // +0x8
    unsigned long long _targetCount; // +0x10
    unsigned long long _currentCount; // +0x18
}
+ (id)createInstanceFromLiveRewardWish:(id)arg1;
+ (id)createInstanceFromLiveRewardWishItem:(id)arg1;
- (id)toLiveRewardWish;
- (id)description;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (unsigned long long)targetCount;
- (void)setTargetCount:(unsigned long long)arg1;
- (unsigned long long)currentCount;
- (void)setCurrentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
