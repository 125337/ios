@interface BoxIamBizServiceProxyManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizServiceProxyManagerCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizServiceProxyManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizServiceProxyManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)brandServiceProxy;
- (id)photoServiceProxy;
- (id)getServiceProxy:(int)arg1;
- (void)notifyTeenModeChanged;
- (BOOL)getEnableBizPicNewName;
- (id)getEnableBizPicNewNameValue;
- (BOOL)getCanViewBizPhoto;
- (id)getCanViewBizPhotoValue;
- (BOOL)getCanCreateBizPhoto;
- (id)getCanCreateBizPhotoValue;
- (BOOL)getCanBizPhotoNewLogo;
- (id)getCanBizPhotoNewLogoValue;
- (void)notifyBizPhotoEnableUpdated:(BOOL)arg1 enableBizPicNewNameValue:(id)arg2 canViewEnable:(BOOL)arg3 canViewEnableValue:(id)arg4 canCreateEnable:(BOOL)arg5 canCreateEnableValue:(id)arg6;
- (void)subscribeBizPhotoEnableUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeBizPhotoEnableUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeBizPhotoEnableUpdatedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
