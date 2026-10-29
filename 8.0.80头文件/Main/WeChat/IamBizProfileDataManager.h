@interface IamBizProfileDataManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizProfileDataManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizProfileDataManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizProfileDataManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getCacheProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)getCacheProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 offset:(const void *)arg4 completion:(id /* block */)arg5;
- (void)fetchProfileDataAsync:(id)arg1 tabType:(int)arg2 inBrandManagerMode:(BOOL)arg3 offset:(const void *)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)fetchProfileJustReadPageLimitAsync:(id)arg1 inBrandManagerMode:(BOOL)arg2 appMsgId:(int)arg3 itemIndex:(int)arg4 completion:(id /* block */)arg5;
- (void)fetchProfileJustReadPageLimitAsync:(id)arg1 inBrandManagerMode:(BOOL)arg2 appMsgId:(int)arg3 itemIndex:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)updateUrgePublishAsync:(id)arg1 cancel:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateUrgePublishAsync:(id)arg1 cancel:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchUrgePublishInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUrgePublishInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchUrgePublishListAsync:(id)arg1 limit:(int)arg2 buffer:(const void *)arg3 completion:(id /* block */)arg4;
- (void)fetchUrgePublishListAsync:(id)arg1 limit:(int)arg2 buffer:(const void *)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)updateListenLaterAsync:(id)arg1 isAdd:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateListenLaterAsync:(id)arg1 isAdd:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
