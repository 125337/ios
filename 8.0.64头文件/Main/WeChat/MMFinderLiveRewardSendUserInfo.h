@interface MMFinderLiveRewardSendUserInfo : NSObject
{
    BOOL _wecoinBalanceUpdated; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    FinderLiveRewardGiftExtInfo * _rewardExtInfo; // +0x18
    long long _currentBalance; // +0x20
    unsigned long long _sourceSendMoreBubbleHost; // +0x28
}
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (long long)currentBalance;
- (void)setCurrentBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (unsigned long long)sourceSendMoreBubbleHost;
- (void)setSourceSendMoreBubbleHost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
