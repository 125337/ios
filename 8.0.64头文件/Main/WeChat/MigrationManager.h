@interface MigrationManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::MigrationManagerCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::MigrationManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::MigrationManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)initWithUsernameCachePath:(id)arg1 cachePath:(id)arg2;
- (void)unInit;
- (void)reInit:(id)arg1 cachePath:(id)arg2;
- (BOOL)isInit;
- (id)setCommonParams:(id)arg1 args:(id)arg2;
- (id)getCurrentModels;
- (void)startTaskAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)startTaskAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)setIsQuickTransfer:(BOOL)arg1;
- (void)pauseTaskAsync:(id /* block */)arg1;
- (void)pauseTaskAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)stopTaskAsync:(id /* block */)arg1;
- (void)stopTaskAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)stopByPcNotify;
- (void)markStatus:(id)arg1;
- (void)resetTaskInfoAsync:(id /* block */)arg1;
- (void)resetTaskInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)configTaskScene:(id)arg1;
- (void)configEmigration:(id)arg1;
- (long long)getEstimatedEmigSize;
- (void)saveAuthConfig:(id)arg1;
- (id)getAuthConfig;
- (void)startServerAsync:(id /* block */)arg1;
- (void)startServerAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getServerIpListAsync:(id /* block */)arg1;
- (void)getServerIpListAsync:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isServerStarted;
- (void)subscribeCloseTaskDetailPageEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeCloseTaskDetailPageEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeCloseTaskDetailPageEvent:(id)arg1;
- (void)subscribeNotifyTaskProgressEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyTaskProgressEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyTaskProgressEvent:(id)arg1;
- (void)subscribeNotifyTaskStatusEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyTaskStatusEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyTaskStatusEvent:(id)arg1;
- (void)subscribeNotifyTaskSceneEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyTaskSceneEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyTaskSceneEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
