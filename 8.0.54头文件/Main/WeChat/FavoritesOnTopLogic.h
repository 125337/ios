@interface FavoritesOnTopLogic : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol>
{
    FavoritesItem * _currentOnTopNoteItem; // +0x8
    WNOpenParameter * _openParameter; // +0x10
    MMUIViewController * _currentVc; // +0x18
}
- (id)init;
- (void)onServiceClearData;
- (id)curOnTopNoteCheckId;
- (void)showConversionOnTop:(BOOL)arg1 msgWrap:(id)arg2 wcDataItem:(id)arg3 favDataWrap:(id)arg4 editable:(BOOL)arg5 viewController:(id)arg6;
- (id)currentOnTopFavItem;
- (id)getKeepHoldFavDetailVCForNewMainFrameBanner;
- (id)getBannerTitle;
- (void)reloadConversionBanner;
- (void)reLoadNoteItem;
- (void)checkNeedRepord:(id)arg1;
- (id)genTimeString:(unsigned int)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (id)currentOnTopNoteItem;
- (void)setCurrentOnTopNoteItem:(id)arg1;
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)currentVc;
- (void)setCurrentVc:(id)arg1;
- (void).cxx_destruct;
@end

