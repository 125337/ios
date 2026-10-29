@interface EmoticonFileBridge : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonFileBridgeCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonFileBridgeDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonFileBridgeDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getThumbImgAsync:(id)arg1 emojiInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)getThumbImgAsync:(id)arg1 emojiInfo:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getImgPathAsync:(id)arg1 emojiInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)getImgPathAsync:(id)arg1 emojiInfo:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
