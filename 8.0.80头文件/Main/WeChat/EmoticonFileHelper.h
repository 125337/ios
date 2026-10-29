@interface EmoticonFileHelper : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonFileHelperCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonFileHelperDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonFileHelperDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getLocalEmoticonFileDataAsync:(id)arg1 firstFrameOnly:(const void *)arg2 shouldCheckWxamValid:(const void *)arg3 completion:(id /* block */)arg4;
- (void)getLocalEmoticonFileDataAsync:(id)arg1 firstFrameOnly:(const void *)arg2 shouldCheckWxamValid:(const void *)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)encodeImgToWxamAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)encodeImgToWxamAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
