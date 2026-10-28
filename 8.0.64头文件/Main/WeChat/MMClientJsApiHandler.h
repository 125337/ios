@interface MMClientJsApiHandler : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate, PBMessageObserverDelegate>
{
    BOOL _disableInvokeApi; // +0x8
    BOOL _disableCgiApi; // +0x9
    NSString * _bizType; // +0x10
    long long _basePkgVersion; // +0x18
    long long _bizPkgVersion; // +0x20
    NSArray * _allowedCgiList; // +0x28
    NSString * _bizDomain; // +0x30
    NSString * _canvasId; // +0x38
    id <MMClientJsApiHandlerDelegate> _delegate; // +0x40
    WebviewJSEventHandlerFacade * _jsEventHandler; // +0x48
    MemoryMappedKV * _slotKv; // +0x50
    id /* block */ _callbackBlock; // +0x58
    id /* block */ _cgiCallbackBlock; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)setupApiWithJSContext:(id)arg1;
- (void)addApi_getBasePkgVersion:(id)arg1;
- (void)addApi_getBizPkgVersion:(id)arg1;
- (id)slotKv;
- (void)addApi_setLocalData:(id)arg1;
- (void)addApi_getLocalData:(id)arg1;
- (void)addApi_invoke:(id)arg1;
- (void)reportInvokeJsapi:(id)arg1;
- (void)addApi_cgi:(id)arg1;
- (void)doCommenCGIWithCmdId:(long long)arg1 cgiUrl:(id)arg2 reqProtoBuf:(id)arg3 callback:(id)arg4;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (long long)basePkgVersion;
- (void)setBasePkgVersion:(long long)arg1;
- (long long)bizPkgVersion;
- (void)setBizPkgVersion:(long long)arg1;
- (BOOL)disableInvokeApi;
- (void)setDisableInvokeApi:(BOOL)arg1;
- (BOOL)disableCgiApi;
- (void)setDisableCgiApi:(BOOL)arg1;
- (id)allowedCgiList;
- (void)setAllowedCgiList:(id)arg1;
- (id)bizDomain;
- (void)setBizDomain:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jsEventHandler;
- (void)setJsEventHandler:(id)arg1;
- (void)setSlotKv:(id)arg1;
- (id /* block */)callbackBlock;
- (void)setCallbackBlock:(id /* block */)arg1;
- (id /* block */)cgiCallbackBlock;
- (void)setCgiCallbackBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
