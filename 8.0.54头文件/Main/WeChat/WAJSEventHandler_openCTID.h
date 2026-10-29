@interface WAJSEventHandler_openCTID : WAJSEventHandler_BaseEvent <MMKernelExt>
- (void)handleJSEvent:(id)arg1;
- (id)convertDic2AuthDic:(id)arg1;
- (void)onHandleOpenURL:(id)arg1 bundleID:(id)arg2;
@end

