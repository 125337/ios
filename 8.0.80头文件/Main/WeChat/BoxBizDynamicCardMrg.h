@interface BoxBizDynamicCardMrg : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxBizDynamicCardMrgCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxBizDynamicCardMrgDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxBizDynamicCardMrgDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)mockInsertCanvas:(int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (id)getAllDynamicCardInfo:(int)arg1;
- (BOOL)setAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setFeedsAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setAdCardRequestInfo:(unsigned long long)arg1 adInfo:(id)arg2;
- (BOOL)deleteDynamicCard:(unsigned long long)arg1 dynamicCardType:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
