@interface _LocalJSEventHandler_imageSearch : LocalJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)sendDataReadyEvent:(id)arg1 requestId:(id)arg2;
- (void)sendMPDataReadyEvent:(id)arg1 requestId:(id)arg2;
- (void)sendNotDataReadyEvent:(id)arg1 isMPdata:(BOOL)arg2;
- (id)imageSearchPlugin;
@end

