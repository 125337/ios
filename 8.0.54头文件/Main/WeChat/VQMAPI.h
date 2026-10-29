@interface VQMAPI : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    VQMAPICppCover cpp_cover; // +0x80
    weak_ptr<vqm::VQMAPIDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<vqm::VQMAPIDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)launch;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (void)begin;
- (void)end;
- (BOOL)isActived;
- (void)updateProfile:(int)arg1 bytesInfo:(id)arg2;
- (void)updateProfileSync:(int)arg1 bytesInfo:(id)arg2;
- (void)loadProfileAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)loadProfileAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)confirm;
- (unsigned long long)timestampMSCurrentSteady;
- (unsigned long long)timestampMSCurrentSystem;
- (void)updateEvent:(int)arg1 bytesInfo:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

