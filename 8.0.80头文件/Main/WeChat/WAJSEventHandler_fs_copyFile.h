@interface WAJSEventHandler_fs_copyFile : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEven:(id)arg1;
- (void)tryCopyFromLocalCache:(id)arg1 destFilePath:(id)arg2;
@end
