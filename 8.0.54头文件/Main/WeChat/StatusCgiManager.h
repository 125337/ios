@interface StatusCgiManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
    ConcurrentDictionary * getSelfHistoryDataBlockDict; // +0x18
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getSelfHistoryDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getSelfHistoryDataAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

