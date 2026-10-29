@interface WSTemplateContainerView : WSContainerBaseView <_TtP6WeChat33WSWebViewExceptionHandlerDelegate_, WSWebViewPluginableProtocol, WSContainerView>
{
    WSWebViewPluginScheduler * _pluginScheduler; // +0x8
    WSk1kViewConfig * _config; // +0x10
    WSLocalTemplateController * _templateController; // +0x18
    WKWebSearchView * _webview; // +0x20
    NSNumber * _categoryId; // +0x28
    _TtC6WeChat25WSWebviewExceptionCatcher * _eCatcher; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (void)initViewIfNeed;
- (id)getCategoryId;
- (long long)k1kCategoryId;
- (void)initViewIfNeedFor:(unsigned long long)arg1;
- (void)initPlugins;
- (id)templateController;
- (id)eCatcher;
- (void)updateDaynamicConfig;
- (BOOL)isWebviewActive;
- (void)exposed;
- (id)communicator;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (void)reloadWebview;
- (void)exitPagewhenFault;
- (BOOL)enableShowExceptionTip;
- (void)recreateWebview;
- (void)onSwitchToThisView:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setTemplateController:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (void)setECatcher:(id)arg1;
- (void).cxx_destruct;
@end

