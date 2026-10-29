@interface FlutterContainerBus : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<flutter_container::FlutterContainerBusCppCover> cpp_cover; // +0x80
    weak_ptr<flutter_container::FlutterContainerBusDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<flutter_container::FlutterContainerBusDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)callApiAsync:(id)arg1 data:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)callApiAsync:(id)arg1 data:(id)arg2 context:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)subscribePushEventEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribePushEventEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribePushEventEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
