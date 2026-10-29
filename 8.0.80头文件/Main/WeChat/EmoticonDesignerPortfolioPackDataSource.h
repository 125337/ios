@interface EmoticonDesignerPortfolioPackDataSource : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchPackList:(int)arg1 cleanReq:(BOOL)arg2 needStaticsInfo:(BOOL)arg3 needExposeEmoji:(BOOL)arg4;
- (id)getStorePackList:(int)arg1;
- (BOOL)isPackListHasMore:(int)arg1;
- (void)onDisplayEnded:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
