@interface ExtDeviceReport : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ext_device::ExtDeviceReportCppCover> cpp_cover; // +0x80
    weak_ptr<ext_device::ExtDeviceReportDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ext_device::ExtDeviceReportDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)reportHandoffOpenAsync:(int)arg1 bizType:(id)arg2 handoffId:(id)arg3 actionMs:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)reportHandoffOpenAsync:(int)arg1 bizType:(id)arg2 handoffId:(id)arg3 actionMs:(unsigned long long)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)reportHandoffCancelAsync:(int)arg1 bizType:(id)arg2 handoffId:(id)arg3 actionMs:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)reportHandoffCancelAsync:(int)arg1 bizType:(id)arg2 handoffId:(id)arg3 actionMs:(unsigned long long)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
