@interface BrandEcsReportMgr : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)reportItem:(id)arg1;
- (void)kvMonitor:(int)arg1 value:(int)arg2;
- (void)kvMonitorExtra:(int)arg1 value:(int)arg2 extra:(id)arg3;
- (void)genSessionId;
- (id)getSessionId;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

