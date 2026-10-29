@interface WAJSEventHandler_operateSocketTask : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)closeSocketWithTaskID:(id)arg1 code:(long long)arg2 reason:(id)arg3;
- (void)sendWithTaskID:(id)arg1 dataObject:(id)arg2;
- (void)sendWithTaskID:(id)arg1 string:(id)arg2;
- (void)sendWithTaskID:(id)arg1 data:(id)arg2;
@end

