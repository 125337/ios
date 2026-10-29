@interface IlinkStreamContext : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ilink_stream::IlinkStreamContextCppCover> cpp_cover; // +0x80
    weak_ptr<ilink_stream::IlinkStreamContextDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ilink_stream::IlinkStreamContextDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)newIlinkStreamChannel:(id)arg1;
- (void)configContext:(id)arg1;
- (void)configGlobalSession:(id)arg1;
- (void)networkChanged:(int)arg1;
- (void)foregroundChanged:(BOOL)arg1;
- (unsigned long long)waitUntilGlobalSessionReadyAsync:(id /* block */)arg1;
- (unsigned long long)waitUntilGlobalSessionReadyAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelWaitUntilGlobalSessionReady:(unsigned long long)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
