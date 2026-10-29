@interface StoreEmotionDesignerInfoMgrAff : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::StoreEmotionDesignerInfoMgrAffCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::StoreEmotionDesignerInfoMgrAffDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::StoreEmotionDesignerInfoMgrAffDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getDesignerInfoByIdAsync:(id)arg1 forced:(const void *)arg2 completion:(id /* block */)arg3;
- (void)getDesignerInfoByIdAsync:(id)arg1 forced:(const void *)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getDesignerInfoByIdFromNetAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getDesignerInfoByIdFromNetAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getDesignerInfoByUinAsync:(long long)arg1 forced:(const void *)arg2 completion:(id /* block */)arg3;
- (void)getDesignerInfoByUinAsync:(long long)arg1 forced:(const void *)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
