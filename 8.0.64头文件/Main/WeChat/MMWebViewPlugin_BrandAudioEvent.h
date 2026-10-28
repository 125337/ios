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
- (void)onReloadItems:(id)arg1;
- (void)notifyOnPlayListRefresh;
- (BOOL)webPlayerInForeground;
- (void)setWebPlayerInForeground:(BOOL)arg1;
- (BOOL)isObserving;
- (void)setIsObserving:(BOOL)arg1;
- (id)currentListSource;
- (void)setCurrentListSource:(id)arg1;
- (void).cxx_destruct;
@end
