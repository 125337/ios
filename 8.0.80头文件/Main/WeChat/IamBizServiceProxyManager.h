@interface IamBizServiceProxyManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizServiceProxyManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizServiceProxyManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizServiceProxyManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)brandServiceProxy;
- (id)photoServiceProxy;
- (id)getServiceProxy:(int)arg1;
- (void)notifyTeenModeChanged;
- (void)dispatchCreationCenterPush:(id)arg1 source:(int)arg2;
- (void)reportCreationCenterPushDedupe:(id)arg1 source:(int)arg2;
- (BOOL)getCanCreateBizPhoto;
- (id)getCanCreateBizPhotoValue;
- (void)notifyBizPhotoEnableUpdated:(BOOL)arg1 canCreateEnableValue:(id)arg2;
- (void)subscribeBizPhotoEnableUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeBizPhotoEnableUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeBizPhotoEnableUpdatedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
