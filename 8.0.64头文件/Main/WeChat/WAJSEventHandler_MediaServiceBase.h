@interface WAJSEventHandler_MediaServiceBase : WAJSEventHandler_BaseEvent
- (void)endWithError:(id)arg1 errMsg:(id)arg2;
- (void)endWithCallback:(id)arg1 errType:(int)arg2 errCode:(int)arg3 errDesc:(id)arg4 ret:(id)arg5;
- (BOOL)isGame;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (id)formatPath:(id)arg1;
@end
