@interface RoamTask : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::RoamTaskCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::RoamTaskDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::RoamTaskDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (int)initialize:(id)arg1;
- (void)prepareAsync:(id /* block */)arg1;
- (void)prepareAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)startAsync:(id /* block */)arg1;
- (void)startAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)pauseAsync:(id /* block */)arg1;
- (void)pauseAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeAsync:(id /* block */)arg1;
- (void)resumeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)stopAsync:(id /* block */)arg1;
- (void)stopAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getInfo;
- (float)getProgress;
- (void)subscribeProgressEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeProgressEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeProgressEvent:(id)arg1;
- (void)subscribeStateChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStateChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeStateChangedEvent:(id)arg1;
- (void)subscribeStateChangedByPackageIdEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStateChangedByPackageIdEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeStateChangedByPackageIdEvent:(id)arg1;
- (void)subscribeConversationCompletedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeConversationCompletedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeConversationCompletedEvent:(id)arg1;
- (void)subscribeConversationCompletedByPackageIdEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeConversationCompletedByPackageIdEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeConversationCompletedByPackageIdEvent:(id)arg1;
- (void)subscribeTaskCompletedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeTaskCompletedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeTaskCompletedEvent:(id)arg1;
- (void)subscribeDowngradeScheduledEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDowngradeScheduledEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDowngradeScheduledEvent:(id)arg1;
- (void)subscribeDowngradeScheduledByPackageIdEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDowngradeScheduledByPackageIdEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDowngradeScheduledByPackageIdEvent:(id)arg1;
- (id)getTransferStats;
- (void)subscribeTransferStatsChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeTransferStatsChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeTransferStatsChangedEvent:(id)arg1;
- (void)subscribeProgressAndTransferStatsChangedByPackageIdEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeProgressAndTransferStatsChangedByPackageIdEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeProgressAndTransferStatsChangedByPackageIdEvent:(id)arg1;
- (id)getErrorLog;
- (int)clearErrorLog;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
