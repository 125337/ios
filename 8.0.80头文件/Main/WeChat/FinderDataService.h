@interface FinderDataService : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
    ConcurrentDictionary * reportMsgReadCGIBlockDict; // +0x18
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)testHello;
- (void)configService:(id)arg1 dbPath:(id)arg2 prefetchDbDir:(id)arg3;
- (void)reportMsgReadCGIAsync:(id)arg1 sessionId:(id)arg2 reportScene:(int)arg3 completion:(id /* block */)arg4;
- (void)reportMsgReadCGIAsync:(id)arg1 sessionId:(id)arg2 reportScene:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
