@interface FWFWebViewConfigurationHostApiImpl : NSObject <FWFWKWebViewConfigurationHostApi>
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1 instanceManager:(id)arg2;
- (id)webViewConfigurationForIdentifier:(long long)arg1;
- (void)createWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)createFromWebViewWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 error:(id *)arg3;
- (void)setAllowsInlineMediaPlaybackForConfigurationWithIdentifier:(long long)arg1 isAllowed:(BOOL)arg2 error:(id *)arg3;
- (void)setLimitsNavigationsToAppBoundDomainsForConfigurationWithIdentifier:(long long)arg1 isLimited:(BOOL)arg2 error:(id *)arg3;
- (void)setMediaTypesRequiresUserActionForConfigurationWithIdentifier:(long long)arg1 forTypes:(id)arg2 error:(id *)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
