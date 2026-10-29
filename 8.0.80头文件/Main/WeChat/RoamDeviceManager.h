@interface RoamDeviceManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::RoamDeviceManagerCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::RoamDeviceManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::RoamDeviceManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (int)initialize:(id)arg1;
- (int)initializeCustomDevice:(id)arg1;
- (void)connectAsync:(id /* block */)arg1;
- (void)connectAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)disconnectAsync:(id /* block */)arg1;
- (void)disconnectAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeConnectivityChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeConnectivityChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeConnectivityChangedEvent:(id)arg1;
- (void)getVersionConflictInfoAsync:(id /* block */)arg1;
- (void)getVersionConflictInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getDeviceInfoAsync:(id /* block */)arg1;
- (void)getDeviceInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
