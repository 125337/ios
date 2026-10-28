@interface ExtDeviceNetManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ext_device::ExtDeviceNetManagerCppCover> cpp_cover; // +0x80
    weak_ptr<ext_device::ExtDeviceNetManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ext_device::ExtDeviceNetManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)lockDeviceCommandAsync:(int)arg1 lockDevice:(int)arg2 uuid:(id)arg3 completion:(id /* block */)arg4;
- (void)lockDeviceCommandAsync:(int)arg1 lockDevice:(int)arg2 uuid:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)subscribeDeviceLockStatusChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDeviceLockStatusChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDeviceLockStatusChangedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
