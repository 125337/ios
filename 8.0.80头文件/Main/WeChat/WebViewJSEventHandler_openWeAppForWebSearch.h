@interface WebViewJSEventHandler_openWeAppForWebSearch : WebviewJSEventHandler_openWeAppPage
{
    BOOL _useTransparentBackground; // +0x8
    WSWebViewPluginScheduler * _pluginScheduler; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)configureOpenParameterBeforeOpen:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)handleRunningEvent:(id)arg1;
- (BOOL)useTransparentBackground;
- (void)setUseTransparentBackground:(BOOL)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (void).cxx_destruct;
@end
