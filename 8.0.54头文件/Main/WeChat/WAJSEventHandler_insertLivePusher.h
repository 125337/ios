@interface WAJSEventHandler_insertLivePusher : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)checkMicroPhoneAuth:(id)arg1;
- (void)innerHandlerJSEvent:(id)arg1;
- (BOOL)checkCanSetAudioAcitve;
@end

