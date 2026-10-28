@interface EmoticonDesignerPortfolioPackDataReciever : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonDesignerPortfolioPackDataRecieverCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonDesignerPortfolioPackDataRecieverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonDesignerPortfolioPackDataRecieverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onFetchPackFinished:(id)arg1;
- (void)onFetchPackFailed:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
