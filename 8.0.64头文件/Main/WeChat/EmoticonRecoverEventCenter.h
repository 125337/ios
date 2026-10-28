@interface EmoticonRecoverEventCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonRecoverEventCenterCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonRecoverEventCenterDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonRecoverEventCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onEmoticonRecoverLogicFinishedAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonRecoverLogicFinishedAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonRecoverLogicFailedAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonRecoverLogicFailedAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonRecoverLogicDownloadedSingleEmoticonAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonRecoverLogicDownloadedSingleEmoticonAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonRecoverLogicFinishedPartSyncAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonRecoverLogicFinishedPartSyncAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onEmoticonRecoverLogicNotifyDownloadProgressAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)onEmoticonRecoverLogicNotifyDownloadProgressAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
