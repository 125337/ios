@interface WAJSEventHandler_openADCanvas : WAJSEventHandler_BaseEvent <WCCanvasDynamicDataLoaderDelegate, MMWebViewDelegate, WCCanvasPageViewControllerDelegate, WCAdDynamicCanvasViewControllerDelegate>
{
    NSDictionary * _param; // +0x8
    WCCanvasDynamicDataLoader * _dataLoader; // +0x10
    WCAdvertiseInfo * _adInfo; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg1 inParams:(id)arg2;
- (id)dataLoader;
- (void)onCanvasServerDataReturn:(id)arg1 errorCode:(int)arg2 forLoadParams:(id)arg3;
- (void)webViewReturn:(id)arg1;
- (void)onCloseCanvasPageView;
- (void)onCloseDynamicCanvasPageView;
- (void)setDataLoader:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (void).cxx_destruct;
@end
