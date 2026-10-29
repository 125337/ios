@interface WAAppTaskDBMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicAppID2TaskDB; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getTaskDBWithAppID:(id)arg1;
- (id)getAccessDBQueue;
- (id)getAndNewTaskDBIfNotExist:(id)arg1;
- (void)clearAllTaskDB;
- (void)clearTaskDBWithAppID:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void).cxx_destruct;
@end
