@interface NewLifeIndependentMgr : MMUserService <IFavoritesExt, WCFinderFinderInitExt, MMServiceProtocol>
{
    MMLRUCache * _localGlobalFavFlagCache; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateLocalGlobalFavFlag:(BOOL)arg1 forFavItem:(id)arg2;
- (id)localGlobalFavFlagForFeedId:(id)arg1;
- (void)onFinderInitSuccessful;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (id)localGlobalFavFlagCache;
- (void)setLocalGlobalFavFlagCache:(id)arg1;
- (void).cxx_destruct;
@end
