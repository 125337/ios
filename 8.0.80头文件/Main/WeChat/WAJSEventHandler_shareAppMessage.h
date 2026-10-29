@interface WAJSEventHandler_shareAppMessage : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (void)onConfirmCancel;
@end
