@interface WebviewJSEventHandler_openEnterpriseContact : WebviewJSEventHandlerBase <MMWebViewDelegate, PBMessageObserverDelegate>
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
@end

