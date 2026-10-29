@interface EmoticonMsgHelper : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonMsgHelperCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonMsgHelperDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonMsgHelperDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)parseEmoticonXMLAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)parseEmoticonXMLAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)parseEmoticonAppMsgXMLAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)parseEmoticonAppMsgXMLAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadEmoticonAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadEmoticonAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isEmoticonCanAddAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isEmoticonCanAddAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isEmoticonGameAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isEmoticonGameAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getEmoticonDescAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonDescAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isEmoticonEasterEggAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isEmoticonEasterEggAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)isEmojiAnimAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isEmojiAnimAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)clearEmoticonEggConfigAsync:(id)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (void)clearEmoticonEggConfigAsync:(id)arg1 name:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
