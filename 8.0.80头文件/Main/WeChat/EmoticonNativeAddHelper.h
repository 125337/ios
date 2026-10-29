@interface EmoticonNativeAddHelper : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonNativeAddHelperCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonNativeAddHelperDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonNativeAddHelperDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)addCustomEmoticonAsync:(id)arg1 addWrap:(id)arg2 isSilently:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)addCustomEmoticonAsync:(id)arg1 addWrap:(id)arg2 isSilently:(BOOL)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
