@interface QMCBaseJavaScriptBridge : NSObject
{
    long long _uniqueId; // +0x8
    NSMutableDictionary * _responseCallbacks; // +0x10
    NSMutableDictionary * _messageHandlers; // +0x18
}
- (id)init;
- (void)registerHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)sendData:(id)arg1 responseCallback:(id /* block */)arg2 handlerName:(id)arg3;
- (void)dispatchMessage:(id)arg1;
- (void)handleHoneMessageFromJS:(id)arg1;
- (void)evaluateJavascript:(id)arg1;
- (void)log:(id)arg1 json:(id)arg2;
- (id)javaScriptBridge;
- (id)serializeMessage:(id)arg1 pretty:(BOOL)arg2;
- (id)deserializeMessageJSON:(id)arg1;
- (void)dealloc;
- (id)responseCallbacks;
- (void)setResponseCallbacks:(id)arg1;
- (id)messageHandlers;
- (void)setMessageHandlers:(id)arg1;
- (void).cxx_destruct;
@end
