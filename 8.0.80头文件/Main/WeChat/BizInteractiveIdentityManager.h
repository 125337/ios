@interface BizInteractiveIdentityManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::BizInteractiveIdentityManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::BizInteractiveIdentityManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::BizInteractiveIdentityManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)isSceneEnabledAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)isSceneEnabledAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getWordingAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getWordingAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getCurrentIdentityAsync:(id /* block */)arg1;
- (void)getCurrentIdentityAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getHasBrandLoggedAsync:(id /* block */)arg1;
- (void)getHasBrandLoggedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getHasPhotoLoggedAsync:(id /* block */)arg1;
- (void)getHasPhotoLoggedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)switchToBrandAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)switchToBrandAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)switchToPhotoAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)switchToPhotoAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getRegisterInviteWordingAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getRegisterInviteWordingAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isRegisterInviteEnabledAsync:(id /* block */)arg1;
- (void)isRegisterInviteEnabledAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyOnInteractiveIdentityChanged:(int)arg1 biz:(id)arg2;
- (void)subscribeInteractiveIdentityChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeInteractiveIdentityChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeInteractiveIdentityChangedEvent:(id)arg1;
- (void)changeCommentIdentityAsync:(id)arg1 photoUsername:(id)arg2 completion:(id /* block */)arg3;
- (void)changeCommentIdentityAsync:(id)arg1 photoUsername:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
