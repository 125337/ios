@interface FWFWebsiteDataStoreHostApiImpl : NSObject <FWFWKWebsiteDataStoreHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)websiteDataStoreForIdentifier:(long long)arg1;
- (void)createFromWebViewConfigurationWithIdentifier:(long long)arg1 configurationIdentifier:(long long)arg2 error:(id *)arg3;
- (void)createDefaultDataStoreWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)removeDataFromDataStoreWithIdentifier:(long long)arg1 ofTypes:(id)arg2 modifiedSince:(double)arg3 completion:(id /* block */)arg4;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
