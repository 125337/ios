@interface TingPlayListListenerCpp : UnitRCObjcBaseProxyClass <TingPlayListListener>
- (void)onPlaylistChanged;
- (void)onPlayListLoad:(id)arg1;
- (void)onPlayListLoadMore:(id)arg1;
- (void)onPlayListTapeItemUpdated:(id)arg1;
- (void)onPlayListReloadItems:(id)arg1;
- (void)onPlayListLoadMoreItems:(id)arg1 direction:(int)arg2;
- (void)onPlayListRecommendListSourceAvailable:(id)arg1 recommendListSource:(id)arg2;
- (void)onPlayListRecommendListSourceDisabled:(id)arg1;
- (void)onPlayListTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onRecommendListSourceChanged:(id)arg1;
- (void)onLoadingStatusChanged:(int)arg1 loading:(BOOL)arg2;
- (void)onPlayListRefresh:(id)arg1;
@end

