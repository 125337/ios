@interface RoamTaskManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::RoamTaskManagerCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::RoamTaskManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::RoamTaskManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)startBackupAsync:(unsigned long long)arg1 isAutoBackup:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startBackupAsync:(unsigned long long)arg1 isAutoBackup:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)startRestoreAsync:(unsigned long long)arg1 conversationIdList:(id)arg2 completion:(id /* block */)arg3;
- (void)startRestoreAsync:(unsigned long long)arg1 conversationIdList:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)stopAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)stopAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getTaskInfo:(unsigned long long)arg1;
- (void)subscribeProgressAndTransferStatsChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeProgressAndTransferStatsChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeProgressAndTransferStatsChangedEvent:(id)arg1;
- (void)subscribeStateChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStateChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeStateChangedEvent:(id)arg1;
- (void)subscribeConversationCompletedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeConversationCompletedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeConversationCompletedEvent:(id)arg1;
- (void)subscribeDowngradeScheduledEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDowngradeScheduledEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDowngradeScheduledEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
