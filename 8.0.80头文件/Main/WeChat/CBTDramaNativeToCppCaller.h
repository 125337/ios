@interface CBTDramaNativeToCppCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTDramaNativeToCppCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTDramaNativeToCppCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTDramaNativeToCppCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)getDataPath:(id)arg1 isThumb:(BOOL)arg2 format:(id)arg3;
- (void)downloadDramaMediaAsync:(id)arg1 savePath:(id)arg2 priority:(int)arg3 completion:(id /* block */)arg4;
- (void)downloadDramaMediaAsync:(id)arg1 savePath:(id)arg2 priority:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (id)getDramaFirstPageCache;
- (void)loadMoreDramaItemAsync:(id)arg1 isPrePull:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)loadMoreDramaItemAsync:(id)arg1 isPrePull:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)reloadCurrentDramaAsync:(id /* block */)arg1;
- (void)reloadCurrentDramaAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)reportPageExit;
- (void)updateDramaIndex:(id)arg1;
- (id)getDramaIndex;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
