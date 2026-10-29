@interface WebviewJSEventHandler_openGameUrlWithExtraWebView : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)openLiteWitInfo:(id)arg1 liteAppParam:(id)arg2 liteVc:(id)arg3 transParentLiteApp:(BOOL)arg4;
- (void)handleJumpInfo:(id)arg1 paramDict:(id)arg2 event:(id)arg3;
- (id)getWebViewController:(id)arg1 dic:(id)arg2 statusBarBgColor:(id)arg3 statusBarStyle:(id)arg4 toUrl:(id)arg5;
- (void)presntTransparrentLiteViewController:(id)arg1;
- (void)openWebview:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)analyzeBackColor:(id *)arg1 frontColor:(id *)arg2 fromUrl:(id)arg3 andParamColor:(id)arg4 andParamStyle:(id)arg5 isUseImmersiveUI:(BOOL *)arg6;
@end

