@interface MMWebViewPlugin_BrandAudioEvent : MMWebViewPluginBase <BrandAudioServiceExt, TingApiListSourceListener>
{
    BOOL _webPlayerInForeground; // +0x8
    BOOL _isObserving; // +0x9
    id <TingApiListSource> _currentListSource; // +0x10
}
- (void)dealloc;
- (void)startObserveStateChange;
- (void)stopObserveStateChange;
- (void)onSetPlayerForegroundState:(BOOL)arg1;
- (void)onTingPlayTaskStateChanged:(id)arg1 state:(int)arg2 event:(int)arg3 eventContext:(id)arg4;
- (void)onCurrentPlayingListSourceWillChange:(id)arg1 nextSource:(id)arg2;
- (void)onPlayTaskInfoEvent:(id)arg1 event:(int)arg2 info:(id)arg3;
- (void)notifyOnPlayListRefresh;
- (void)onPlayTaskServiceTingItemUpdated:(id)arg1 newItem:(id)arg2;
- (void)onPlayTaskServiceTapeItemUpdated:(id)arg1;
- (void)onReloadItems:(id)arg1;
- (void)onLoadMoreWithDirection:(id)arg1 direction:(int)arg2;
- (void)onLoadError:(int)arg1 reload:(BOOL)arg2 errorCode:(int)arg3 errorMessage:(id)arg4;
- (void)onLoadingStatusChanged:(int)arg1 loading:(BOOL)arg2;
- (void)onPlayTaskServiceRefresh:(id)arg1;
- (BOOL)webPlayerInForeground;
- (void)setWebPlayerInForeground:(BOOL)arg1;
- (BOOL)isObserving;
- (void)setIsObserving:(BOOL)arg1;
- (id)currentListSource;
- (void)setCurrentListSource:(id)arg1;
- (void).cxx_destruct;
@end
