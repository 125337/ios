@interface SnsCoverLogicDBManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<sns::SnsCoverLogicDBManagerCppCover> cpp_cover; // +0x80
    weak_ptr<sns::SnsCoverLogicDBManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<sns::SnsCoverLogicDBManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)setUp;
- (void)requestSnsCoverInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSnsCoverInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)tmpUpdateCoverAfterPostAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)tmpUpdateCoverAfterPostAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)updateCoverInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCoverInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSnsInfoFromSnsCoverInfoAsync:(id)arg1 snsId:(long long)arg2 completion:(id /* block */)arg3;
- (void)requestSnsInfoFromSnsCoverInfoAsync:(id)arg1 snsId:(long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)subscribeSnsCoverInfoChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeSnsCoverInfoChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeSnsCoverInfoChangeEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
