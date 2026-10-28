@interface WAWebSocketTask : NSObject <SRWebSocketDelegate>
{
    NSString * _appID; // +0x8
    NSString * _taskID; // +0x10
    BOOL _isCompatibleSingleConnection; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
    SRWebSocket * _websocket; // +0x28
    BOOL _hasCalledCloseTask; // +0x30
    unsigned int _appType; // +0x34
    unsigned int _workerId; // +0x38
    id <WAWebSocketTaskDelegate> _delegate; // +0x40
    WAWebSocketTaskDelayReleaseWrap * _weakDelayReleaseWrap; // +0x48
    NSObject<OS_dispatch_source> * _delayReleaseTimer; // +0x50
    id /* block */ _openHandler; // +0x58
    id /* block */ _closeHandler; // +0x60
    id /* block */ _errorHandler; // +0x68
    id /* block */ _messageHandler; // +0x70
}
- (id)initWithAppID:(id)arg1 taskID:(id)arg2 compatibleSingleConnection:(BOOL)arg3 workerQueue:(id)arg4;
- (void)dealloc;
- (id)getTaskID;
- (BOOL)isCompatibleSingleConnection;
- (BOOL)isAvailable;
- (void)setHandler:(id /* block */)arg1 messageHandler:(id /* block */)arg2 closeHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)openWithUrl:(id)arg1 config:(id)arg2 httpHeaders:(id)arg3 subProtocols:(id)arg4 context:(id)arg5 openHandler:(id /* block */)arg6 closeHandler:(id /* block */)arg7 errorHandler:(id /* block */)arg8 messageHandler:(id /* block */)arg9;
- (void)anyThread_didSendoutRequest:(id)arg1;
- (void)close;
- (void)closeAndReleaseImmediately;
- (void)closeWithReason:(id)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (BOOL)sendString:(id)arg1 getError:(id *)arg2;
- (BOOL)sendData:(id)arg1 getError:(id *)arg2;
- (id)certificateArrayFromDataList:(id)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2 releaseImmediately:(BOOL)arg3;
- (void)closeTaskWithReleaseImmediately:(BOOL)arg1;
- (void)scheduleDelayReleaseTimer;
- (void)invalidateDelayReleaseTimer;
- (void)onDelayReleaseTimeout;
- (void)removeDelayReleaseWrap;
- (void)callbackEndTask;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(BOOL)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithString:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (id)weakDelayReleaseWrap;
- (void)setWeakDelayReleaseWrap:(id)arg1;
- (id)delayReleaseTimer;
- (void)setDelayReleaseTimer:(id)arg1;
- (id /* block */)openHandler;
- (void)setOpenHandler:(id /* block */)arg1;
- (id /* block */)closeHandler;
- (void)setCloseHandler:(id /* block */)arg1;
- (id /* block */)errorHandler;
- (void)setErrorHandler:(id /* block */)arg1;
- (id /* block */)messageHandler;
- (void)setMessageHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
