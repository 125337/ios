@interface WAJSEventHandler_write : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleEvent:(id)arg1 isSync:(BOOL)arg2;
- (id)decodeBinaryString:(id)arg1;
- (id)decodeHexString:(id)arg1;
@end
