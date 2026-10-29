@interface JITRuntimeJsApiHandler : NSObject
{
    BOOL _hasPendingNotifyCallbackCheck; // +0x8
    BOOL _hasPendingNotifyEventCheck; // +0x9
    BOOL _useXHRTransferJSEvent; // +0xa
    NSMutableDictionary * _jsApiCallBackResult; // +0x10
    NSMutableDictionary * _jsApiUseBase64; // +0x18
    NSMutableArray * _pendingJITResult; // +0x20
    NSMutableArray * _pendingJITEvent; // +0x28
    NSObject * _pendingJITResultLock; // +0x30
    unsigned long long _jitLastNotifyCallbackTimeInMs; // +0x38
    unsigned long long _jitLastNotifyEventTimeInMs; // +0x40
    id <JITRuntimeJsApiHandlerDelegate> _delegate; // +0x48
    JITRuntime * _runtime; // +0x50
    JITRuntimeNativeBufferMgr * _nativeBufferMgr; // +0x58
    NSMutableDictionary * _commandBufferBuffers; // +0x60
}
- (void)innerProcessJsApiCommandBuffer:(id)arg1;
- (id)innerProcessJsApiCommandBuffer:(id)arg1 data:(id)arg2 workerId:(unsigned int)arg3;
- (id)processJsApiCommandBuffer:(const char *)arg1 useBase64:(BOOL)arg2 workerId:(unsigned int)arg3;
- (id)processInvokeHandler:(id)arg1 eventId:(int)arg2 dicParam:(id)arg3 useBase64:(BOOL)arg4;
- (unsigned int)processArrayBuffer:(id)arg1 fromEncode:(BOOL)arg2;
- (void)handleJsApiReturn:(id)arg1 ret:(id)arg2 callbackId:(unsigned int)arg3;
- (BOOL)processInnerJsApi:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (id)init;
- (id)processJsApi:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (void)processJsApiXHRCommandBuffer:(id)arg1;
- (void)processJsApiCommandBuffer:(id)arg1;
- (void)invokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 workerId:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)realInvokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 workerId:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)invokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 useBase64:(BOOL)arg3 workerId:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)checkNotifyCallback;
- (id)getJsApiErrorReuslt:(id)arg1 msg:(id)arg2;
- (id)processJsApi:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 useBase64:(BOOL)arg4;
- (void)sendJSEvent:(id)arg1;
- (void)innerSendJSEvent:(id)arg1;
- (void)checkBatchSendJSEvent;
- (void)sendErrorEvent:(id)arg1 workerId:(unsigned int)arg2;
- (void)pauseAsyncFlush;
- (void)resumeAsyncFlush;
- (id)convertNativeNestedBuffers:(id)arg1 useBase64:(BOOL)arg2;
- (id)convertNativeParamsToJsApiResult:(id)arg1 getError:(id *)arg2 useBase64:(BOOL)arg3;
- (id)parseNestedBuffers:(id)arg1 useBase64:(BOOL)arg2;
- (id)parseJsApiNativeBufferParams:(id)arg1 getError:(id *)arg2 useBase64:(BOOL)arg3;
- (void)appendJITResult:(id)arg1 callbackID:(unsigned int)arg2 workerId:(unsigned int)arg3;
- (id)popPendingJITResults;
- (id)popPendingPureStringJITResults;
- (unsigned int)pendingJITResultCount;
- (id)convertNestedBuffers:(id)arg1 allArrayBuffer:(id)arg2 arrayBufferMetaArray:(id)arg3 bufferLength:(long long *)arg4;
- (id)packJITResult:(id)arg1;
- (id)jsApiCallBackResult;
- (void)setJsApiCallBackResult:(id)arg1;
- (id)jsApiUseBase64;
- (void)setJsApiUseBase64:(id)arg1;
- (id)pendingJITResult;
- (void)setPendingJITResult:(id)arg1;
- (id)pendingJITEvent;
- (void)setPendingJITEvent:(id)arg1;
- (id)pendingJITResultLock;
- (void)setPendingJITResultLock:(id)arg1;
- (unsigned long long)jitLastNotifyCallbackTimeInMs;
- (void)setJitLastNotifyCallbackTimeInMs:(unsigned long long)arg1;
- (unsigned long long)jitLastNotifyEventTimeInMs;
- (void)setJitLastNotifyEventTimeInMs:(unsigned long long)arg1;
- (BOOL)hasPendingNotifyCallbackCheck;
- (void)setHasPendingNotifyCallbackCheck:(BOOL)arg1;
- (BOOL)hasPendingNotifyEventCheck;
- (void)setHasPendingNotifyEventCheck:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (id)nativeBufferMgr;
- (void)setNativeBufferMgr:(id)arg1;
- (id)commandBufferBuffers;
- (void)setCommandBufferBuffers:(id)arg1;
- (BOOL)useXHRTransferJSEvent;
- (void)setUseXHRTransferJSEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end

