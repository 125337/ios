@interface WebviewJSEventHandler_nativeWXPayCgiTunnel : WebviewJSEventHandlerBase
{
    NSMutableArray * _inflightRequests; // +0x8
}
- (void)dealloc;
- (id)inflightRequests;
- (BOOL)checkIfParamValid:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onRequestFinished:(id)arg1 result:(id)arg2;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)setInflightRequests:(id)arg1;
- (void).cxx_destruct;
@end
