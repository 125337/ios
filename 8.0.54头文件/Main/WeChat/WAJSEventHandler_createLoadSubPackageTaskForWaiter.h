@interface WAJSEventHandler_createLoadSubPackageTaskForWaiter : WAJSEventHandler_createLoadSubPackageTask
{
    WAJSContextPlugin_SyncWaiter * _syncWaiter; // +0x8
}
+ (id)getAwaitTag:(id)arg1;
- (void)doBeforeTask:(id)arg1;
- (void)onLoadReuslt:(id)arg1 result:(id)arg2;
- (id)syncWaiter;
- (void)setSyncWaiter:(id)arg1;
- (void).cxx_destruct;
@end

