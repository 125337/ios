@interface EmoticonSender : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonSenderCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonSenderDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonSenderDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getEmoticonMsgWrapAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEmoticonMsgWrapAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadEmoticonAsync:(id)arg1 xml:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadEmoticonAsync:(id)arg1 xml:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)uploadNonStoreEmoticonAsync:(id)arg1 path:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadNonStoreEmoticonAsync:(id)arg1 path:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)checkEmoticonFileAndGetEmoticonWrapAsync:(id)arg1 emoticonPath:(id)arg2 completion:(id /* block */)arg3;
- (void)checkEmoticonFileAndGetEmoticonWrapAsync:(id)arg1 emoticonPath:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
