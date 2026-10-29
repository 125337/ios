@interface CBTChatbotBridge : NSObject <ChatbotBridgeEndpointBase>
{
    BOOL _attached; // +0x8
    ChatbotBridgeEndpointCallback * _endpointCallback; // +0x10
    ChatbotBridgeEndpoint * _endpoint; // +0x18
    NSMutableDictionary * _handlers; // +0x20
    NSMutableDictionary * _observers; // +0x28
    NSString * _endpointId; // +0x30
    unsigned long long _generation; // +0x38
    unsigned long long _capabilityRevision; // +0x40
    unsigned long long _nextRequestId; // +0x48
}
+ (id)shared;
- (id)initPrivate;
- (BOOL)isValidResponse:(id)arg1 forRequest:(id)arg2;
- (void)callOn:(id)arg1 method:(int)arg2 message:(id)arg3 responseClass:(Class)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)callOn:(id)arg1 method:(int)arg2 payload:(id)arg3 responseParser:(id /* block */)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)notifyToEnds:(unsigned int)arg1 method:(int)arg2 event:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notify:(int)arg1 toEnds:(unsigned int)arg2 event:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyOthers:(int)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyWithScope:(int)arg1 runtimeMask:(unsigned int)arg2 method:(int)arg3 payload:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)registerHandler:(int)arg1 handler:(id /* block */)arg2;
- (void)unregisterHandler:(int)arg1;
- (void)registerHandler:(int)arg1 requestClass:(Class)arg2 handler:(id /* block */)arg3;
- (id)listen:(int)arg1 eventClass:(Class)arg2 eventHandler:(id /* block */)arg3;
- (id)listen:(int)arg1 parser:(id /* block */)arg2 handler:(id /* block */)arg3;
- (id)listenBoundToViewController:(id)arg1 method:(int)arg2 eventClass:(Class)arg3 eventHandler:(id /* block */)arg4;
- (id)listenBoundToView:(id)arg1 method:(int)arg2 eventClass:(Class)arg3 eventHandler:(id /* block */)arg4;
- (id)bindListener:(id)arg1 toAnchor:(id)arg2;
- (void)detach;
- (void)setCallback:(id)arg1;
- (void)dispatchAsync:(unsigned long long)arg1 envelope:(id)arg2;
- (void)ensureAttached:(id /* block */)arg1;
- (id)descriptorLocked;
- (id)descriptor;
- (void)capabilitiesChanged;
- (void)sendCapabilities;
- (void)sendCapabilitiesWithDescriptor:(id)arg1;
- (void)removeObserver:(id)arg1 method:(int)arg2;
- (void)dispatchEvent:(id)arg1;
- (void)completeTask:(unsigned long long)arg1 response:(id)arg2;
- (id)successEnvelope:(id)arg1 payload:(id)arg2;
- (id)errorEnvelope:(id)arg1 code:(int)arg2 message:(id)arg3;
- (id)errorWithCode:(int)arg1 message:(id)arg2;
- (void)callBoolWithMethodId:(unsigned int)arg1 request:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)callBoolOn:(id)arg1 methodId:(unsigned int)arg2 request:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)callInt32WithMethodId:(unsigned int)arg1 request:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)callInt32On:(id)arg1 methodId:(unsigned int)arg2 request:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)callInt64WithMethodId:(unsigned int)arg1 request:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)callInt64On:(id)arg1 methodId:(unsigned int)arg2 request:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)callDoubleWithMethodId:(unsigned int)arg1 request:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)callDoubleOn:(id)arg1 methodId:(unsigned int)arg2 request:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)callStringWithMethodId:(unsigned int)arg1 request:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)callStringOn:(id)arg1 methodId:(unsigned int)arg2 request:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyBoolToEnds:(unsigned int)arg1 methodId:(unsigned int)arg2 value:(BOOL)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyInt32ToEnds:(unsigned int)arg1 methodId:(unsigned int)arg2 value:(int)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyInt64ToEnds:(unsigned int)arg1 methodId:(unsigned int)arg2 value:(long long)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyDoubleToEnds:(unsigned int)arg1 methodId:(unsigned int)arg2 value:(double)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyStringToEnds:(unsigned int)arg1 methodId:(unsigned int)arg2 value:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyBoolToOtherEndsWithMethodId:(unsigned int)arg1 value:(BOOL)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyInt32ToOtherEndsWithMethodId:(unsigned int)arg1 value:(int)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyInt64ToOtherEndsWithMethodId:(unsigned int)arg1 value:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyDoubleToOtherEndsWithMethodId:(unsigned int)arg1 value:(double)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyStringToOtherEndsWithMethodId:(unsigned int)arg1 value:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)listenBoolWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (id)listenInt32WithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (id)listenInt64WithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (id)listenDoubleWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (id)listenStringWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)registerBoolHandlerWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)registerBoolHandlerWithMethodId:(unsigned int)arg1 requestClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)registerInt32HandlerWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)registerInt32HandlerWithMethodId:(unsigned int)arg1 requestClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)registerInt64HandlerWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)registerInt64HandlerWithMethodId:(unsigned int)arg1 requestClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)registerDoubleHandlerWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)registerDoubleHandlerWithMethodId:(unsigned int)arg1 requestClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)registerStringHandlerWithMethodId:(unsigned int)arg1 handler:(id /* block */)arg2;
- (void)registerStringHandlerWithMethodId:(unsigned int)arg1 requestClass:(Class)arg2 handler:(id /* block */)arg3;
- (id)endpointCallback;
- (void)setEndpointCallback:(id)arg1;
- (id)endpoint;
- (void)setEndpoint:(id)arg1;
- (id)handlers;
- (void)setHandlers:(id)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)endpointId;
- (void)setEndpointId:(id)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (unsigned long long)capabilityRevision;
- (void)setCapabilityRevision:(unsigned long long)arg1;
- (unsigned long long)nextRequestId;
- (void)setNextRequestId:(unsigned long long)arg1;
- (BOOL)attached;
- (void)setAttached:(BOOL)arg1;
- (void).cxx_destruct;
@end
