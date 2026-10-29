@interface WebviewJSEventHandler_writeLog : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)isLevelParamValid:(id)arg1;
- (void)logWithLevel:(id)arg1 msg:(id)arg2;
@end
