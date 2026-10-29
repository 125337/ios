@interface AffNewLifeJumpInfoManager : NSObject
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
- (BOOL)config:(id)arg1 uin:(id)arg2 clientVersion:(int)arg3 isStandalone:(BOOL)arg4 isDebug:(BOOL)arg5 resetData:(BOOL)arg6 adOpen:(BOOL)arg7;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

