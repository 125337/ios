@interface EmoticonLiteAppSingleDownloadLogicAff : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonLiteAppSingleDownloadLogicAffCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonLiteAppSingleDownloadLogicAffDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonLiteAppSingleDownloadLogicAffDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)downloadEmoticonAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadEmoticonAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
