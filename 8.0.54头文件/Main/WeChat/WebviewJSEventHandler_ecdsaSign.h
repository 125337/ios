@interface WebviewJSEventHandler_ecdsaSign : WebviewJSEventHandlerBase
+ (id)signWithUrl:(id)arg1 shortPrefix:(id)arg2 signText:(id)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)completeWithMessage:(id)arg1 success:(BOOL)arg2 dict:(id)arg3 event:(id)arg4;
@end

