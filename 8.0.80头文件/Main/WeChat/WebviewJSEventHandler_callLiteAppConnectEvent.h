@interface WebviewJSEventHandler_callLiteAppConnectEvent : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)appIdFromOptions:(id)arg1;
- (void)subscribeLiteAppStore:(id)arg1;
- (void)unsubscribeLiteAppStore:(id)arg1;
- (void)ensureLiteAppStoreAlive:(id)arg1;
- (void)checkLiteAppStoreAlive:(id)arg1;
- (void)releaseLiteAppStore:(id)arg1;
- (void)setSearchQuitParams:(id)arg1;
@end
