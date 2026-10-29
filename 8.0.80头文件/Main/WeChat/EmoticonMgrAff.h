@interface EmoticonMgrAff : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonMgrAffCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonMgrAffDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonMgrAffDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)latestSentMd5InMd5list:(id)arg1;
- (optional<EmoticonWrap *>)getEmoticonWrapByMd5:(id)arg1;
- (void)updateEmoticonUseTimeAsync:(id)arg1 lastUseTime:(int)arg2 completion:(id /* block */)arg3;
- (void)updateEmoticonUseTimeAsync:(id)arg1 lastUseTime:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
