@interface WAJSEventHandler_shareAppMessageDirectly : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>
{
    BOOL _isSharing; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)shareMsg:(id)arg1 toContacts:(id)arg2;
- (void)shareMsg:(id)arg1 toContacts:(id)arg2 forNativeWeApp:(BOOL)arg3;
- (void)onError:(id)arg1;
- (void)onSuccess:(id)arg1;
- (void)onConfirmCancel;
@end
