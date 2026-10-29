@interface AffNewLifeSyncManager : NSObject
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
- (void)dispatchHandleCmdItem:(id)arg1 syncScene:(int)arg2;
- (void)doSync:(int)arg1 cgiBizId:(int)arg2 reliableNotifyBuff:(id)arg3 syncScene:(int)arg4;
- (void)doSyncWithConfig:(int)arg1 cgiBizId:(int)arg2 syncScene:(int)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
