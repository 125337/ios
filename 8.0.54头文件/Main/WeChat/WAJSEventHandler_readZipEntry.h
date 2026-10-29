@interface WAJSEventHandler_readZipEntry : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)onSuccess:(id)arg1;
- (void)onError:(id)arg1 errNo:(unsigned int)arg2;
- (id)getResultDicWithZipEntries:(id)arg1;
@end

