@interface MBEventHandler_createLoadSubPackageTaskForWaiter : MBEventHandler_createLoadSubPackageTask
{
    WAJSContextPlugin_SyncWaiter * _syncWaiter; // +0x8
}
+ (id)getAwaitTag:(id)arg1;
- (id)apiName;
- (void)invoke:(id)arg1;
- (id)syncWaiter;
- (void)setSyncWaiter:(id)arg1;
- (void).cxx_destruct;
@end
