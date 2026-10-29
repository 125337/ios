@interface BizDynamicCardMrg : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::BizDynamicCardMrgCppCover> cpp_cover; // +0x80
    weak_ptr<biz::BizDynamicCardMrgDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::BizDynamicCardMrgDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)mockInsertCanvas:(int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (id)getAllDynamicCardInfo:(int)arg1;
- (BOOL)setAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setFeedsAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setAdCardRequestInfo:(unsigned long long)arg1 adInfo:(id)arg2;
- (BOOL)deleteDynamicCard:(unsigned long long)arg1 dynamicCardType:(int)arg2;
- (void)setFeedsAdRequestInfoNewAsync:(id)arg1 adFetchInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeedsAdRequestInfoNewAsync:(id)arg1 adFetchInfo:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)setAdRequestInfoNewAsync:(id)arg1 adFetchInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)setAdRequestInfoNewAsync:(id)arg1 adFetchInfo:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)setOftenReadRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (void)setOftenReadRequestInfoNewAsync:(id)arg1 adFetchInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)setOftenReadRequestInfoNewAsync:(id)arg1 adFetchInfo:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)deleteOftenReadAdCard:(id)arg1;
- (void)deleteOftenReadAdCardNewAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteOftenReadAdCardNewAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
