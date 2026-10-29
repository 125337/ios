@interface SnsCppZidlUtils : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<sns::SnsCppZidlUtilsCppCover> cpp_cover; // +0x80
    weak_ptr<sns::SnsCppZidlUtilsDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<sns::SnsCppZidlUtilsDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)transferXml2SnsInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)transferXml2SnsInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getSnsEmojiInfoWithCommentAsync:(long long)arg1 commentInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)getSnsEmojiInfoWithCommentAsync:(long long)arg1 commentInfo:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
