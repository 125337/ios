@interface EmoticonStoreEventCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonStoreEventCenterCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonStoreEventCenterDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonStoreEventCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onEmoticonStoreItemInstallFinishedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonStoreItemInstallFinishedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonStoreItemInstallFailedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonStoreItemInstallFailedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonStoreItemChangedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonStoreItemChangedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
