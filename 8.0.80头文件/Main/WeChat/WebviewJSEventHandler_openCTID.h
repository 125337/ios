@interface WebviewJSEventHandler_openCTID : WebviewJSEventHandlerBase <MMKernelExt>
+ (id)syncQueue;
+ (id)currentWaitingHandler;
+ (void)setCurrentWaitingHandler:(id)arg1;
+ (void)endWaiting:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)convertDic2AuthDic:(id)arg1;
- (id)stringValueOfObject:(id)arg1;
- (void)onHandleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)cancel;
@end
