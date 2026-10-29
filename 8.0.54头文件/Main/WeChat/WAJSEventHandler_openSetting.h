@interface WAJSEventHandler_openSetting : WAJSEventHandler_BaseEvent <WAAppAuthorizationDelegate>
{
    BOOL _withSubscriptions; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onAppAuthorizationReturn:(id)arg1 subscriptionsSettingModel:(id)arg2;
- (BOOL)withSubscriptions;
- (void)setWithSubscriptions:(BOOL)arg1;
@end

