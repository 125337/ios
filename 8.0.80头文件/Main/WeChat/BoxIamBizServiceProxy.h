@interface BoxIamBizServiceProxy : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizServiceProxyCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizServiceProxyDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizServiceProxyDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)setServiceProxyType:(int)arg1;
- (id)personalCenterManager;
- (id)redDotManager;
- (id)profileDataManager;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
