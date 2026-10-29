@interface UPWebViewJavascriptBridgeBase : NSObject
{
    id _webViewDelegate; // +0x8
    long long _uniqueId; // +0x10
    id <UPWebViewJavascriptBridgeBaseDelegate> _delegate; // +0x18
    NSMutableArray * _startupMessageQueue; // +0x20
    NSMutableDictionary * _responseCallbacks; // +0x28
    NSMutableDictionary * _messageHandlers; // +0x30
    id /* block */ _messageHandler; // +0x38
}
+ (void)enableLogging;
+ (void)setLogMaxLength:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)reset;
- (void)sendData:(id)arg1 responseCallback:(id /* block */)arg2 handlerName:(id)arg3;
- (void)flushMessageQueue:(id)arg1;
- (void)injectJavascriptFile;
- (BOOL)isWebViewJavascriptBridgeURL:(id)arg1;
- (BOOL)isSchemeMatch:(id)arg1;
- (BOOL)isQueueMessageURL:(id)arg1;
- (BOOL)isBridgeLoadedURL:(id)arg1;
- (void)logUnkownMessage:(id)arg1;
- (id)webViewJavascriptCheckCommand;
- (id)webViewJavascriptFetchQueyCommand;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (void)_evaluateJavascript:(id)arg1;
- (void)_queueMessage:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (id)_serializeMessage:(id)arg1 pretty:(BOOL)arg2;
- (id)_deserializeMessageJSON:(id)arg1;
- (void)_log:(id)arg1 json:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)startupMessageQueue;
- (void)setStartupMessageQueue:(id)arg1;
- (id)responseCallbacks;
- (void)setResponseCallbacks:(id)arg1;
- (id)messageHandlers;
- (void)setMessageHandlers:(id)arg1;
- (id /* block */)messageHandler;
- (void)setMessageHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
