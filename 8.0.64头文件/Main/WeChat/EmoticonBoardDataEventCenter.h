@interface EmoticonBoardDataEventCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonBoardDataEventCenterCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonBoardDataEventCenterDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonBoardDataEventCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onEmoticonThumbUpdatedAsync:(id)arg1 thumbPath:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonThumbUpdatedAsync:(id)arg1 thumbPath:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
