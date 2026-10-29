@interface AffNewLifeExtraInfoManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
    NSMapTable * fetchJumpInfoCompleteEventMap; // +0x18
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchExtraInfo:(id)arg1;
- (void)saveLocalExtraInfo:(id)arg1 feedId:(id)arg2 scene:(int)arg3;
- (void)subscribeFetchJumpInfoCompleteEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeFetchJumpInfoCompleteEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeFetchJumpInfoCompleteEvent:(id)arg1;
- (id)getLocalJumpInfo:(id)arg1 scene:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

