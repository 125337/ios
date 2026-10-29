@interface EmoticonRemoteRecommendMgrAff : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonRemoteRecommendMgrAffCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonRemoteRecommendMgrAffDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonRemoteRecommendMgrAffDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchWordListAsync:(id /* block */)arg1;
- (void)fetchWordListAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecommendBoardAsync:(id)arg1 sessionId:(id)arg2 localEmojiMd5List:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchRecommendBoardAsync:(id)arg1 sessionId:(id)arg2 localEmojiMd5List:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
