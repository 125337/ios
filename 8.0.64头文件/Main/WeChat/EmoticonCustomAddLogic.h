@interface EmoticonCustomAddLogic : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonCustomAddLogicCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonCustomAddLogicDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonCustomAddLogicDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)addEmoticonAsync:(id /* block */)arg1;
- (void)addEmoticonAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)exchangeForSendAsync:(id /* block */)arg1;
- (void)exchangeForSendAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
