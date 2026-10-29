@interface MMFinderLiveRewardLevelConfigs : NSObject
{
    NSArray * _currentGiftPackageMetaGiftLists; // +0x8
    NSArray * _totalLevelConfigList; // +0x10
    NSArray * _currentLevelConfigList; // +0x18
    unsigned long long _limitConsumeWecoin; // +0x20
    unsigned long long _limitChooseProduct; // +0x28
}
+ (id)GetBackgroundColorWithRank:(unsigned int)arg1;
+ (id)GetSignIconWithRank:(unsigned int)arg1 iconSize:(double)arg2;
+ (unsigned int)GetSelfMinPurchaseTargetLevel;
- (id)initWithProductMetaList:(id)arg1 levelConfigList:(id)arg2 limitConsumeWecoin:(unsigned long long)arg3 limitChooseProduct:(unsigned long long)arg4;
- (unsigned int)getTotalWecoinWithTargetRank:(unsigned int)arg1;
- (long long)selectedLevelIndexWithTargetRank:(unsigned int)arg1;
- (id)currentGiftPackageMetaGiftLists;
- (void)setCurrentGiftPackageMetaGiftLists:(id)arg1;
- (id)totalLevelConfigList;
- (void)setTotalLevelConfigList:(id)arg1;
- (id)currentLevelConfigList;
- (void)setCurrentLevelConfigList:(id)arg1;
- (unsigned long long)limitConsumeWecoin;
- (void)setLimitConsumeWecoin:(unsigned long long)arg1;
- (unsigned long long)limitChooseProduct;
- (void)setLimitChooseProduct:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

