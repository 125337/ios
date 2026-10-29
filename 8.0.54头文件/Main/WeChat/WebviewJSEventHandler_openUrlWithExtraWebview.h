@interface WebviewJSEventHandler_openUrlWithExtraWebview : WebviewJSEventHandlerBase <MMWebViewDelegate, MMWebPageSheetDelegate>
{
    id /* block */ _callbackBlock; // +0x8
}
+ (BOOL)getGlobalHasShow;
+ (void)setGlobalHasShow:(BOOL)arg1;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)backgroundTaskForKey:(id)arg1;
- (id)csPreInjectJSExtObjFromParams:(id)arg1;
- (id)genNewWebExtraInfoFromParams:(id)arg1 toUrl:(id)arg2 csPreInjectJSExtObj:(id)arg3;
- (id)genNewWebConfigFromParams:(id)arg1;
- (id)pageSheetConfigFromParams:(id)arg1;
- (id)currentPageSheet;
- (id)pageSheetAdapterPlugin;
- (void)delayDoAction;
- (void)webViewReturn:(id)arg1;
- (void)ShowWebViewControllerWithType:(unsigned long long)arg1 andWebViewVC:(id)arg2;
- (void)webPageSheetDidDismiss:(id)arg1;
- (void).cxx_destruct;
@end

