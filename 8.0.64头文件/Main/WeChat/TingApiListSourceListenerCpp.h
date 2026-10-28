@interface TingApiListSourceListenerCpp : UnitRCObjcBaseProxyClass <TingApiListSourceListener>
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onReloadItems:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onLoadError:(int)arg1 reload:(BOOL)arg2 errorCode:(int)arg3 errorMessage:(id)arg4;
- (void)onLoadingStatusChanged:(int)arg1 loading:(BOOL)arg2;
- (void)onPlayTaskServiceRefresh:(id)arg1;
@end
