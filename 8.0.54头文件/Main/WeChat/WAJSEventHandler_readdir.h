@interface WAJSEventHandler_readdir : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEven:(id)arg1;
- (void)readHomeDir:(id)arg1;
- (void)readFilesOfDirectoryAtPath:(id)arg1 localIDPrefix:(id)arg2 array:(id)arg3;
@end

