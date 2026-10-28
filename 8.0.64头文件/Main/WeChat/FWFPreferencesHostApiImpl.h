@interface FWFPreferencesHostApiImpl : NSObject <FWFWKPreferencesHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)preferencesForIdentifier:(long long)arg1;
- (void)createWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)createFromWebViewConfigurationWithIdentifier:(long long)arg1 configurationIdentifier:(long long)arg2 error:(id *)arg3;
- (void)setJavaScriptEnabledForPreferencesWithIdentifier:(long long)arg1 isEnabled:(BOOL)arg2 error:(id *)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
