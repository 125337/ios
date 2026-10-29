@interface WAJSEventHandler_createLoadSubPackageTask : WAJSEventHandler_BaseEvent
- (void)doBeforeTask:(id)arg1;
- (void)onLoadReuslt:(id)arg1 result:(id)arg2;
- (unsigned long long)genTaskId;
- (void)handleJSEvent:(id)arg1;
- (void)createLoadSubPackageTasksForModules:(id)arg1;
- (void)resultHandler:(id)arg1;
- (BOOL)configDataNotLoaded;
@end
