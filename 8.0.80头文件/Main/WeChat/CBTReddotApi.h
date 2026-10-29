@interface CBTReddotApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTReddotApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTReddotApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTReddotApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)startupIfNeeded;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (void)receiveUpdateNotifyAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)receiveUpdateNotifyAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)appendItemAsync:(unsigned long long)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)appendItemAsync:(unsigned long long)arg1 data:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)consumeItemAsync:(long long)arg1 completion:(id /* block */)arg2;
- (void)consumeItemAsync:(long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)eraseAndSyncAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)eraseAndSyncAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)applyRemoteEraseNotifyAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)applyRemoteEraseNotifyAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getEraseInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getEraseInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getItemsAsync:(id)arg1 unreadOnly:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)getItemsAsync:(id)arg1 unreadOnly:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getLastItemAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getLastItemAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
