@interface WAJSEventHandler_callLiteAppConnectEvent : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)subscribeLiteAppStore:(id)arg1;
- (void)unsubscribeLiteAppStore:(id)arg1;
- (void)ensureLiteAppStoreAlive:(id)arg1;
- (void)checkLiteAppStoreAlive:(id)arg1;
- (void)releaseLiteAppStore:(id)arg1;
@end
