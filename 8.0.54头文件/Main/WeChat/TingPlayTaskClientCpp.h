@interface TingPlayTaskClientCpp : UnitRCObjcBaseProxyClass <TingPlayTaskClient>
- (void)onLoad:(id)arg1;
- (void)onLoadMore:(id)arg1;
- (void)onUpdate:(int)arg1 item:(id)arg2;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onReloadItems:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onListMd5Changed:(id)arg1 newMd5:(id)arg2;
- (void)onPreloadDone:(unsigned long long)arg1;
- (void)onLoadError:(int)arg1 reload:(BOOL)arg2 errorCode:(int)arg3 errorMessage:(id)arg4;
- (void)onLoadingStatusChanged:(int)arg1 loading:(BOOL)arg2;
- (void)onPlayTaskServiceRefresh:(id)arg1;
@end

