@interface BoxIamBizProfileDataManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizProfileDataManagerCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizProfileDataManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizProfileDataManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getCacheProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)getCacheProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 offset:(const void *)arg4 completion:(id /* block */)arg5;
- (void)fetchProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 offset:(const void *)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)updateListenLaterAsync:(id)arg1 isAdd:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateListenLaterAsync:(id)arg1 isAdd:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
