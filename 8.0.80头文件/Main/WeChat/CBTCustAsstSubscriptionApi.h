@interface CBTCustAsstSubscriptionApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTCustAsstSubscriptionApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTCustAsstSubscriptionApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTCustAsstSubscriptionApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (int)isSubscribedWithScope:(id)arg1;
- (id)getSubscribedWindowList;
- (id)filterSubscribedUsernames:(id)arg1;
- (void)syncSubscriptionListAsync:(id /* block */)arg1;
- (void)syncSubscriptionListAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reportReadAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reportReadAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)recordSessionEnterTimeAsync:(id)arg1 enterTime:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)recordSessionEnterTimeAsync:(id)arg1 enterTime:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
