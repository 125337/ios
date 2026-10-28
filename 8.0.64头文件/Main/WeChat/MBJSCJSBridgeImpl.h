@interface MBJSCJSBridgeImpl : NSObject
{
    MBJSCRuntime * _runtime; // +0x8
    JSContext * _context; // +0x10
    void * _jsbridge; // +0x18
    NSMutableDictionary * _dicHandlers; // +0x20
    long long _handlerId; // +0x28
    NSThread * _thread; // +0x30
    HolderBase * _scriptState; // +0x38
    unsigned long long _extJsApiCallbackId; // +0x40
    NSMutableDictionary * _extJsApiCallbackResults; // +0x48
    NSMutableDictionary * _extJsApiAsyncCallbacks; // +0x50
    NSMutableDictionary * _onEventCallbacksDict; // +0x58
}
- (id)initWithRuntime:(id)arg1;
- (void)releaseContext;
- (void)dealloc;
- (id)invoke:(id)arg1 params:(OpaqueJSValue *)arg2 callback:(OpaqueJSValue *)arg3 privateArgs:(OpaqueJSValue *)arg4 exceptionState:(void *)arg5;
- (void)on:(id)arg1 callback:(OpaqueJSValue *)arg2;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (id)runtime;
- (id)context;
- (void *)jsbridge;
- (void)setJsbridge:(void *)arg1;
- (id)dicHandlers;
- (void)setDicHandlers:(id)arg1;
- (long long)handlerId;
- (void)setHandlerId:(long long)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (HolderBase *)scriptState;
- (void)setScriptState:(HolderBase *)arg1;
- (unsigned long long)extJsApiCallbackId;
- (void)setExtJsApiCallbackId:(unsigned long long)arg1;
- (id)extJsApiCallbackResults;
- (void)setExtJsApiCallbackResults:(id)arg1;
- (id)extJsApiAsyncCallbacks;
- (void)setExtJsApiAsyncCallbacks:(id)arg1;
- (id)onEventCallbacksDict;
- (void)setOnEventCallbacksDict:(id)arg1;
- (void).cxx_destruct;
@end
