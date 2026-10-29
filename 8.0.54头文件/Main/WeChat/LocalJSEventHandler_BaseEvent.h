@interface LocalJSEventHandler_BaseEvent : NSObject
{
    NSString * _callbackId; // +0x8
    id <LocalJSEventHandlerContextDelegate> _context; // +0x10
    NSString * _debugModuleName; // +0x18
    NSString * _cgiIdentifierKey; // +0x20
    NSString * _requestId; // +0x28
    LocalJSEventHandler_BaseEvent * _attachEventHandler; // +0x30
    NSDictionary * _extraData; // +0x38
    _TtC6WeChat14LocalJSXHRTask * _xhrTask; // +0x40
}
- (void)startwork:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (BOOL)enabled;
- (BOOL)useParallelRequest;
- (BOOL)__tryUseParallelRequestCache;
- (id)JSAPIName;
- (void)endWithParams:(id)arg1;
- (void)endWithMessage:(id)arg1;
- (void)endWithErrormsg:(id)arg1;
- (void)endWithRetCode:(long long)arg1 errMsg:(id)arg2;
- (void)endWithEvent:(id)arg1 result:(id)arg2;
- (id)debugModuleName;
- (id)webViewPluginScheduler;
- (id)webviewOwner;
- (id)curViewController;
- (id)getCurrentUrl;
- (id)description;
- (id)callbackId;
- (void)setCallbackId:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setDebugModuleName:(id)arg1;
- (id)cgiIdentifierKey;
- (void)setCgiIdentifierKey:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)attachEventHandler;
- (void)setAttachEventHandler:(id)arg1;
- (id)extraData;
- (id)xhrTask;
- (void)setXhrTask:(id)arg1;
- (void).cxx_destruct;
@end

