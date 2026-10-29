@interface FWFWebsiteDataStoreHostApiImpl : NSObject <FWFWKWebsiteDataStoreHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)websiteDataStoreForIdentifier:(id)arg1;
- (void)createFromWebViewConfigurationWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (void)createDefaultDataStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)removeDataFromDataStoreWithIdentifier:(id)arg1 ofTypes:(id)arg2 modifiedSince:(id)arg3 completion:(id /* block */)arg4;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

