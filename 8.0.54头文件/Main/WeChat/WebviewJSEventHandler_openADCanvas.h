@interface WebviewJSEventHandler_openADCanvas : WebviewJSEventHandlerBase <WCCanvasDynamicDataLoaderDelegate>
{
    WCCanvasDynamicDataLoader * _dataLoader; // +0x8
    WCAdvertiseInfo * _adInfo; // +0x10
}
- (unsigned long long)getUInt64ForKey:(id)arg1 inParams:(id)arg2;
- (id)getStringForKey:(id)arg1 inParams:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)dataLoader;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)setDataLoader:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (void).cxx_destruct;
@end

