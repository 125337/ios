@interface FWFWebViewConfigurationHostApiImpl : NSObject <FWFWKWebViewConfigurationHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)webViewConfigurationForIdentifier:(id)arg1;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)createFromWebViewWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 error:(id *)arg3;
- (void)setAllowsInlineMediaPlaybackForConfigurationWithIdentifier:(id)arg1 isAllowed:(id)arg2 error:(id *)arg3;
- (void)setMediaTypesRequiresUserActionForConfigurationWithIdentifier:(id)arg1 forTypes:(id)arg2 error:(id *)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

