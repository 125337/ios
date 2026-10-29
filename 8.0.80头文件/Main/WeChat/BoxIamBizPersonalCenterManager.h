@interface BoxIamBizPersonalCenterManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizPersonalCenterManagerCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizPersonalCenterManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizPersonalCenterManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)setServiceProxyType:(int)arg1;
- (void)fetchAcctMessagesAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)fetchAcctMessagesAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getPersonalCenterBizAsync:(id /* block */)arg1;
- (void)getPersonalCenterBizAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getPersonalCenterBizSync;
- (void)getPersonalCenterCacheAsync:(id /* block */)arg1;
- (void)getPersonalCenterCacheAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getShowFailedRedDotAsync:(id /* block */)arg1;
- (void)getShowFailedRedDotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)clearPersonalCenterBizCache;
- (void)setMiniAppVersionType:(int)arg1;
- (void)updateEnterProfileTimestamp;
- (void)getMiniAppVersionTypeAsync:(id /* block */)arg1;
- (void)getMiniAppVersionTypeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onReceiveCreationCenterPush:(id)arg1;
- (void)updateBizIdentityAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateBizIdentityAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getUnregisteredRedDotAsync:(id /* block */)arg1;
- (void)getUnregisteredRedDotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)clearUnregisteredRedDot;
- (void)notifyOnLoginSuccess:(id)arg1;
- (void)subscribeLoginSuccessEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeLoginSuccessEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeLoginSuccessEvent:(id)arg1;
- (void)notifyOnUnregisteredRedDotChanged;
- (void)subscribeUnregisteredRedDotChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeUnregisteredRedDotChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeUnregisteredRedDotChangedEvent:(id)arg1;
- (void)notifyOnBizCleared:(id)arg1;
- (void)subscribeBizClearedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeBizClearedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeBizClearedEvent:(id)arg1;
- (void)notifyOnFailedRedDotChanged:(BOOL)arg1;
- (void)subscribeFailedRedDotChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeFailedRedDotChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeFailedRedDotChangedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
