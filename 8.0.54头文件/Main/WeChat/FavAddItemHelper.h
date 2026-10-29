@interface FavAddItemHelper : MMObject <IFavoritesExt, MMTipsViewControllerDelegate>
+ (id)getFavAddHelper;
+ (void)freeFavAddHelper;
- (void)addFavItem:(id)arg1;
- (void)addFavItem:(id)arg1 withSuccessTips:(id)arg2;
- (void)addFavItem:(id)arg1 withTipWording:(id)arg2;
- (BOOL)addFavItemButShowCapacityTip:(id)arg1;
- (BOOL)addFavItemButShowExpireOrBigFileTip:(id)arg1;
- (BOOL)addFavItemButShowWarningTip:(id)arg1 withTip:(id)arg2;
- (void)realAddFavItem:(id)arg1;
- (void)realAddFavItem:(id)arg1 successTips:(id)arg2;
- (void)webReport:(id)arg1;
- (void)checkShowFavIntro:(id)arg1 customTips:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
@end

