@interface FavoritesOnTopLogic : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol>
{
    BOOL _isSelfRequest; // +0x8
    BOOL _hasCheckedFavSync; // +0x9
    FavoritesItem * _currentOnTopNoteItem; // +0x10
    WNOpenParameter * _openParameter; // +0x18
    MMUIViewController * _currentVc; // +0x20
    FavoritesItem * _saveOnTopNoteItem; // +0x28
    WNOpenParameter * _saveOpenParameter; // +0x30
    MMUIViewController * _saveStorage; // +0x38
}
- (id)init;
- (void)onServiceClearData;
- (id)curOnTopNoteCheckId;
- (void)updateCurrentOnTopNoteItem:(id)arg1;
- (void)onGetPinTopResponseSuccess:(BOOL)arg1 onTop:(BOOL)arg2 favId:(unsigned int)arg3;
- (void)restoreLastOnTopNote;
- (void)saveLastOnTopNote;
- (void)setSelfRequest:(BOOL)arg1;
- (void)showPinOnTopSucessOrFailureMessageBox:(BOOL)arg1 success:(BOOL)arg2;
- (id)getOnTopItemFromLocalStorage;
- (void)showConversionOnTop:(BOOL)arg1 msgWrap:(id)arg2 wcDataItem:(id)arg3 favDataWrap:(id)arg4 favLocalId:(unsigned int)arg5 favId:(unsigned int)arg6 editable:(BOOL)arg7 viewController:(id)arg8;
- (id)getKeepHoldFavDetailVCForNewMainFrameBanner;
- (id)getBannerTitle;
- (void)reloadConversionBanner;
- (void)reLoadNoteItem;
- (void)reload;
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
- (BOOL)isSelfRequest;
- (void)setIsSelfRequest:(BOOL)arg1;
- (id)saveOnTopNoteItem;
- (void)setSaveOnTopNoteItem:(id)arg1;
- (id)saveOpenParameter;
- (void)setSaveOpenParameter:(id)arg1;
- (id)saveStorage;
- (void)setSaveStorage:(id)arg1;
- (BOOL)hasCheckedFavSync;
- (void)setHasCheckedFavSync:(BOOL)arg1;
- (void).cxx_destruct;
@end
