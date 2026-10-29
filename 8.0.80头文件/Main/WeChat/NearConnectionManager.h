@interface NearConnectionManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<local_connection::NearConnectionManagerCppCover> cpp_cover; // +0x80
    weak_ptr<local_connection::NearConnectionManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<local_connection::NearConnectionManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)initialize:(id)arg1 userInfo:(id)arg2 deviceInfo:(id)arg3;
- (void)unInitialize:(id)arg1;
- (void)sendAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)sendAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)send:(id)arg1;
- (id)receive;
- (void)receiveAsync:(id /* block */)arg1;
- (void)receiveAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)close;
- (int)getErrno;
- (id)getErrnoString;
- (void)subscribeConnectedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeConnectedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeConnectedEvent:(id)arg1;
- (void)subscribeDisconnectedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDisconnectedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDisconnectedEvent:(id)arg1;
- (void)subscribeConnectFailedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeConnectFailedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeConnectFailedEvent:(id)arg1;
- (void)setBizSessionInfo:(id)arg1;
- (void)updateQrId:(id)arg1;
- (unsigned long long)getTransferAvgSpeed;
- (unsigned long long)getMaxTransferSpeed;
- (void)kvStat:(id)arg1;
- (id)commonFunc:(id)arg1 paramsPb:(id)arg2;
- (void)commonAsyncFuncAsync:(id)arg1 paramsPb:(id)arg2 completion:(id /* block */)arg3;
- (void)commonAsyncFuncAsync:(id)arg1 paramsPb:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
