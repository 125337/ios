@interface WAJSEventHandler_shareImageTimeline : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onConfirmCancel;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
@end
