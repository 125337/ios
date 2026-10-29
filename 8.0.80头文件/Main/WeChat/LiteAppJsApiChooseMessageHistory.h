@interface LiteAppJsApiChooseMessageHistory : LiteAppJsApi
- (BOOL)invokeInMainThread;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)processSelectedMessages:(id)arg1 chatName:(id)arg2 appId:(id)arg3 appUuid:(unsigned int)arg4;
@end
