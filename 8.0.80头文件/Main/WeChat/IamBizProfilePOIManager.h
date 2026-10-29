@interface IamBizProfilePOIManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizProfilePOIManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizProfilePOIManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizProfilePOIManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getCachePoiMsgListAsync:(id)arg1 offset:(const void *)arg2 completion:(id /* block */)arg3;
- (void)getCachePoiMsgListAsync:(id)arg1 offset:(const void *)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchPoiMsgListAsync:(id)arg1 offset:(const void *)arg2 completion:(id /* block */)arg3;
- (void)fetchPoiMsgListAsync:(id)arg1 offset:(const void *)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getCachePoiMsgInfoAsync:(id)arg1 poiMsgs:(id)arg2 completion:(id /* block */)arg3;
- (void)getCachePoiMsgInfoAsync:(id)arg1 poiMsgs:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchPoiMsgInfoAsync:(id)arg1 poiMsgs:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchPoiMsgInfoAsync:(id)arg1 poiMsgs:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
