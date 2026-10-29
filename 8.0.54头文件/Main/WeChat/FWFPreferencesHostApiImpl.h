@interface FWFPreferencesHostApiImpl : NSObject <FWFWKPreferencesHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)preferencesForIdentifier:(id)arg1;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)createFromWebViewConfigurationWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (void)setJavaScriptEnabledForPreferencesWithIdentifier:(id)arg1 isEnabled:(id)arg2 error:(id *)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

