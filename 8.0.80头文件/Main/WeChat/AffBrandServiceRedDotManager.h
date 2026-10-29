@interface AffBrandServiceRedDotManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<brand_service::AffBrandServiceRedDotManagerCppCover> cpp_cover; // +0x80
    weak_ptr<brand_service::AffBrandServiceRedDotManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<brand_service::AffBrandServiceRedDotManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)getCurrentBoxRedDotInfo;
- (id)getCurrentNotiMsgRedDotInfo;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
