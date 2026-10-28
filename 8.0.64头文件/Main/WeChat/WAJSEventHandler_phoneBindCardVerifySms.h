@interface WAJSEventHandler_phoneBindCardVerifySms : WAJSEventHandler_BaseEvent <WXPLiteAppModuleEventCallback>
- (void)handleJSEvent:(id)arg1;
- (void)onEventResponse:(id)arg1 event:(id)arg2 data:(id)arg3 callbackId:(long long)arg4;
@end
