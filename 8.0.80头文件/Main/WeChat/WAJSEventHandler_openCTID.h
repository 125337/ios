@interface WAJSEventHandler_openCTID : WAJSEventHandler_BaseEvent <MMKernelExt>
+ (id)currentWaitingHandler;
+ (void)setCurrentWaitingHandler:(id)arg1;
+ (void)endWaiting:(id)arg1;
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (id)convertDic2AuthDic:(id)arg1;
- (void)onHandleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)cancel;
@end
