@interface WebviewJSEventHandler_openSearchCanvas : WebviewJSEventHandlerBase <WCCanvasDynamicDataLoaderDelegate>
{
    WCCanvasDynamicDataLoader * _dataLoader; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)dataLoader;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)setDataLoader:(id)arg1;
- (void).cxx_destruct;
@end

