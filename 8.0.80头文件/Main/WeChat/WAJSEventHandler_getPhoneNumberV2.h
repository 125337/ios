@interface WAJSEventHandler_getPhoneNumberV2 : WAJSEventHandler_BaseEvent
{
    WAPNAuthProvider * _authProvider; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)startNewGetPhoneNumberV2:(id)arg1;
- (id)authProvider;
- (void)setAuthProvider:(id)arg1;
- (void).cxx_destruct;
@end
