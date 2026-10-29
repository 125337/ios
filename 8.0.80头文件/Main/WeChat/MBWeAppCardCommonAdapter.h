@interface MBWeAppCardCommonAdapter : MBCommonAdapter
{
    _TtC6WeChat26MagicWeAppCardJsApiContext * _jsapiContext; // +0x8
}
- (id)GetWeAppPluginByName:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (BOOL)isAgentMode;
- (BOOL)isHeadless;
- (id)getPresentingViewController;
- (id)getParentViewController;
- (id)jsapiContext;
- (void)setJsapiContext:(id)arg1;
- (void).cxx_destruct;
@end
