@interface MMFinderLiveGiftStarUIUtil : NSObject
+ (id)colorWithHex:(unsigned int)arg1 alpha:(double)arg2;
+ (id)whiteAlpha:(double)arg1;
+ (id)countString:(unsigned long long)arg1;
+ (id)progressTextWithCurrent:(unsigned long long)arg1 target:(unsigned long long)arg2 currentFont:(id)arg3 targetFont:(id)arg4 theme:(id)arg5;
+ (id)makeLevelBadgeViewWithSize:(double)arg1;
+ (void)ensureLevelLabelInView:(id)arg1 size:(double)arg2;
+ (void)ensureLocalBadgeBackgroundInView:(id)arg1 size:(double)arg2;
+ (void)updateLevelBadgeView:(id)arg1 level:(unsigned long long)arg2 isMaxLevel:(BOOL)arg3;
+ (void)updateLevelBadgeView:(id)arg1 customIconUrl:(id)arg2;
+ (id)hexagonPathInRect:(CGRect)arg1 cornerRadius:(double)arg2;
+ (id)beanImageWithSize:(double)arg1 color:(id)arg2;
+ (unsigned long long)remainCountOfUnlockInfo:(id)arg1;
+ (long long)priceOfGiftId:(id)arg1;
+ (long long)priceOfGiftInfo:(id)arg1 giftId:(id)arg2;
+ (long long)priceOfUnlockInfo:(id)arg1;
+ (void)syncGiftInfoToMgrIfNeeded:(id)arg1;
+ (long long)levelTotalValueOfUnlockInfos:(id)arg1;
+ (unsigned int)currentRewardLevel;
+ (BOOL)canLightAllWithUnlockInfos:(id)arg1;
@end
