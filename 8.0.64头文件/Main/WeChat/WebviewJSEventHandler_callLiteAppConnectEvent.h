@interface WebviewJSEventHandler_callLiteAppConnectEvent : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)subscribeLiteAppStore:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)unsubscribeLiteAppStore:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)ensureLiteAppStoreAlive:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)checkLiteAppStoreAlive:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)releaseLiteAppStore:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
@end
